
void setup() {
  // inicializa los pines del 10 al 12 como salida

  for ( int i = 10 ; i <= 12 ; i++)
  {
    pinMode(i, OUTPUT);
  }

}

// the loop routine runs over and over again forever:
void loop() {
  /* enciende y apaga cada uno de los 3 pines con una espera 
  de 0.2 segundos*/
  for (int i=10 ; i <= 12 ; i++)
  {
       digitalWrite( i , HIGH) ;
       delay (200) ;
       digitalWrite( i , LOW);
       delay (200) ;
  }
}
