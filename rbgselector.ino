// Define pin numbers
const int redPin = 9;       // Pin connected to the red component of the RGB LED
const int greenPin = 10;    // Pin connected to the green component of the RGB LED
const int bluePin = 11;     // Pin connected to the blue component of the RGB LED

const int redPotPin = A0;   // Pin connected to the potentiometer for red
const int greenPotPin = A1; // Pin connected to the potentiometer for green
const int bluePotPin = A2;  // Pin connected to the potentiometer for blue

void setup() {
  // Initialize the RGB LED pins as outputs
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // Read the potentiometer values (0 to 1023)
  int redValue = analogRead(redPotPin);     // Read the red potentiometer
  int greenValue = analogRead(greenPotPin); // Read the green potentiometer
  int blueValue = analogRead(bluePotPin);    // Read the blue potentiometer

  // Map the potentiometer values to the range of 0 to 255
  redValue = map(redValue, 0, 1023, 0, 255);   // Map red value
  greenValue = map(greenValue, 0, 1023, 0, 255); // Map green value
  blueValue = map(blueValue, 0, 1023, 0, 255);   // Map blue value

  // Set the RGB LED color based on the mapped values
  analogWrite(redPin, redValue);     // Set the red component
  analogWrite(greenPin, greenValue); // Set the green component
  analogWrite(bluePin, blueValue);   // Set the blue component

  // Small delay to allow for smooth color transitions
  delay(50); // Delay in milliseconds
}


