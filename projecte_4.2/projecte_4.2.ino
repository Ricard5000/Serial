/**************************************************************
**                                                           **
**                   Descripció programa                     **
**                                                           **
**************************************************************/

//******  Includes  *******************************************


//******  Variables  ******************************************
int tempAigua = 50;
//******  Setup  **********************************************
void setup() {
Serial.begin(9600);
if (tempAigua > 100)
{
  Serial.print("Aigua supera els 100C. està bullint!");
  }
if (tempAigua < 100)
{
  Serial.print("Aigua encara no bull");
}
}


void loop() {
  // put your main code here, to run repeatedly:

}
