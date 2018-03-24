void setup() {
	//  0: Declaram... initializam

	//  0.1 Cu un for ne plimbam prin toti pinii la care sunt legate led-urile
	for(int i = 2; i < 10; i++) {
		//  0.2: Declaram fiecare pin de la 2 la 10 ca fiind output
		// folosind pinMode
		pinMode(i, OUTPUT);
  	}


  	Serial.begin(9600);
}

/*
 1: 
Jocul 1 de lumini va aprinde unul câte unul toate
ledurile și apoi le va stinge în ordine inversă.
*/
void joc1 () {  
	//  1.1 Cu un for ne plimbam prin toti pinii la care sunt legate led-urile
  	for (int i = 2 ; i < 10; i++) {   
  		//  1.2: Aprindem fiecare led folosind comanda digitalWrite
    	digitalWrite(i, HIGH);      
    	//  1.3: Setam o pauza de 500 ms intre aprinderile fiecarui led
    	delay(500); 
  	}    
  	//  1.4: Cu un alt for ne plimbam in ordine inversa printre pini ca sa ii stingem
  	for (int i = 9; i > 1; i--) {
  		// 1.5: Stingem fiecare led folosind comanda digitalWrite
    	digitalWrite(i, LOW);  
    	//  1.6: Setam o pauza de 500 ms intre stingerile fiecarui led    
    	delay(500);    
  }
}

/*
 2: 
Jocul 2 de lumini va aprinde alternativ ledurile de rang
impar și ledurile de rang par.
*/
void joc2() {   
	//  2.1 Cu un for ne plimbam prin toti pinii la care sunt legate led-urile
  	for (int i=2; i<10; i++) {   
	  	//  2.2. Verificam daca un led este pe pozitie para si, daca da, il aprindem.
	  	// Altfel, il stingem.     
	    if ((i%2) == 0) 
	      	digitalWrite(i, HIGH);
	    else 
	      	digitalWrite(i, LOW);
	  	}
  	//  2.3 Punem o pauza de 500 ms     
  	delay(500);  
  	//  2.4 Cu un for ne plimbam prin toti pinii la care sunt legate led-urile    
  	for (int i=2; i<10; i++) {   
  		//  2.5. Verificam daca un led este pe pozitie para si, daca da, il stingem.
	  	// Altfel, il aprindem.        
    	if ((i%2) == 0) 
      		digitalWrite(i, LOW);
    	else
      		digitalWrite(i, HIGH);
  }
  //  2.6 Punem o pauza de 500 ms
  delay(500);   
}

/*
 3:
Jocul 3 de lumini va aprinde câte un led,
pornind de la poziția 1 până la poziția 8. 
*/
void joc3() {  
	//  3.1: Aprindem primul led
  	digitalWrite (1, HIGH);
  	//  3.2: Asteptam 100ms
	delay(100);
	//  3.3 Cu un for ne plimbam prin toti pinii la care sunt legate led-urile
	for (int i = 2; i < 10; i++) {
		//  3.4 Stingem led-ul precedent
  		digitalWrite (i - 1, LOW);
  		//  3.5 Aprindem led-ul curent
  		digitalWrite (i, HIGH);
  		//  3.6: Asteptam 100ms
  		delay(100);
	} 
} 

void loop() {  
  // joc1();       // decomenteaza daca vrei joc1
  // joc2();      // decomenteaza daca vrei joc2
  // joc3();     // decomenteaza daca vrei joc3 
}
