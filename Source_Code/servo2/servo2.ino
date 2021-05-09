#include <Servo.h>

int buttonPin = 2; //pin del pulsador
Servo myservo;

int buttonState = 0; //Estado pulsador
int prevState; //variable del valor previo de buttonState
int ang; //angulo del servo

void setup (){
myservo.attach(9); // pin del motor
pinMode(buttonPin, INPUT); //Definir el pulsador con señal de entrada
}

void loop(){
buttonState = digitalRead(buttonPin);

if (buttonState == HIGH && buttonState != prevState){ //esta el boton pulsado? y el estado del boton es diferente que el de hace un instante?
if (ang == 120) { // si el angulo era 120, pasa a ser 60
ang = 60; } else { // viceversa
ang = 120;
}
}

prevState = buttonState; // hace el valor previo del boton, igual al del boton…
myservo.write(ang);
delay(10);
}
