# Saidas-dixitais-P13
Agora con boton
/*
Non consigo que o boton actue sobre a S10
  usando un led observo que o boton actua 
     pero no podo corrovorar que a s10 este  
        recibindo a señal e por tanto 
           actue sobre o sistema
*/           
// C++ code
//
void setup()
{
  pinMode(10, INPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  if (digitalRead(10) == 1) {
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(LED_BUILTIN, LOW);
  }
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(LED_BUILTIN, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(4000); // Wait for 4000 millisecond(s)
}
