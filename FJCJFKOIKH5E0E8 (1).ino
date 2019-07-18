#include  <Servo.h>

Servo myservo1;
Servo myservo2;
Servo myservo3;

void setup()
{
  myservo1.attach(6);
  myservo1.write(90); // taban

  myservo2.attach(9);
  myservo2.write(60); // kol

  myservo3.attach(10);
  myservo3.write(90); //ağız

}
void loop() {
  // A-C
  myservo2.write(180); //kol yukarı
  delay(1000);
  myservo1.write(180); // Yön A
  delay(1000);
  myservo2.write(60); //kol aşşağı
  delay(1000);
  myservo3.write(180); //ağız kapalı
  delay(1000);
  myservo2.write(180); //kol yukarı
  delay(1000);
  myservo1.write(0); // Yön C
  delay(1000);
  myservo2.write(60); //kol aşşağı
  delay(1000);
  myservo3.write(90); //Ağız açık
  delay(1000);
  // A-B
  myservo2.write(180); //kol yukarı
  delay(1000);
  myservo1.write(180); // Yön A
  delay(1000);
  myservo2.write(60); //kol aşşağı
  delay(1000);
  myservo3.write(180); //ağız kapalı
  delay(1000);
  myservo2.write(180); //kol yukarı
  delay(1000);
  myservo1.write(90); // Yön B
  delay(1000);
  myservo2.write(60); //kol aşşağı
  delay(1000);
  myservo3.write(90); //Ağız açık
  delay(1000);
  // C-B
  myservo2.write(180); //kol yukarı
  delay(1000);
  myservo1.write(0); // Yön C
  delay(1000);
  myservo2.write(60); //kol aşşağı
  delay(1000);
  myservo3.write(180); //ağız kapalı
  delay(1000);
  myservo2.write(180); //kol yukarı
  delay(1000);
  myservo1.write(90); // Yön B
  delay(1000);
  myservo3.write(90); //Ağız açık
  delay(1000);
  // A-C
  myservo2.write(180); //kol yukarı
  delay(1000);
  myservo1.write(180); // Yön A
  delay(1000);
  myservo2.write(60); //kol aşşağı
  delay(1000);
  myservo3.write(180); //ağız kapalı
  delay(1000);
  myservo2.write(180); //kol yukarı
  delay(1000);
  myservo1.write(0); // Yön C
  delay(1000);
  myservo2.write(60); //kol aşşağı
  delay(1000);
  myservo3.write(90); //Ağız açık
  delay(1000);
  // B-A
  myservo2.write(180); //kol yukarı
  delay(1000);
  myservo1.write(90); // Yön B
  delay(1000);
  myservo2.write(60); //kol aşşağı
  delay(1000);
  myservo3.write(180); //ağız kapalı
  delay(1000);
  myservo2.write(180); //kol yukarı
  delay(1000);
  myservo1.write(180); // Yön A
  delay(1000);
  myservo2.write(60); //kol aşşağı
  delay(1000);
  myservo3.write(90); //Ağız açık
  delay(1000);
  // B-C
  myservo2.write(180); //kol yukarı
  delay(1000);
  myservo1.write(90); // Yön B
  delay(1000);
  myservo2.write(60); //kol aşşağı
  delay(1000);
  myservo3.write(180); //ağız kapalı
  delay(1000);
  myservo2.write(180); //kol yukarı
  delay(1000);
  myservo1.write(0); // Yön C
  delay(1000);
  myservo2.write(60); //kol aşşağı
  delay(1000);
  myservo3.write(90); //Ağız açık
  delay(1000);
  // A-C
  myservo2.write(180); //kol yukarı
  delay(1000);
  myservo1.write(180); // Yön A
  delay(1000);
  myservo2.write(60); //kol aşşağı
  delay(1000);
  myservo3.write(180); //ağız kapalı
  delay(1000);
  myservo2.write(180); //kol yukarı
  delay(1000);
  myservo1.write(0); // Yön C
  delay(1000);
  myservo2.write(60); //kol aşşağı
  delay(1000);
  myservo3.write(90); //Ağız açık
  delay(20000);







}






