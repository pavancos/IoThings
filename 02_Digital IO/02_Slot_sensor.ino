int sensor = 2;
int LED = 13;
void setup(){
Serial.begin(9600);
pinMode(sensor,INPUT);
}
void loop() {
int statusSensor = digitalRead(sensor);
if (statusSensor == 1)
{
Serial.println("HIGH");
digitalWrite(LED, HIGH);
}
else
{
digitalWrite(LED, LOW);
Serial.println("LOW");
}
}