int red_pin=10;
int green_pin=1;
int blue_pin=4;

void setup() {
  pinMode(red_pin,OUTPUT);
  pinMode(green_pin,OUTPUT);
  pinMode(blue_pin,OUTPUT);
}

void loop() {
  RGBColor(255,0,0);
  delay(500);
  RGBColor(0,255,0);
  delay(500);
  RGBColor(0,0,255);
  delay(500);
}

void RGBColor(int red,int green,int blue)
{
  analogWrite(red_pin,red);
  analogWrite(green_pin,green);
  analogWrite(blue_pin,blue);
}