int nbmesure = 100;
long somme = 0;

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop() {
        for (int count = 0; count < nbmesure; count++) {
        int valeur = random(20, 31);
        somme += valeur;
      }

      float moyenne = (float)somme / nbmesure;

      Serial.print("Temperature moyenne= ");
      Serial.print(moyenne);
      Serial.println(" °C");
      
      while(1) {
        delay(1000);
      }
}
