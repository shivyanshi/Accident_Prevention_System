Arduino Code for Dimming lights:
const int ledPin = 13;  // LED connected to digital pin 13
const int irSensorPin = 7; // IR sensor connected to digital pin 7
int irSensorValue = 0; // variable to store the value coming from the IR sensor

void setup() {
  pinMode(ledPin, OUTPUT);  // sets the digital pin as output
  pinMode(irSensorPin, INPUT); // sets the digital pin as input
}

void loop() {
  irSensorValue = digitalRead(irSensorPin); // read the value from the IR sensor
  if (irSensorValue == 1) { // if there is something in front of the sensor
    digitalWrite(ledPin, HIGH); // turn on the LED
  } else {
    digitalWrite(ledPin, LOW); // turn off the LED
  }
}

Arduino Code For automatic car dipper using IR sensor:
Arduino code for automatic car dipper using ir sensor

//Define the pins used
const int irPin = 0;
const int dipperPin = 7;

//Define the threshold value for the ir sensor
const int threshold = 500;

//This variable will be used to store the sensor data
int irData;

void setup(){
  //Set the dipper pin to output mode
  pinMode(dipperPin, OUTPUT);
  
  //Set the ir pin to input mode
  pinMode(irPin, INPUT);
}

void loop(){
  //Read the data from the ir sensor
  irData = analogRead(irPin);
  
  //Check if the data is above the threshold
  if(irData > threshold){
    //Turn on the dipper
    digitalWrite(dipperPin, HIGH);
  }
  else{
    //Turn off the dipper
    digitalWrite(dipperPin, LOW);
  }
  
  //Wait for a small amount of time before reading sensor again
  delay(50);
}
