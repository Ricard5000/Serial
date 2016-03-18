/**************************************************************
**                                                           **
**                   Descripció programa                     **
**                                                           **
**************************************************************/

//******  Includes  *******************************************


//******  Variables  ******************************************
int comptar = 11;

//******  Setup  **********************************************
void setup() {
Serial.begin(9600);

Serial.print("Ara comptare de 0 a ");
Serial.println(comptar);
for (int i=0; i <= comptar; i++) //El for s'utilitza per incrementar.És útil per qualsevol operació repetitiva.
{
  Serial.print(i);
  if(comptar < i)//per treure el "-" li posem que posi el quió fins que < i, és a dir 11, llavors ja no afegeix el guió.
  Serial.print("-");
}
}

void loop() {

}
