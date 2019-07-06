#line 1 "Cam_bien_ep_giay.ino"
#include "Arduino.h"
void setup();
void loop();
#line 1
int cambien1 = 5;
int cambien2 = 6;
int cambien3 = 7;
int cambien4 = 8;
int xanh = 9;
int ddo = 10;
int vang = 11;

void setup() {
  pinMode(cambien1, INPUT);
  pinMode(cambien2, INPUT);
  pinMode(cambien3, INPUT);
  pinMode(cambien4, INPUT);
  pinMode(ddo, OUTPUT);
  pinMode(vang, OUTPUT);
  pinMode(xanh, OUTPUT);
} 
void loop() {
  int GT1 = digitalRead(cambien1); 
  int GT2 = digitalRead(cambien2);
  int GT3 = digitalRead(cambien3);
  int GT4 = digitalRead(cambien4);  
  
  if ((GT1 == LOW) && (GT2 == LOW) && (GT3 == LOW) && (GT4 == LOW)) {     // den xanh
    digitalWrite(xanh, HIGH);
  } else {
    digitalWrite(xanh, LOW);                                                       
  }
  if ((GT1 == HIGH) && (GT2 == HIGH) && (GT3 == HIGH) && (GT4 == HIGH)) {        // den ddo
    digitalWrite(ddo, HIGH);
  } else {
    digitalWrite(ddo, LOW);                                                         
  } 
  if ((GT1 == LOW) && (GT2 == HIGH) && (GT3 == HIGH) && (GT4 == HIGH)) {      // den vang 1
    digitalWrite(vang, HIGH);
  } else {
    digitalWrite(vang, LOW);                                                         
  }
  if ((GT1 == HIGH) && (GT2 == LOW) && (GT3 == HIGH) && (GT4 == HIGH)) {      // den vang 2
    digitalWrite(vang, HIGH);
  } else {
    digitalWrite(vang, LOW);                                                         
  }
  if ((GT1 == HIGH) && (GT2 == HIGH) && (GT3 == LOW) && (GT4 == HIGH)) {      // den vang 3
    digitalWrite(vang, HIGH);
  } else {
    digitalWrite(vang, LOW);                                                         
  }
  if ((GT1 == HIGH) && (GT2 == HIGH) && (GT3 == HIGH) && (GT4 == LOW)) {      // den vang 4
    digitalWrite(vang, HIGH);
  } else {
    digitalWrite(vang, LOW);                                                         
  }
  if ((GT1 == LOW) && (GT2 == LOW) && (GT3 == HIGH) && (GT4 == HIGH)) {      // den vang 5
    digitalWrite(vang, HIGH);
  } else {
    digitalWrite(vang, LOW);                                                         
  }
  if ((GT1 == HIGH) && (GT2 == HIGH) && (GT3 == LOW) && (GT4 == LOW)) {      // den vang 6
    digitalWrite(vang, HIGH);
  } else {
    digitalWrite(vang, LOW);                                                         
  }
  if ((GT1 == LOW) && (GT2 == HIGH) && (GT3 == LOW) && (GT4 == HIGH)) {      // den vang 7
    digitalWrite(vang, HIGH);
  } else {
    digitalWrite(vang, LOW);                                                         
  }
  if ((GT1 == HIGH) && (GT2 == LOW) && (GT3 == HIGH) && (GT4 == LOW)) {      // den vang 8
    digitalWrite(vang, HIGH);
  } else {
    digitalWrite(vang, LOW);                                                         
  }
  if ((GT1 == LOW) && (GT2 == HIGH) && (GT3 == HIGH) && (GT4 == LOW)) {      // den vang 9
    digitalWrite(vang, HIGH);
  } else {
    digitalWrite(vang, LOW);                                                         
  }
  if ((GT1 == HIGH) && (GT2 == LOW) && (GT3 == LOW) && (GT4 == HIGH)) {      // den vang 10
    digitalWrite(vang, HIGH);
  } else {
    digitalWrite(vang, LOW);                                                         
  }
  if ((GT1 == LOW) && (GT2 == LOW) && (GT3 == LOW) && (GT4 == HIGH)) {      // den vang 11
    digitalWrite(vang, HIGH);
  } else {
    digitalWrite(vang, LOW);                                                         
  }
  if ((GT1 == LOW) && (GT2 == LOW) && (GT3 == HIGH) && (GT4 == LOW)) {      // den vang 12
    digitalWrite(vang, HIGH);
  } else {
    digitalWrite(vang, LOW);                                                         
  }
  if ((GT1 == LOW) && (GT2 == HIGH) && (GT3 == LOW) && (GT4 == LOW)) {      // den vang 13
    digitalWrite(vang, HIGH);
  } else {
    digitalWrite(vang, LOW);                                                         
  }
  if ((GT1 == HIGH) && (GT2 == LOW) && (GT3 == LOW) && (GT4 == LOW)) {      // den vang 14
    digitalWrite(vang, HIGH);
  } else {
    digitalWrite(vang, LOW);                                                         
  }
}

