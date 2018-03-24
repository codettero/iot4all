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
 
// TODO 0.1: Setam pin-ul buzzer-ului

 
// TODO 0.2: Salvam pinii analogici la care sunt conectate fotorezistentele in 
// niste variabile ( de ex, FOTORX, unde X e numarul pin-ului)

  
void setup() {
  // TODO 1.1: Configuram fiecare pin asociat fotorezistentelor




  	
  // TODO 1.2: Configuram pin-ul asociat buzzer-ului

  
}
 
void loop() {

  // TODO 2.1: Citim valorile date de fotorezistente si le salvam
  // in cate o variabila




    
  // TODO 2.2: Verificam daca valoarea citita de la prima fotorezistenta este
  // mai mare decat o anumita valoare de prag setata de noi.
  
  	// TODO 2.2.1: Ii transmitem buzzer-ului instructiunea de a emite o nota
   	// aleasa de noi.
   	
   	// TODO 2.2.2: Introducem o pauza pentru ca buzzer-ul sa aiba suficient timp
   	// sa emita sunetul astfel incat noi sa il putem percepe
   	
   	// TODO 2.2.3: Ii transmitem buzzer-ului instructiunea de a inceta emiterea
   	// notei
   	
  }
  // TODO 2.3 (optional): Afisam in Serial Monitor valoarea citita de pe
  // pinul analogic
  
   	
  // TODO 2.4: Se repeta pasii 2.2 - 2.3 pentru toate fotorezistentele
    










    Serial.println("\n");

    // TODO 3: Introducem un delay de 100ms pentru stabilitate
  	
}
