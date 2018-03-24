void setup() {
	// TODO 0: Declaram... initializam

	// TODO 0.1 Cu un for ne plimbam prin toti pinii la care sunt legate led-urile
	
		// TODO 0.2: Declaram fiecare pin de la 2 la 10 ca fiind output
		// folosind pinMode
		
  	}


  	Serial.begin(9600);
}

/*
TODO 1: 
Jocul 1 de lumini va aprinde unul câte unul toate
ledurile și apoi le va stinge în ordine inversă.
*/
void joc1 () {  
	// TODO 1.1 Cu un for ne plimbam prin toti pinii la care sunt legate led-urile
  	
  		// TODO 1.2: Aprindem fiecare led folosind comanda digitalWrite
    	 
    	// TODO 1.3: Setam o pauza de 500 ms intre aprinderile fiecarui led
    	
  	}    
  	// TODO 1.4: Cu un alt for ne plimbam in ordine inversa printre pini ca sa ii stingem
  	
  		//TODO 1.5: Stingem fiecare led folosind comanda digitalWrite
    	
    	// TODO 1.6: Setam o pauza de 500 ms intre stingerile fiecarui led    
    	
  }
}

/*
TODO 2: 
Jocul 2 de lumini va aprinde alternativ ledurile de rang
impar și ledurile de rang par.
*/
void joc2() {   
	// TODO 2.1 Cu un for ne plimbam prin toti pinii la care sunt legate led-urile
  	
	  	// TODO 2.2. Verificam daca un led este pe pozitie para si, daca da, il aprindem.
	  	// Altfel, il stingem.     
	    



  	// TODO 2.3 Punem o pauza de 500 ms     
  	
  	// TODO 2.4 Cu un for ne plimbam prin toti pinii la care sunt legate led-urile    
  	 
  		// TODO 2.5. Verificam daca un led este pe pozitie para si, daca da, il stingem.
	  	// Altfel, il aprindem.   




  }
  // TODO 2.6 Punem o pauza de 500 ms
  
}

/*
TODO 3:
Jocul 3 de lumini va aprinde câte un led,
pornind de la poziția 1 până la poziția 8. 
*/
void joc3() {  
	// TODO 3.1: Aprindem primul led
  	
  	// TODO 3.2: Asteptam 100ms
	
	// TODO 3.3 Cu un for ne plimbam prin toti pinii la care sunt legate led-urile
	
		// TODO 3.4 Stingem led-ul precedent
  		
  		// TODO 3.5 Aprindem led-ul curent
  		
  		// TODO 3.6: Asteptam 100ms
  		
	} 
} 

void loop() {  
  // joc1();       // decomenteaza daca vrei joc1
  // joc2();      // decomenteaza daca vrei joc2
  // joc3();     // decomenteaza daca vrei joc3 
}
