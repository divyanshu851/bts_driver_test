#define r_en 2
#define r_pwm 3
#define l_pwm 5

uint8_t i;

void setup() {
  pinMode(r_en, OUTPUT);
  pinMode(r_pwm, OUTPUT);
  pinMode(l_pwm, OUTPUT);

 digitalWrite(r_en, HIGH);
 
}

void loop() {
for(i=150; i<=254; i += 5){
  analogWrite(r_pwm, i);
  analogWrite(l_pwm, 0);
  delay(200);
}
  analogWrite(r_pwm, 0);
  analogWrite(l_pwm, 0);
  delay(1000);
for(i=150; i<=254; i += 5){
  analogWrite(r_pwm, 0);
  analogWrite(l_pwm, i);
  delay(200);
}
analogWrite(r_pwm, 0);
analogWrite(l_pwm, 0);
delay(1000);
}
