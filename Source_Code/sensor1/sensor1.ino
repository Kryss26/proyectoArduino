 int Pecho = 6;
 int Ptrig = 7;
long duracion, distancia;   
 
void setup() {                
  Serial.begin (9600);       // inicializa el puerto seria a 9600 baudios
  pinMode(Pecho, INPUT);     // define el pin 6 como entrada (echo)
  pinMode(Ptrig, OUTPUT);    // define el pin 7 como salida  (triger)
  pinMode(13, 1);            // Define el pin 13 como salida
  pinMode(4, 1); 

  }
  
void loop() {
  
  digitalWrite(Ptrig, LOW);
  delayMicroseconds(2);
  digitalWrite(Ptrig, HIGH);   // genera el pulso de triger por 10ms
  delayMicroseconds(10);
  digitalWrite(Ptrig, LOW);
  
  duracion = pulseIn(Pecho, HIGH);
  distancia = (duracion/2) / 29;            // calcula la distancia en centimetros
  
  if (distancia >= 500 || distancia <= 0){  // si la distancia es mayor a 500cm o menor a 0cm 
    Serial.println("---");                  // no mide nada
  }
  else {
    digitalWrite(13, 0);               // en bajo el pin 13
    digitalWrite(4, 1); 
  } 
  
   if (distancia <= 20 && distancia >= 1){
    digitalWrite(13, 1);                     // en alto el pin 13 si la distancia es menor a 20cm
    digitalWrite(4, 0); 
  }
  delay(400);                                // espera 400ms para que se logre ver la distancia en la consola
}
