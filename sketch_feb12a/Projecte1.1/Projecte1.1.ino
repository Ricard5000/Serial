void setup() {
Serial.begin(9600);
}

void loop() {
Serial.print("Hello world!")  //El que escriguis t'ho escriuta tot a la mateixa línia, per fer una nova línia utilitzariem el serial.println i no el serial.print com ara.
delay(1000);
}
