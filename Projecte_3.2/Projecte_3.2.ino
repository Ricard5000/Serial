/**************************************************************
**                                                           **
**                   Descripció programa                     **
**                                                           **
**************************************************************/

//******  Includes  *******************************************


//******  Variables  ******************************************
int thisbyte = 33;
//******  Setup  **********************************************
void setup() {
Serial.begin(9600);
Serial.println("ASCII Table ~ Character Map");
}

void loop() {
Serial.write(thisbyte);

Serial.print(", dec: "); 
Serial.print(thisbyte);     
Serial.print(", hex: "); 
Serial.print(thisbyte, HEX);     
Serial.print(", oct: "); 
Serial.print(thisbyte, OCT);     
Serial.print(", bin: "); 
Serial.println(thisbyte, BIN);

if(thisbyte ==126)//Quan arriva a 126 para de sumar
{
  while(true)
  {
  }
}
thisbyte++;//Puja el valor en 1

}
