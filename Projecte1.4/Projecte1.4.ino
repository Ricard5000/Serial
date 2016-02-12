/**************************************************************
**                                                           **
**                   Descripció programa                     **
**                                                           **
**************************************************************/

//******  Includes  *******************************************


//******  Variables  ******************************************


//******  Setup  **********************************************

void setup() {
Serial.begin(9600);
Serial.println("Escull el numero de l'operació que vols realitzar?");
Serial.println("  1. Comprovar numero de tarjeta de credit");
Serial.println("  2. Comprovar numero de compte bancari");
Serial.println("  3. Buscar un difgit perdut de tarjeta de credit");
delay(1000);
}

void loop() {
}
