/**************************************************************
**                                                           **
**                   Descripció programa                     **
**                                                           **
**************************************************************/

//******  Includes  *******************************************


//******  Variables  ******************************************

int test = 32767;

//******  Setup  **********************************************

void setup()
{
Serial.begin(9600);

Serial.print("Test value is: ");
Serial.println(test);

test = test + 1; //Li sumem 1 a 32767 i les int només suporten de -32768 fins a 32767. Això és la raó del resultat que dóna.
 
Serial.print("Now it is ");
Serial.println(test);
}

void loop() {
  // put your main code here, to run repeatedly:

}
