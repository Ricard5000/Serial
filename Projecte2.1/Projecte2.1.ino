/**************************************************************
**                                                           **
**                   Descripció programa                     **
**                                                           **
**************************************************************/

//******  Includes  *******************************************


//******  Variables  ******************************************
int a = 5;
int b = 10;
int c = 20;

//******  Setup  **********************************************
void setup() {
Serial.begin(9600);
Serial.println("Here is some math: ");  //Aqui afeigim el text que volem que l'arduino ens digui.
Serial.print("a = ");
Serial.println(a);
Serial.print("b = ");
Serial.println(b);
Serial.print("c = ");
Serial.println(c);

Serial.print("a + b = "); //suma
Serial.println(a + b);

Serial.print("a * c = "); //multiplicació
Serial.println(a * c);

Serial.print("c / b = "); //divisió
Serial.println(c / b);

Serial.print("c % b = "); //modul
Serial.println(c % b);

Serial.print("b - c = "); //resta
Serial.println(b - c);
}

void loop() {
 }
