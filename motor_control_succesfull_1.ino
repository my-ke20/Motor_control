const int enPin = 5;
const int in1Pin = 7;
const int in2Pin = 4;

void setup()
{
  Serial.begin(9600);
  pinMode(in1Pin, OUTPUT);
  pinMode(in1Pin, OUTPUT);
  Serial.println("Speed i.e 0-9 or +- to set direction");
}

void loop()
{
  if(Serial.available())
  {
    char ch = Serial.read();
    if(isDigit(ch))
    {
      int speed = map(ch,'0','9',0,255);
      analogWrite(enPin, speed);
      Serial.println(speed);
    }
    else if(ch == '+')
    {
      Serial.println('CW');
      digitalWrite(in1Pin,LOW);
      digitalWrite(in2Pin,HIGH);
    }
    else if(ch == '-')
    {
      Serial.println('ACW');
      digitalWrite(in1Pin,HIGH);
      digitalWrite(in2Pin,LOW);
    }
    else if(ch != '\n' && ch!= '\r')
    {
      Serial.println("No such character ");
      Serial.println(ch);
    }
  }
}