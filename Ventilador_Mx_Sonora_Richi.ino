//Sketch elaborado por Ing. Ricardo Moreno 4/17/2020
//Sketch para ventilador casero con bomba 12V DC
//usando Driver para motor DC L298N y usando PWN para controlar la velocidad del motor
//Un agradecimiento al ingeniero Gustavo Osuna por ayudar a este proyecto. Sonora primero simpre


const int  IN1= 7;   // conectar pin D7
const int  IN2 = 8;  //conectar  pin D8
const int  ENA = 5; //conectar al pin D5 digital que es PWN

void setup() {
  Serial.begin(9600);      //abrir monitor serial en herramientas
  Serial.println("Respirador Artificial");
  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);
  pinMode (ENA, OUTPUT);
  
}

void loop() 
{
    Serial.println("Exhala");
    delay(2200);
    Serial.println("Inhala  ");

    digitalWrite(IN1, HIGH);
    delay(2200);
    digitalWrite(IN1,LOW);
    digitalWrite(IN2, LOW);
    analogWrite(ENA, 240);    
    delay(10);
    }
    
 
  
