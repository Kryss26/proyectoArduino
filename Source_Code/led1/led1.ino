//indica en que celda debe enviar la corriente elétrica
int led = 13;

void setup() {
  pinMode(led, OUTPUT); //metodo de salida
}

void loop() {
  digitalWrite(led, HIGH); //se enciende el led 
  delay(2000); //tiempo en el que el led esta encendido              
  digitalWrite(led, LOW); //se apaga el led  
  delay(1000); //tiempo en el que se apaga              
}
