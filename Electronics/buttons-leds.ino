int boutonv = 8;
int boutonr = 13;
int LEDv = 2;
int boutonQuit = 12;
int LEDr = 4;


void setup() {
  pinMode(LEDv, OUTPUT);// les LEDs sont des sorties
  pinMode(LEDr, OUTPUT);
  pinMode(boutonv,INPUT); // les boutons sont des entrées
  pinMode(boutonr, INPUT);
  pinMode(boutonQuit, INPUT);

  
}

void loop() {
  
int etatv = digitalRead(boutonv);
int etatr = digitalRead(boutonr);
int etatQuit = digitalRead(boutonQuit);

  if (etatv == HIGH) {    // si le bouton de demaragge est actionné, la LED verte est allumée 
 	  digitalWrite(LEDv, HIGH);
    digitalWrite(LEDr, LOW);
    delay(2000); 

  }
  
  if (etatr == HIGH){  // si le bouton d'urgence est actionné, la LED rouge est allumée
    digitalWrite(LEDr, HIGH);   
    digitalWrite(LEDv, LOW);
  }


  else if (etatQuit == LOW) {
    // Bouton Quit enfoncé, quitter la boucle et arrêter le programme
    return;
  }   
}