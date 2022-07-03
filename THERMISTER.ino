float temp;

void setup() 
{
  
Serial.begin(9600); 

}

void loop() 
{
temp = analogRead(A0);
temp = (temp * 500)/1023;
Serial.print("TEMPERATURE:");
Serial.print(temp);
Serial.print("*c");
Serial.println();
delay(2000);
}
