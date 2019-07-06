// Khai báo các biến cho mạch sử dụng chip atmega328p
// Define PIN for INPUT, OUTPUT atmega328p
const int sen_SET = 7; // Cảm biến nhận SET
const int sen_thuve = 6; // Cảm biến pittong thu về
const int sen_dayra = 5; //  Cảm biến pittong đẩy ra
const int sol1_vanhut = 10; // Van hút 
const int sol2_pittong = 11; // Pittong đẩy _ Kéo
void setup();
void time1s();
void offall();
void onall();

// Thiết lập thông số khởi động chương trình
void setup() 
{                
  pinMode(sen_SET, INPUT);
  pinMode(sen_thuve, INPUT);
  pinMode(sen_dayra, INPUT);  
  pinMode(sol1_vanhut, OUTPUT);
  pinMode(sol2_pittong, OUTPUT);
  digitalWrite(sol1_vanhut, LOW);
  digitalWrite(sol2_pittong, LOW);
 }

void loop() 
{
 if (digitalRead(sen_SET) == LOW)
 {
  digitalWrite(sol1_vanhut, HIGH);
  time1s();time1s();time1s();
  if (digitalRead(sen_thuve) == LOW)
  {
    digitalWrite(sol2_pittong, HIGH);
    time1s();
    if (digitalRead(sen_dayra) == LOW)
    {
      offall();
    }
  }
 }
} 
void time1s()
{
  delay(1222); // Thời gian chờ
}
void offall()
{
      digitalWrite(sol1_vanhut, LOW); // Nhả khí không hút nữa
      time1s();  // Đợi 1 giây
      digitalWrite(sol2_pittong, LOW); // Thu pittong về
      time1s();   // Đợi 1 giây
}
void onall()
{
      digitalWrite(sol1_vanhut, HIGH); // Nhả khí không hút nữa
      time1s();  // Đợi 1 giây
      digitalWrite(sol2_pittong, HIGH); // Thu pittong về
      time1s();   // Đợi 1 giây
}
