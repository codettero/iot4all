#include <SPI.h>
#include <Ethernet2.h>
#include <Wire.h>

#include "pitches.h"

// the buzzer pin
const int buzzerPin = 9;
const int noteDuration = 500;

String noteMuzicale[] = {
  "DO", "RE", "MI", "FA", "SOL", "LA"};
  
// Notele din picthes.h echivalente cu cele din noteMuzicale
int notes[] = {
  NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4,NOTE_A4};

bool canta = false;
String urmatoareaNota;


// MAC address from Ethernet shield sticker under board
byte mac[] = { 0x90, 0xA2, 0xDA, 0x0F, 0xE6, 0x95 };
IPAddress ip(169,254,204,241); // IP address, may need to change depending on network
EthernetServer server(80);  // create a server at port 80
String HTTP_req;          // stores the HTTP request


void setup()
{
    Ethernet.begin(mac, ip);  // initialize Ethernet device
    server.begin();           // start to listen for clients
    Serial.begin(9600);       // for diagnostics
    pinMode(7, OUTPUT);       // LED on pin 2
}

void loop()
{
    EthernetClient client = server.available();  // try to get client

    if (client) {  // got client?
        boolean currentLineIsBlank = true;
        while (client.connected()) {
            if (client.available()) {   // client data available to read
                char c = client.read(); // read 1 byte (character) from client
                HTTP_req += c;  // save the HTTP request 1 char at a time
                // last line of client request is blank and ends with \n
                // respond to client only after last line received
                if (c == '\n' && currentLineIsBlank) {
                  // send a standard http response header
                  client.println("HTTP/1.1 200 OK");
                  client.println("Content-Type: text/html");
                  client.println("Connection: close");
                  client.println();
                  
                  // send web page
                  client.println("<!DOCTYPE html>");
                  client.println("<html>");
                  /**
                   * HEAD
                   */
                  client.println("<head>");
                  client.println("<title>Ardu Control</title>");
                  client.println("</head>");
                  /**
                   * BODY
                   */
                  client.println("<body>");
                  
                      /** INCEPUT
                       * Aici pui html-ul tau
                       * Nu uita sa apelezi ProcessClick()
                       */
                  

                  
                      /** SFARSIT
                       * AICI PUI HTML-UL TAU
                       */
                  
                  client.println("</body>");
                  
                  client.println("</html>");
                  HTTP_req = "";    // finished with request, empty string
                  break;
                }
                // every line of text received from the client ends with \r\n
                if (c == '\n') {
                    // last character on line of received text
                    // starting new line with next character read
                    currentLineIsBlank = true;
                }
                else if (c != '\r') {
                    // a text character was received from client
                    currentLineIsBlank = false;
                } 
            } // end if (client.available())
        } // end while (client.connected())
        delay(1);      // give the web browser time to receive the data
        client.stop(); // close the connection
        
        // Daca buzzerul trebuie sa cante, da comenzile dorite
        if (canta) {
          /**
          * Aici faci buzzerul sa cante in functie
          de ce nota ai gasit in ProcessClick :D
          */
          }
          canta = false;
        }
    } // end if (client)
    
}

void ProcessClick(EthernetClient cl){
  Serial.println(HTTP_req); // afisare request HTTP
  String sirButonApasat = "GET /?note=";  // "note" este numele butonului din pagina web (atributul name)
  int indexSir =  HTTP_req.indexOf(sirButonApasat); 
  
  if(indexSir == -1){ // nu a fost apasat un buton in request-ul curent
    return;
  }
  
  int indexStart = indexSir + sirButonApasat.length(); // Inceput sir nota
  
  // Nota din requestul GET
  urmatoareaNota = HTTP_req.substring(indexStart, indexStart + 3);
  urmatoareaNota.trim(); // elimina spatiile
  
  canta = true; // da comanda buzzer
}

   
