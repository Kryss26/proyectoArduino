#include <LiquidCrystal.h>       //incluimos la libreria LiquidCrystal.h
#include <Wire.h>                //incluimos la librería Wire.h
LiquidCrystal lcd(12, 11, 6, 4, 3, 2);  //definimos las conexiones de la comunicación con el LCD

void setup() {
lcd.begin(16, 2);    //definimos (hadware) que tipo de pantalla tenemos conectada
}

void loop()
{
lcd.display();    //iniciamos la visualización de caracteres en el LCD
lcd.clear();      //limpiamos la pantalla para borrar el mensaje anterior si lo hay

lcd.print("Hola Mundo");   //escribimos dentro de las comillas (MAX 16 caracteres)
lcd.setCursor(0,1 );
lcd.print("Kryssalid");   //escribimos dentro de las comillas (MAX 16 caracteres)
delay(3000);         //esperamos durante 3 segundos que se visualice el mensaje
lcd.noDisplay();   //apagamos la visualización de caracteres
lcd.setCursor(0, 0);
delay(1000);   //esperamos durante un segundo con el LCD apagado

lcd.display();
lcd.clear();

lcd.print("TEXTO DE EJEMPLO");
lcd.setCursor(0, 1);
lcd.print("EJEMPLO DE TEXTO");
delay(3000);
lcd.noDisplay();
lcd.setCursor(0, 0);
delay(1000);

}
