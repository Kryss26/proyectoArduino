int n=5;

void setup() {
  // inicializa los pines del 10 al 12
  for ( int i = 10 ; i <= 12 ; i++)
  {
    pinMode(i, OUTPUT);
  }

}

void loop() {
  /*enciende y apaga los 3 pines cada vez con menos tiempo de
  espera*/ 
  for (int i=10 ; i <= 12 ; i++)
  {
       int x=150;
       digitalWrite( i , HIGH) ;
       delay (x-n);
       digitalWrite( i , LOW);
       delay (x-n);
       n++;
  }

}
