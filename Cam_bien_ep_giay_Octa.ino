int cambien1 = 5;
int cambien2 = 6;
int cambien3 = 7;
int cambien4 = 8;
int denxanh = 9;
int dendo = 10;
int denvang = 11;

void setup() {
  Serial.begin(9600);   // bat cong serial
  pinMode(cambien1, INPUT_PULLUP);
  pinMode(cambien2, INPUT_PULLUP);
  pinMode(cambien3, INPUT_PULLUP);
  pinMode(cambien4, INPUT_PULLUP);
  pinMode(dendo, OUTPUT);
  pinMode(denvang, OUTPUT);
  pinMode(denxanh, OUTPUT);
}
 
void loop() {
  int GT1 = digitalRead(cambien1); 
  int GT2 = digitalRead(cambien2);
  int GT3 = digitalRead(cambien3);
  int GT4 = digitalRead(cambien4);  
  Serial.println(GT1); 
  delay(1000);
  
  if ((GT1 == HIGH) && (GT2 == HIGH) && (GT3 == HIGH) && (GT4 == HIGH)) {     // den xanh
    digitalWrite(denxanh, HIGH);
  } else {
    digitalWrite(denxanh, LOW);                                                       
  }
  if ((GT1 == LOW) && (GT2 == LOW) && (GT3 == LOW) && (GT4 == LOW)) {        // den do
    digitalWrite(dendo, HIGH);
  } else {
    digitalWrite(dendo, LOW);                                                         
  } 
   if ((GT1 == LOW) ^ (GT2 == HIGH) ^ (GT3 == HIGH) ^ (GT4 == HIGH)) {      // den vang 1
    digitalWrite(denvang, HIGH);
  } else {
    digitalWrite(denvang, LOW);                                                         
  }
  if ((GT1 == HIGH) ^ (GT2 == LOW) ^ (GT3 == HIGH) ^ (GT4 == HIGH)) {      // den vang 2
    digitalWrite(denvang, HIGH);
  } else {
    digitalWrite(denvang, LOW);                                                         
  }
  if ((GT1 == HIGH) ^ (GT2 == HIGH) ^ (GT3 == LOW) ^ (GT4 == HIGH)) {      // den vang 3
    digitalWrite(denvang, HIGH);
  } else {
    digitalWrite(denvang, LOW);                                                         
  }
  if ((GT1 == HIGH) ^ (GT2 == HIGH) ^ (GT3 == HIGH) ^ (GT4 == LOW)) {      // den vang 4
    digitalWrite(denvang, HIGH);
  } else {
    digitalWrite(denvang, LOW);                                                         
  }
  if ((GT1 == LOW) ^ (GT2 == LOW) ^ (GT3 == HIGH) ^ (GT4 == HIGH)) {      // den vang 5
    digitalWrite(denvang, HIGH);
  } else {
    digitalWrite(denvang, LOW);                                                         
  }
  if ((GT1 == LOW) ^ (GT2 == HIGH) ^ (GT3 == LOW) ^ (GT4 == HIGH)) {      // den vang 6
    digitalWrite(denvang, HIGH);
  } else {
    digitalWrite(denvang, LOW);                                                         
  }
  if ((GT1 == LOW) ^ (GT2 == HIGH) ^ (GT3 == HIGH) ^ (GT4 == LOW)) {      // den vang 7
    digitalWrite(denvang, HIGH);
  } else {
    digitalWrite(denvang, LOW);                                                         
  }
  if ((GT1 == HIGH) ^ (GT2 == LOW) ^ (GT3 == LOW) ^ (GT4 == HIGH)) {      // den vang 8
    digitalWrite(denvang, HIGH);
  } else {
    digitalWrite(denvang, LOW);                                                         
  }
  if ((GT1 == HIGH) ^ (GT2 == LOW) ^ (GT3 == HIGH) ^ (GT4 == LOW)) {      // den vang 9 
    digitalWrite(denvang, HIGH);
  } else {
    digitalWrite(denvang, LOW);                                                         
  }
  if ((GT1 == HIGH) ^ (GT2 == HIGH) ^ (GT3 == LOW) ^ (GT4 == LOW)) {      // den vang 10
    digitalWrite(denvang, HIGH);
  } else {
    digitalWrite(denvang, LOW);                                                         
  }
  if ((GT1 == HIGH) ^ (GT2 == LOW) ^ (GT3 == LOW) ^ (GT4 == LOW)) {      // den vang 11
    digitalWrite(denvang, HIGH);
  } else {
    digitalWrite(denvang, LOW);                                                         
  }
  if ((GT1 == LOW) ^ (GT2 == HIGH) ^ (GT3 == LOW) ^ (GT4 == LOW)) {      // den vang 12
    digitalWrite(denvang, HIGH);
  } else {
    digitalWrite(denvang, LOW);                                                         
  }
  if ((GT1 == LOW) ^ (GT2 == LOW) ^ (GT3 == HIGH) ^ (GT4 == LOW)) {      // den vang 13
    digitalWrite(denvang, HIGH);
  } else {
    digitalWrite(denvang, LOW);                                                         
  }
  if ((GT1 == LOW) ^ (GT2 == LOW) ^ (GT3 == LOW) ^ (GT4 == HIGH)) {      // den vang 14
    digitalWrite(denvang, HIGH);
  } else {
    digitalWrite(denvang, LOW);                                                         
  }
}
