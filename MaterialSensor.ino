const int ISensor = 12;  // Inductive Sensor Signal Pin
const int MSensor = 10;  // Magnetic Sensor Signal Pin

void setup() {
    Serial.begin(9600);  // Start serial communication
    pinMode(ISensor, INPUT);  // Set pin 12 as input
    pinMode(MSensor, INPUT);  // Set pin 10 as input
}

void loop() {
    int ISensorValue = digitalRead(ISensor);  // Read Inductive Sensor
    int MSensorValue = digitalRead(MSensor);  // Read Magnetic Sensor

    if (ISensorValue==0&&MSensorValue==0)
    {
      Serial.println("Chrome Plated Steel!");
    }

    else if (ISensorValue==0&&MSensorValue==1)
    {
      Serial.println("Brass!");
    }

    else if (ISensorValue==0&&MSensorValue==1)
    {
      Serial.println("Nylon!");
    }
    

    delay(2500);  // Wait for half a second
}