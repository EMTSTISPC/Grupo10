int n, avg;


void setup() {
  Serial.begin(9600);
  Serial.println(" ");
  Serial.println("      | I S P C |          ");
  Serial.println("| Ejercitacion Evaluativa |");
  Serial.println("|   Sistemas Embebidos    |");
  Serial.println("|   Issue: S.E EJ1 1.3    |");
  Serial.println("|   Git User: Wleyton89  |");
  Serial.println(" ");
  Serial.println(" ");
}


void loop() {
  avg = 0;
  Serial.println ("Ingrese la cantidad de numeros a promediar");
  while (!Serial.available());        // Esperamos a que entre algo por el serial.
  n = (Serial.readString()).toInt(); // Recogemos la cantidad de numeros a promediar.
  Serial.print ("Numeros a promediar: ");
  Serial.println (n);
  int numeros [n];                 // Creamos una matriz de N variables.
  // lectura de n datos
  for (int x = 0; x <= n - 1; x++) {
    Serial.print ("Numero ");
    Serial.print (x + 1);
    Serial.print (": ");
    while (!Serial.available());                 // Esperamos a que entre algo por el serial.
    numeros [x] = (Serial.readString()).toInt(); //Memoriza los numeros recogidos.
    Serial.println (numeros [x]);
  }
  for (int x = 0; x <= n - 1; x++) {           // Suma todos los numeros.
    avg = avg + numeros [x];
  }
  Serial.print ("Promedio =");
  avg = avg / n;                         // Se promedia los numeros
  Serial.println (avg);
  Serial.println ();
  Serial.println ();
}