// *** DECLARAMOS LAS VARIABLES QUE VAMOS A UTILIZAR   ***
// Variables que indican los pines para el motor A, por comodidad a la hora de conectar, le vamos a poner los mismos nombres que tiene la placa del L298N
int IN1 = 5;
int IN2 = 4;

// Variables que indican los pines para el motor B, por comodidad a la hora de conectar, le vamos a poner los mismos nombres que tiene la placa del L298N
int IN3 = 3;
int IN4 = 2;


void setup() {
  // Los tres pines que controlan el motor A
  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);

  // Los tres pines que controlan el motor B
  pinMode (IN3, OUTPUT);
  pinMode (IN4, OUTPUT);
}

void loop() {
    Adelante ();
    delay (2000);
    Parar ();
    delay (2000);
    Atras ();
    delay (2000);
    Parar ();
    delay (2000);
}


// *************** Función para ir hacia delante ************
void Adelante ()
{
 // Para controlar el motor A
 digitalWrite (IN1, HIGH);
 digitalWrite (IN2, LOW);
 
 // Para controlar el motor B
 digitalWrite (IN3, HIGH);
 digitalWrite (IN4, LOW);
}

// ************** Función para ir hacia atras ***************
void Atras ()
{
 // Para controlar el motor A
 digitalWrite (IN1, LOW);
 digitalWrite (IN2, HIGH);
 
 // Para controlar el motor B
 digitalWrite (IN3, LOW);
 digitalWrite (IN4, HIGH);
}


// ************** Función para parar ***************
void Parar ()
{
 //Direccion motor A
 digitalWrite (IN1, LOW);
 digitalWrite (IN2, LOW);
 //Direccion motor B
 digitalWrite (IN3, LOW);
 digitalWrite (IN4, LOW);
}
