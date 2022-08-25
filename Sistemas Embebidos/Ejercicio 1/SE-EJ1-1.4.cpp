const int LED = 1;  // Salida PWM a usar con el led
int num;


void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(A0, INPUT);
  Serial.println(" ");
  Serial.println("      | I S P C |          ");
  Serial.println("| Ejercitacion Evaluativa |");
  Serial.println("|   Sistemas Embebidos    |");
  Serial.println("|   Issue: S.E EJ1 1.4    |");
  Serial.println("|   Git User: Wleyton89  |");
  Serial.println(" ");
  Serial.println(" ");
}

void loop() {
  Serial.println("Controlador de intensidad luminica del led");
    Serial.print("Ingrese un valor entre 0 y 255: ");
  while (!Serial.available() > 0){};
  num = Serial.parseInt();
  Serial.println(num);
  
  
  if(num >= 0 && num <= 255){
   analogWrite(LED,num);
   delay(250);
  }

}
