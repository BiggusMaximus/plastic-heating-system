#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 4);
String temperatureStatus = "Not Ready";
String workingStatus = "Initializing System";

void lcdInit(){
    lcd.init();
    lcd.clear();         
    lcd.backlight();

    lcd.setCursor(0,0);   //Set cursor to character 2 on line 0
    lcd.print("Vertical Form");
    
    lcd.setCursor(0,1);   //Set cursor to character 2 on line 0
    lcd.print("Filling and Sealing");
    
    lcd.setCursor(0,2);   //Set cursor to character 2 on line 0
    lcd.print("Machine");
    
    lcd.setCursor(0,3);   //Set cursor to character 2 on line 0
    lcd.print("VFFSM");
    delay(500);
}

void showDisplay(float temperatureVertical, float temperatureHorizontal, String temperatureStatus, String workingStatus){
    lcd.clear();         
    lcd.backlight();

    lcd.setCursor(0,0);   //Set cursor to character 2 on line 0
    lcd.print("T Ver : " + String(temperatureHorizontal) + " C");
    lcd.setCursor(0,1);   //Set cursor to character 2 on line 0
    lcd.print("T Hor : " + String(temperatureVertical) + " C");

    lcd.setCursor(0,2);   //Set cursor to character 2 on line 0
    lcd.print("Status : " + String(temperatureStatus));

    lcd.setCursor(0,3);   //Set cursor to character 2 on line 0
    lcd.print(workingStatus);
}


