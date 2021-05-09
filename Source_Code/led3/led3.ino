// iniciamos la constante del pin buzzer
const int pinBuzzer = 9;

void setup() 
{  
  //iniciamos los pines de los leds
   for ( int i = 10 ; i <= 13 ; i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop() 
{
  //encendemos y apagamos los leds cada segundo
  digitalWrite( 10 , HIGH) ;
  delay(1000);
  digitalWrite( 10 , LOW);
  
    
  digitalWrite( 11 , HIGH) ;
  delay(1000);
  digitalWrite( 11 , LOW);

  digitalWrite( 12 , HIGH) ;
  delay(1000);
  digitalWrite( 12 , LOW);
  
 /*Aquí, aparte de encender el 4to led, hacemos que suene
 el buzzer durante 1 segundo hasta que el led se apaga*/
  digitalWrite( 13 , HIGH) ;
  delay(1000);
  tone(pinBuzzer, 300);
  delay(1000); 
  noTone(pinBuzzer); 
  digitalWrite( 13 , LOW);
  
}
