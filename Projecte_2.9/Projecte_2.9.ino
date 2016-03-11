/**************************************************************
**                                                           **
**                   Descripció programa                     **
**                                                           **
**************************************************************/

//******  Includes  *******************************************


//******  Variables  ******************************************
int a = 3;
int b = 2;
int d;
//******  Setup  **********************************************
void setup() {
Serial.begin(9600);

Serial.println("Here is division: ");

Serial.print("a = ");
Serial.println(a);
Serial.print("b = ");
Serial.println(b);

d = a / b; // El programa realitza la divisió a/b

Serial.print("a / b = ");
Serial.println(d);
}

void loop() {
  // put your main code here, to run repeatedly:

}
