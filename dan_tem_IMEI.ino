byte cyl1a = 2;   // IN6
byte cyl1b = 3;   // IN5
byte cyl2a = 4;   // IN4
byte cyl2b = 5;   // IN3
byte cyl3a = 6;   // IN2
byte cyl3b = 7;   // IN1
byte start_sw = 8;   // IN8
byte vaccum = 9;   // IN7
byte sol1 = 10;    // OUT1
byte sol2 = 11;    // OUT2
byte sol3 = 12;    // OUT3
byte sol4 = 13;    // OUT4
unsigned long time1 = 0;
unsigned long time2 = 0;
unsigned long time3 = 0;
unsigned long time4 = 0;
unsigned long time5 = 0;


void setup()
{
  pinMode(cyl1a, INPUT);
  pinMode(cyl1b, INPUT);
  pinMode(cyl2a, INPUT);
  pinMode(cyl2a, INPUT);
  pinMode(cyl3a, INPUT);
  pinMode(cyl3a, INPUT);
  pinMode(start_sw, INPUT);
  pinMode(vaccum, INPUT);
  pinMode(sol1, OUTPUT);
  pinMode(sol2, OUTPUT);
  pinMode(sol3, OUTPUT);
  pinMode(sol4, OUTPUT);
  digitalWrite(sol1, LOW);
  digitalWrite(sol2, LOW);
  digitalWrite(sol3, LOW);
  digitalWrite(sol4, LOW);
}

void loop()
{
  while(digitalRead(start_sw) == HIGH && digitalRead(vaccum) == HIGH)  // ko set & lay tem
  {
    if(digitalRead(cyl3a) == LOW)
    {
      digitalWrite((sol1), HIGH);
      digitalWrite((sol4), HIGH);
    }
    
    if((unsigned long) (millis() - time1) > 800)
    {
      if(digitalRead(cyl1b) == LOW)
      {
        digitalWrite((sol3), HIGH);
        digitalWrite((sol4), HIGH);
      }
      time1 = millis();
    }
  }
  while(digitalRead(start_sw) == HIGH && digitalRead(vaccum) == LOW)
  {
    if((unsigned long) (millis() - time2) > 500)
    {
      if(digitalRead(cyl3b) == LOW)
      {
        digitalWrite((sol1), LOW);
        digitalWrite((sol4), HIGH);
      }
      time2 = millis();
    }
    if(digitalRead(cyl1a) == LOW)
    {
      digitalWrite((sol3), LOW);
      digitalWrite((sol4), HIGH);
    }
  }
  while(digitalRead(start_sw) == LOW && digitalRead(vaccum) == LOW)
  {
    if((unsigned long) (millis() - time3) > 4000)
    {
      if(digitalRead(cyl1a) == LOW)
      {
        digitalWrite((sol2), HIGH);
        digitalWrite((sol4), HIGH);
      }
      time3 = millis();
    }
    if(digitalRead(cyl2b) == LOW && digitalRead(cyl1a) == LOW)
    {
      digitalWrite((sol1), HIGH);
      digitalWrite((sol4), HIGH);
    }
    if(digitalRead(cyl2b) == LOW && digitalRead(cyl1b) == LOW)
    {
      digitalWrite((sol1), HIGH);
      digitalWrite((sol4), LOW);
    }
  }
  while(digitalRead(start_sw) == LOW && digitalRead(vaccum) == HIGH)
  {
    if(digitalRead(cyl2b) == LOW)
    {
      digitalWrite((sol1), LOW);
      digitalWrite((sol4), LOW);
    }
    if(digitalRead(cyl1a) == LOW)
    {
      digitalWrite((sol2), LOW);
      digitalWrite((sol4), LOW);
    }
  }
} 
