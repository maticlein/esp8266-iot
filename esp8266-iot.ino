#define BLYNK_TEMPLATE_ID           ""
#define BLYNK_DEVICE_NAME           ""
#define BLYNK_AUTH_TOKEN            ""

#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = BLYNK_AUTH_TOKEN;

char ssid[] = "";
char pass[] = "";

BlynkTimer timer;

void valorPotenciometro(){
  int potenciometro = analogRead(A0);
  Blynk.virtualWrite(V1, potenciometro);
}

void setup(){
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);
  timer.setInterval(1000L, valorPotenciometro );
}

void loop(){
  Blynk.run();
  timer.run();
}