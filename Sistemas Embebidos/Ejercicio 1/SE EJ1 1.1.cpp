int Num1, Num2, Suma;


void setup() {
  Serial.begin(9600);
  Serial.println(" ");
  Serial.println("      | I S P C |          ");
  Serial.println("| Ejercitacion Evaluativa |");
  Serial.println("|   Sistemas Embebidos    |");
  Serial.println("|   Issue: S.E EJ1 1.1    |");
  Serial.println("|   Git User: Leytonale   |");
  Serial.println(" ");
  Serial.println(" ");
}

void loop() {
  Serial.println("|  Sumador de dos Numeros |    ");
  Serial.print("Ingrese un 1er numero:");
  while (Serial.available() == 0){};
  Num1= Serial.parseInt();
  Serial.println(Num1);


  Serial.print("Ingrese un 2do Numero: ");
  while (Serial.available() == 0){};
  Num2 = Serial.parseInt();
  Serial.println(Num2);


  
  // Datos
  Serial.print("| Total Suma: ");
  Suma= Num1 + Num2;
  Serial.println(Suma);


}