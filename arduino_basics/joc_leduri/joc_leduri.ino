void setup() {
  for(int i = 2; i < 10; i++) {
     pinMode(i, OUTPUT)
  }
  Serial.begin(9600);
}

/*
Jocul 1 de lumini va aprinde unul câte unul toate
ledurile și apoi le va stinge în ordine inversă.
*/
void joc1 () {  
  for (int i = 2 ; i < 10; i++) {      // se vor aprinde ledurile, unul cate unul
    digitalWrite(i, HIGH);      
    delay(500); 
  }    
  for (int i = 9; i > 1; i--) {         	// se vor stinge ledurile, unul cate unul
    digitalWrite(i, LOW);      
    delay(500);    
  }
}

/*
Jocul 2 de lumini va aprinde alternativ ledurile de rang
impar și ledurile de rang par.
*/
void joc2() {   
  for (int i=2; i<10; i++) {        
    if ((i%2) == 0) 
      digitalWrite(i, HIGH); // aprinde ledurile de pe pozitii pare
    else 
      digitalWrite(i, LOW);   // stinge ledurile de pe pozitii impare
  }    
  delay(500);      
  for (int i=2; i<10; i++) {      
    if ((i%2) == 0) 
      digitalWrite(i, LOW);     // stinge ledurile de pe pozitii pare 
    else
      digitalWrite(i, HIGH);   // aprinde ledurile de pe pozitii impare   
  }
  delay(500);   
}

/*
Jocul 3 de lumini va aprinde câte un led,
pornind de la poziția 1 până la poziția 8. 
*/
void joc3() {  
  for (int i = 2; i < 10; i++) {      
    for (int j = 2; j < 10; j++) {        
      if (j == i) {         
	digitalWrite(i, HIGH);          
      }        
      else {          
	digitalWrite(j, LOW);        
      }        
      delay(100);      
    }      
    delay(100);    
  }    
} 



void loop() {  
  // joc1();       // decomenteaza daca vrei joc1
  // joc2();      // decomenteaza daca vrei joc2
  // joc3();     // decomenteaza daca vrei joc3 
}
