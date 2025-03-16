

#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x27,16,2);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.init(); //khoi dong lcd
  lcd.backlight(); //bat den nen LCD
  lcd.setCursor(0,0); // đặt con trỏ ở cột 1 dòng 1
  lcd.print("Hello");
  lcd.setCursor(0,1);
  lcd.print("Datnewlevel");
}

void loop() {
  // put your main code here, to run repeatedly:

}
