/*********************************
 * name:buzzer
 * function: you should hear the buzzer make sounds.
 *************************************/
//Email: info@primerobotics.in
//Website: www.rimerobotics.in
// https://maker.pro/arduino/projects/buzzer
/************************************/
int buzzer = 12;  //the pin of the active buzzer
void setup() {
  // start serial port at 9600 bps and wait for port to open:
  Serial.begin(9600);
  while (!Serial) {
    ;  // wait for serial port to connect. Needed for native USB port only
  }
  pinMode(buzzer, OUTPUT);  //initialize the buzzer pin as an output
  establishContact();
}

void establishContact() { 
  while (Serial.available() <= 0) {
    Serial.println("0,0,0");  // send an initial string
    delay(300);
  }
}

void loop() {
  //digitalWrite(buzzer,HIGH);
  //digitalWrite(buzzer,LOW);
  Serial.print("stem4dziewczynek");
  Serial.println("stem4dziewczynek");
  exit(0);
}
