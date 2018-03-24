#include "pitches.h"
 
// Notele cu care vom lucra noi, asa cum sunt definite in pitches.h
int notes[] = {
  NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4,NOTE_A4};
 
// Durata fiecarei note
const int noteDuration = 500;
 
int sensorValue = 0;      
// Un vector care stocheaza valorile maxime obtinute de la fotorezistori. Folosit la 
//calibrare
// Putem incepe prin a presupune ca fiecare maxim este 0
int sensorMaxValues[] = {
  0, 0, 0, 0, 0, 0};
 
//  0.1: Setam pin-ul buzzer-ului
const int buzzerPin = 9;
 
//  0.2: Salvam pinii analogici la care sunt conectate fotorezistentele in 
// niste variabile ( de ex, FOTORX, unde X e numarul pin-ului)
int FOTOR1=1;
int FOTOR2=2;
int FOTOR3=3;
int FOTOR4=4;
int FOTOR5=5;
  
void setup() {
  //  1.1: Configuram fiecare pin asociat fotorezistentelor
  pinMode(FOTOR1, INPUT);
  pinMode(FOTOR2, INPUT);
  pinMode(FOTOR3, INPUT);
  pinMode(FOTOR4, INPUT);
  pinMode(FOTOR5, INPUT);
  	
  //  1.2: Configuram pin-ul asociat buzzer-ului
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}
 
void loop() {

  //  2.1: Citim valorile date de fotorezistente si le salvam
  // in cate o variabila
  int v1 = analogRead(FOTOR1);
  int v2 = analogRead(FOTOR2);
  int v3 = analogRead(FOTOR3);
  int v4 = analogRead(FOTOR4);
  int v5 = analogRead(FOTOR5);
    
  //  2.2: Verificam daca valoarea citita de la prima fotorezistenta este
  // mai mare decat o anumita valoare de prag setata de noi.
  if(v1>=500){
  	//  2.2.1: Ii transmitem buzzer-ului instructiunea de a emite o nota
   	// aleasa de noi.
  	tone(buzzerPin, notes[1]); 
  	//  2.2.2: Introducem o pauza pentru ca buzzer-ul sa aiba suficient timp
  	// sa emita sunetul astfel incat noi sa il putem percepe
   	delay(noteDuration);
  	//  2.2.3: Ii transmitem buzzer-ului instructiunea de a inceta emiterea
   	// notei
   	noTone(buzzerPin);
  }
  //  2.3 (optional): Afisam in Serial Monitor valoarea citita de pe
  pinul analogic
  Serial.println(v1);  
   	
  //  2.4: Se repeta pasii 2.2 - 2.3 pentru toate fotorezistentele
  if(v2>=500){
    tone(buzzerPin, notes[2]);
    delay(noteDuration);
    noTone(buzzerPin);
  }
  Serial.println(v2);
    
  if(v3>=1000){
    tone(buzzerPin, notes[3]);
    delay(noteDuration);
    noTone(buzzerPin);
  }
  Serial.println(v3);
      
  if(v4>=500){ 
    tone(buzzerPin, notes[4]);
    delay(noteDuration);
    noTone(buzzerPin);
  }
  Serial.println(v4);
      
  if(v5>=500) {
    tone(buzzerPin, notes[5]);
    delay(noteDuration);
    noTone(buzzerPin);
  }
  Serial.println(v5);
    

  Serial.println("\n");

  //  3: Introducem un delay de 100ms pentru stabilitate
  delay(100);
}
