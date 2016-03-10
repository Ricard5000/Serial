/**************************************************************
**                                                           **
**                   Descripció programa                     **
**                                                           **
**************************************************************/

//******  Includes  *******************************************


//******  Variables  ******************************************
int a = 3;
int b = 4;
int h;
//******  Setup  **********************************************
void setup() {
Serial.begin(9600);

Serial.println("Lets calculate hypoteneuse");

Serial.print("a = ");
Serial.println(a);
Serial.print("b = ");
Serial.println(b);
Serial.print("h = ");
Serial.println(h = sqrt(pow(a, 2)+pow(b, 2)));

}

void loop() {
  // put your main code here, to run repeatedly:

}
