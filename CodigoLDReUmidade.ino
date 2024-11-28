int luz=0;
int solo=0;

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  lcd.init();
  lcd.setBacklight(HIGH);

}

void loop() {
  luz=analogRead (A0);
  solo=analogRead (A1);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print ("Luz:  " + String (luz));
  lcd.setCursor(0,1);
  lcd.print ("Solo: " + String (solo));
  delay (250);

}
