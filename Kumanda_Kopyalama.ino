#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Arduino.h>
#include <IRremoteESP8266.h>
#include <IRsend.h>

IRsend irsend(D6);

char auth[] = "AV_1LVs8XjovcdtXrLdPuOEBFOfMh2HC";
char ssid[] = "TTNET_ZyXEL_3TXP";
char pass[] = "adgjli13579";

int b0,b1,b2,b3,b4,b5,b6,b7,b8,b9;

void setup() {
  irsend.begin();
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

BLYNK_WRITE(V0) {
  int deger = param.asInt();
  b0 = deger;
}

BLYNK_WRITE(V1) {
  int deger = param.asInt();
  b1 = deger;
}

BLYNK_WRITE(V2) {
  int deger = param.asInt();
  b2 = deger;
}

BLYNK_WRITE(V3) {
  int deger = param.asInt();
  b3 = deger;
}

BLYNK_WRITE(V4) {
  int deger = param.asInt();
  b4 = deger;
}

BLYNK_WRITE(V5) {
  int deger = param.asInt();
  b5 = deger;
}

BLYNK_WRITE(V6) {
  int deger = param.asInt();
  b6 = deger;
}

BLYNK_WRITE(V7) {
  int deger = param.asInt();
  b7 = deger;
}

BLYNK_WRITE(V8) {
  int deger = param.asInt();
  b8 = deger;
}

BLYNK_WRITE(V9) {
  int deger = param.asInt();
  b9 = deger;
}

void loop() {
  if(b0) {
  delay(50);
  irsend.sendNEC(0xF700FF, 32); }
  
  if(b1) {
  delay(50);
  irsend.sendNEC(0xF7807F, 32); }
  
  if(b2) {
  delay(50);
  irsend.sendNEC(0xF740BF, 32); }
  
  if(b3) {
  delay(50);
  irsend.sendNEC(0xF7C03F, 32); }
  
  if(b4) {
  delay(50);
  irsend.sendNEC(0xF720DF, 32); }
  
  if(b5) {
  delay(50);
  irsend.sendNEC(0xF7A05F, 32); }
  
  if(b6) {
  delay(50);
  irsend.sendNEC(0xF7609F , 32); }
  
  if(b7) {
  delay(50);
  irsend.sendNEC(0xF7E01F, 32); }
  
  if(b8) {
  delay(50);
  irsend.sendNEC(0xF748B7, 32); }
  
  if(b9) {
  delay(50);
  irsend.sendNEC(0xF7C837, 32); }
  
  Blynk.run();
}
