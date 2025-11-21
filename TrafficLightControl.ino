/*
 * Project: Traffic Light Control
 * Author: RGDEng
 */

// 1. DEFINICIÓN DE VARIABLES (Variables Definition)
// Completa con los números de pin correctos según tu montaje (3, 6, 8)
const int greenLed = 3; 
const int yellowLed = 6;
const int redLed = 8;

void setup() {
  // 2. CONFIGURACIÓN (Setup)
  // Configura los 3 pines como SALIDA (OUTPUT) usando pinMode()
  // Pista: pinMode(greenLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(redLed, OUTPUT);
}

void loop() {
  // 3. BUCLE PRINCIPAL (Main Loop)
  // Escribe la secuencia:
 

  // FASE 1: VERDE (3 segundos)
  // Pista: digitalWrite(greenLed, HIGH);
  //        delay(3000);
  //        digitalWrite(greenLed, LOW);

 digitalWrite(greenLed, HIGH);
  delay(3000);
  digitalWrite(greenLed, LOW):
  
  // FASE 2: AMARILLO (0.5 segundos)
  // ...tú escribes esto...
 digitalWrite(yellowLed, HIGH);
  delay(500);
  digitalWrite(yellowLed, LOW):
  
  // FASE 3: ROJO (3 segundos)
  // ...tú escribes esto...
   digitalWrite(redLed, HIGH);
  delay(3000);
  digitalWrite(redLed, LOW):
  
}
