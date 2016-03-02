#define PWM_1 14 // define PWM 1 out pin, Brushed DC Motor input
#define PWM_2 12 // define PWM 2 out pin, Brushed DC Motor input
#define PWM_3  4 // define PWM 3 out pin, Brushed DC Motor input
#define PWM_4  5 // define PWM 4 out pin, Brushed DC Motor input

void setup() {


  Serial.begin(115200);

  
  analogWriteFreq(200);  // define PWM frequency = 200 Hz
  analogWrite(PWM_1, 0); // initialize with 0 PWM == zero run rate
  analogWrite(PWM_2, 0); // initialize with 0 PWM == zero run rate
  analogWrite(PWM_3, 0); // initialize with 0 PWM == zero run rate
  analogWrite(PWM_4, 0); // initialize with 0 PWM == zero run rate
  delay(5000);
}


void loop() {


for (int i = 1 ; i < 1023; i++) {
      analogWrite(PWM_1, i); // write out duty cycle, 0 = stop, 1023 = full
      analogWrite(PWM_2, i); // write out duty cycle, 0 = stop, 1023 = full
      analogWrite(PWM_3, i); // write out duty cycle, 0 = stop, 1023 = full
      analogWrite(PWM_4, i); // write out duty cycle, 0 = stop, 1023 = full
      delay(100);

      float VBAT = (1300./300.) * ((float)(analogRead(A0))) / 1024.; // calculate battery voltage from ADC read
      Serial.print("VBAT = "); Serial.print(VBAT, 2); Serial.println(" V");
 
}

  
/*  int i;
  
  if (Serial.available()) {
    while (Serial.available()) {
     i = Serial.read();
     Serial.println(i);
     int duty = 255 * (1000 + 1000*i/255.0) / PWM_PERIOD_US;
      analogWrite(PWM_pin, duty); // write out duty cycle, 1 ms = stop, 2 ms = full
    }
  }
  */
}
