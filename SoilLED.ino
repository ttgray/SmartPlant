
void setup() {
  Serial.begin(9600); 
  pinMode(LED_BUILTIN, OUTPUT);
}
void loop() {
  int val;
  val = analogRead(0); 
  if ( val <= 300 )
  {
    digitalWrite(LED_BUILTIN, HIGH);
  }
  else
  {
    digitalWrite(LED_BUILTIN, LOW);
  }
  Serial.println(val);
  delay(1000);
}

