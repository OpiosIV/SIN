
void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop() {
  
/*******************  
*** parametre ***
*******************/

int temp =0;
int somme =0;
float moy =0;
int i=1;  

/*******************  
*** Boucle while ***
*******************/

while(i<101)
{ 
  Serial.print(i);
  temp = random(20, 310);
  Serial.print(" val : ");
  Serial.println(temp);
  somme =somme + temp;
  i++;
}

moy = somme / 100;
Serial.println("moyenne WHILE: ");
Serial.print(moy);
Serial.print("\n");
delay(2000);

/****************  
*** Boucle do ***
****************/

do
{
  temp = random(20, 310);
  somme =somme + temp;
  i++;
}while(i < 100);

moy = somme / 100;
Serial.println("moyenne DO: ");
Serial.print(moy);
Serial.print("\n");
delay(2000);

/*****************  
*** Boucle for ***
*****************/

for(int i = 0; i < 101; i++)
{
  temp = random(20, 310);
  somme =somme + temp;
  i++;
}

moy = somme / 100;
Serial.println("moyenne FOR: ");
Serial.print(moy);
Serial.print("\n");
delay(2000);

}
