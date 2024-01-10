int LED = 13;
int IR = 10;
int Value = HIGH;
void setup()
{
    pinMode(LED, OUTPUT);
    pinMode(IR, INPUT);
    Serial.begin(9600);
}
void loop()
{
    Value = digitalRead(IR);
    if (Value == LOW)
    {
        Serial.println( "Object detected");
        digitalWrite(LED, HIGH);                        
    else
    {
        Serial.println(" No Object "); 
        digitalWrite(LED, LOW);                 
    }
    delay(1000);
}