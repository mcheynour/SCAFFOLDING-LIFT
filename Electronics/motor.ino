#include <Stepper.h>

// Configuration du moteur
const int stepsPerRevolution = 2048;  // Nombre de pas pour une rotation complète (24BYJ48S a 2048 pas par révolution)
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);  // Utilisez les broches appropriées pour IN1, IN2, IN3, IN4

void setup() {
  // Définir la vitesse du moteur (ajustez selon vos besoins)
  myStepper.setSpeed(9);  // Vitesse en tours par minute (RPM)
}

void loop() {
// Faire tourner le moteur dans le sens horaire
  myStepper.step(-stepsPerRevolution);
  delay(2000);

 // Faire tourner le moteur dans le sens anti-horaire
  myStepper.step(stepsPerRevolution);
  delay(2000);

  return;
}