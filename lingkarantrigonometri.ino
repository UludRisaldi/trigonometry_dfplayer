#include <DFPlayer_Mini_Mp3.h>
#include<SoftwareSerial.h>
SoftwareSerial mySerial(2, 3);


const int Sensor0 = 36;
const int Sensor30 = 34;
const int Sensor45 = 32;
const int Sensor60 = 30;
const int Sensor90 = 28;
const int Sensor120 = 26;
const int Sensor135 = 24;
const int Sensor150 = 22;
const int Sensor180 = 31;
const int Sensor210 = 33;
const int Sensor225 = 39;
const int Sensor240 = 41;
const int Sensor270 = 43;
const int Sensor300 = 45;
const int Sensor315 = 47;
const int Sensor330 = 49;
const int Sensor360 = 8;


void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  mySerial.begin (9600);
  mp3_set_serial (mySerial);
  delay(1);
  mp3_set_volume (30);
  pinMode(Sensor0, INPUT);
  pinMode(Sensor30, INPUT);
  pinMode(Sensor45, INPUT);
  pinMode(Sensor60, INPUT);
  pinMode(Sensor90, INPUT);
  pinMode(Sensor120, INPUT);
  pinMode(Sensor135, INPUT);
  pinMode(Sensor150, INPUT);
  pinMode(Sensor180, INPUT);
  pinMode(Sensor210, INPUT);
  pinMode(Sensor225, INPUT);
  pinMode(Sensor240, INPUT);
  pinMode(Sensor270, INPUT);
  pinMode(Sensor300, INPUT);
  pinMode(Sensor315, INPUT);
  pinMode(Sensor330, INPUT);
  pinMode(Sensor360, INPUT);
  mp3_play(20);
  delay(5000);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Sensor0 :");
  Serial.println(digitalRead(Sensor0));
  Serial.print("Sensor30 :");
  Serial.println(digitalRead(Sensor30));
  Serial.print("Sensor45 :");
  Serial.println(digitalRead(Sensor45));
  Serial.print("Sensor60 :");
  Serial.println(digitalRead(Sensor60));
  Serial.print("Sensor90 :");
  Serial.println(digitalRead(Sensor90));
  Serial.print("Sensor120 :");
  Serial.println(digitalRead(Sensor120));
  Serial.print("Sensor135 :");
  Serial.println(digitalRead(Sensor135));
  Serial.print("Sensor150 :");
  Serial.println(digitalRead(Sensor150));
  Serial.print("Sensor180 :");
  Serial.println(digitalRead(Sensor180));
  Serial.print("Sensor210 :");
  Serial.println(digitalRead(Sensor210));
  Serial.print("Sensor225 :");
  Serial.println(digitalRead(Sensor225));
  Serial.print("Sensor240 :");
  Serial.println(digitalRead(Sensor240));
  Serial.print("Sensor270 :");
  Serial.println(digitalRead(Sensor270));
  Serial.print("Sensor300 :");
  Serial.println(digitalRead(Sensor300));
  Serial.print("Sensor315 :");
  Serial.println(digitalRead(Sensor315));
  Serial.print("Sensor330 :");
  Serial.println(digitalRead(Sensor330));
  Serial.print("Sensor360 :");
  Serial.println(digitalRead(Sensor360));

  delay(2000);

  if(digitalRead(Sensor0) == LOW){
    Serial.println("Pembacaan Sensor 0 derajat");
    mp3_play(1);
    delay(10000);}
  else if(digitalRead(Sensor30) == LOW){
    Serial.println("Pembacaan Sensor 30 derajat");
    mp3_play(2);
    delay(14000);}
  else if(digitalRead(Sensor45) == LOW){
    Serial.println("Pembacaan Sensor 45 derajat");
    mp3_play(3);
    delay(14000);}
  else if(digitalRead(Sensor60) == LOW){
    Serial.println("Pembacaan Sensor 60 derajat");
    mp3_play(4);
    delay(13000);}
  else if(digitalRead(Sensor90) == LOW){
    Serial.println("Pembacaan Sensor 90 derajat");
    mp3_play(5);
    delay(11000);}
  else if(digitalRead(Sensor120) == LOW){
    Serial.println("Pembacaan Sensor 120 derajat");
    mp3_play(6);
    delay(14000);}
  else if(digitalRead(Sensor135) == LOW){
    Serial.println("Pembacaan Sensor 135 derajat");
    mp3_play(7);
    delay(15000);}
  else if(digitalRead(Sensor150) == LOW){
    Serial.println("Pembacaan Sensor 150 derajat");
    mp3_play(8);
    delay(15000);}
  else if(digitalRead(Sensor180) == LOW){
    Serial.println("Pembacaan Sensor 180 derajat");
    mp3_play(9);
    delay(11000);}
  else if(digitalRead(Sensor210) == LOW){
    Serial.println("Pembacaan Sensor 210 derajat");
    mp3_play(10);
    delay(15000);}
  else if(digitalRead(Sensor225) == LOW){
    Serial.println("Pembacaan Sensor 225 derajat");
    mp3_play(11);
    delay(15000);}
  else if(digitalRead(Sensor240) == LOW){
    Serial.println("Pembacaan Sensor 240 derajat");
    mp3_play(12);
    delay(14000);}
  else if(digitalRead(Sensor270) == LOW){
    Serial.println("Pembacaan Sensor 270 derajat");
    mp3_play(13);
    delay(12000);}
  else if(digitalRead(Sensor300) == LOW){
    Serial.println("Pembacaan Sensor 300 derajat");
    mp3_play(14);
    delay(14000);}
  else if(digitalRead(Sensor315) == LOW){
    Serial.println("Pembacaan Sensor 315 derajat");
    mp3_play(15);
    delay(15000);}
  else if(digitalRead(Sensor330) == LOW){
    Serial.println("Pembacaan Sensor 330 derajat");
    mp3_play(16);
    delay(15000);}
  else if(digitalRead(Sensor360) == LOW){
    Serial.println("Pembacaan Sensor 360 derajat");
    mp3_play(17);
    delay(11000);}
  else if(digitalRead(Sensor0) == HIGH,
     digitalRead(Sensor30) == HIGH,
     digitalRead(Sensor45) == HIGH,
     digitalRead(Sensor60) == HIGH,
     digitalRead(Sensor90) == HIGH,
     digitalRead(Sensor120) == HIGH,
     digitalRead(Sensor135) == HIGH,
     digitalRead(Sensor150) == HIGH,
     digitalRead(Sensor180) == HIGH,
     digitalRead(Sensor210) == HIGH,
     digitalRead(Sensor225) == HIGH,
     digitalRead(Sensor240) == HIGH,
     digitalRead(Sensor270) == HIGH,
     digitalRead(Sensor300) == HIGH,
     digitalRead(Sensor315) == HIGH,
     digitalRead(Sensor330) == HIGH,
     digitalRead(Sensor360) == HIGH){
     mp3_play(19);
     delay(5000);}
   else{
    mp3_play(19);
    delay(5000);
   }
   }
