int nbMesures = 100;

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0)); // pour initialiser le générateur aléatoire
}

void loop() {
  long somme = 0;

  for (int i = 0; i < nbMesures; i++) {
    int valeur = random(20, 31); // simule une "température" entre 20 et 30
    somme += valeur;
    delay(10);
  }

  float moyenne = (float)somme / nbMesures;

  Serial.print("Temperature moyenne simulee = ");
  Serial.print(moyenne);
  Serial.println(" °C");

  delay(1000); // on attend 1 seconde avant de refaire un cycle
}