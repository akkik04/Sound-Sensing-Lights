// declaring variables to tie the sensor and each LED to their respective pin.
int soundsensor = 2;
int led1 = 12;
int led2 = 10;

// SETUP.
void setup() {

  // declaring the sensor as input.
  pinMode(soundsensor, INPUT);

  // declaring the two LED's as output.
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

// MAIN-LOOP.
void loop() {

  // creating an if-statement to check if the sensor senses sound.
  if (digitalRead(soundsensor) == HIGH){

    // code to flash the LED's if the condition is met.
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);

    // code to add the delay for an effect.
    delay(250);
  }

  // creating an else statement to operate the LED's differently if no sound is detected.
  else {

    // code to make the LED stop flashing if no sound is detected.
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
  }
}
