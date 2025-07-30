//PHOTORESISTOR
const int sensorPin = A0;
const int darkLevel = 700;//how dark it is
//RGB LED
const int pinRed = 11;//the pin connected to the red LED
const int pinBlue = 10;//the pin connected to the green LED
const int pinGreen = 9;//the pin connected to the blue LED

void setup()//only runs once to start the code
{
  pinMode(pinRed, OUTPUT); //set the pin for the red LED to output
  pinMode(pinGreen, OUTPUT);//set the pin for the green LED to output
  pinMode(pinBlue, OUTPUT);//set the pin for the blue LED to output
  Serial.begin(9600); //starts the Serial Monitor
}

void loop()//loops the commands once powered
{
  int lightLevel = analogRead(sensorPin);
  Serial.print("LIGHT LEVEL:");//writes 'LIGHT LEVEL:' before giving the light level
  Serial.println(lightLevel);//gives the light level number
  
  if(lightLevel < darkLevel){//if the light level is less than the dark level, the RGB LED will start
    startRgb();
  }else{//if it's more than the dark level, the light will not start
    stopRgb();
  }
  
  delay(50);//stops for 0.5 second
}

void startRgb()//the colors that the RGB LED will flash
{
//1st color
  //RED
  analogWrite(pinRed, 255);
  //BLUE
  analogWrite(pinBlue, 0);
  //GREEN
  analogWrite(pinGreen, 0);
  delay(500);//stops for 500 milliseconds
//2nd color
  //RED
  analogWrite(pinRed, 0);
  //BLUE
  analogWrite(pinBlue, 0);
  //GREEN
  analogWrite(pinGreen, 255);
  delay(500);//stops for 500 milliseconds
//3rd color
  //RED
  analogWrite(pinRed, 0);
  //BLUE
  analogWrite(pinBlue, 255);
  //GREEN
  analogWrite(pinGreen, 0);
  delay(500);//stops for 500 milliseconds
//4th color
  //RED
  analogWrite(pinRed, 119);
  //BLUE
  analogWrite(pinBlue, 194);
  //GREEN
  analogWrite(pinGreen, 14);
  delay(500);//stops for 500 milliseconds
//5th color
  //RED
  analogWrite(pinRed, 255);
  //BLUE
  analogWrite(pinBlue, 234);
  //GREEN
  analogWrite(pinGreen, 0);
  delay(500);//stops for 500 milliseconds
//6th color
  //RED
  analogWrite(pinRed, 0);
  //BLUE
  analogWrite(pinBlue, 229);
  //GREEN
  analogWrite(pinGreen, 255);
  delay(500);//stops for 500 milliseconds
//7th color
  //RED
  analogWrite(pinRed, 251);
  //BLUE
  analogWrite(pinBlue, 0);
  //GREEN
  analogWrite(pinGreen, 255);
  delay(500);//stops for 500 milliseconds
//8th color
  //RED
  analogWrite(pinRed, 255);
  //BLUE
  analogWrite(pinBlue, 0);
  //GREEN
  analogWrite(pinGreen, 140);
  delay(500);//stops for 500 milliseconds
}

void stopRgb()//RGB LED gets turned off
{
  //RED
  analogWrite(pinRed, 0);
  //BLUE
  analogWrite(pinBlue, 0);
  //GREEN
  analogWrite(pinGreen, 0);
}