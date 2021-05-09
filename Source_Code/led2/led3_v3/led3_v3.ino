

void setup() {
  // inicializa los pines del 10 al 12 como salida

  for ( int i = 10 ; i <= 12 ; i++)
  {
    pinMode(i, OUTPUT);
  }

}


void loop() {
  
  for(int i=10; i <= 12; i++){

       digitalWrite( i, HIGH) ;
       digitalWrite(i+2, HIGH);
       delay (1000);

       digitalWrite( i, LOW) ;
       digitalWrite(i+2, LOW);
       delay(1);

  }
  
  
}
