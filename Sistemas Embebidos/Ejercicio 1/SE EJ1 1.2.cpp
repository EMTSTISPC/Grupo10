String Nombre;
String Apellido;
String Direccion;
String Telefono;


void setup() {
  Serial.begin(9600);
  Serial.println(" ");
  Serial.println("      | I S P C |          ");
  Serial.println("| Ejercitacion Evaluativa |");
  Serial.println("|   Sistemas Embebidos    |");
  Serial.println("|   Issue: S.E EJ1 1.2    |");
  Serial.println("|   Git User: Leytonale   |");
  Serial.println(" ");
  Serial.println(" ");
}

void loop() {
  Serial.println("Ingrese su nombre: ");
  while (Serial.available() == 0){};
  Nombre = Serial.readString();


  Serial.println("Ingrese su apellido: ");
  while (Serial.available() == 0){}
  Apellido = Serial.readString();

  Serial.println("Ingrese su direccion: ");
  while (Serial.available() == 0){}
  Direccion = Serial.readString();

  Serial.println("Ingrese su Telefono: ");
  while (Serial.available() == 0){}
  Telefono = Serial.readString();


  // Datos
  Serial.println("  | Nombre: "+ Nombre);
  Serial.println("  | Apellido: "+ Apellido);
  Serial.println("  | Direccion: "+ Direccion);
  Serial.println("  | Telefono: "+ Telefono);

}