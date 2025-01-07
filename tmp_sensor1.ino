// C++ code
//
#include <Adafruit_LiquidCrystal.h>

int Temp = 0;

Adafruit_LiquidCrystal lcd_1(0);

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  lcd_1.begin(16, 2);
}

void loop()
{
  Temp = map(((analogRead(A0) - 20) * 3.04), 0, 1023, -20, 120);
  Serial.println(Temp);
  lcd_1.setCursor(0, 0);
  lcd_1.print("Temp Monitr system");
  lcd_1.setCursor(0, 1);
  lcd_1.print("Temp value=");
  lcd_1.setCursor(12, 1);
  lcd_1.print(Temp);
  delay(10); // Delay a little bit to improve simulation performance
}
