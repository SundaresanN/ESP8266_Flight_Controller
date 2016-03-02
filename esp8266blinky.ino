#include "Wire.h"   
//#include <i2c_t3.h>
#include <SPI.h>
#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>
#include <ArduinoOTA.h>

void setup() {
      pinMode(15, OUTPUT);
      Serial.begin(115200);
      
    }
     
    void loop() {
      digitalWrite(15, HIGH);
      Serial.println("test");
      delay(100);
      digitalWrite(15, LOW);
      delay(900);
    }
