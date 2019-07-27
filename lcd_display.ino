#include <LiquidCrystal_I2C.h>

#define LCD_ADDR 0x3f

// I2C address, rows, columns
LiquidCrystal_I2C lcd(LCD_ADDR, 20, 4);

String row1 = "Hello World";
String row2 = "Display work";
String row3 = "Third row";
String row4 = "Fourth row";

void setup() {
  // put your setup code here, to run once:
  lcd.init();
}

void loop() {
  // put your main code here, to run repeatedly:
 lcd.clear();
 lcd.backlight();
 lcd.setCursor(0, 0);
 typeRow(row1);
 lcd.setCursor(0, 1);
 typeRow(row2);
 lcd.setCursor(0, 2);
 typeRow(row3);
 lcd.setCursor(0, 3);
 typeRow(row4);
 delay(2000);
}

void typeRow(String row){
  int lngt = row.length();
  for(int i = 0; i < lngt; i++){
    lcd.print(row[i]);
  }
}
