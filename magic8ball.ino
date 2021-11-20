#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
const int switchPin = 6;
int sS = 0;
int psS = 0;
int reply;
void setup()
 {
  lcd.begin(16,2);
  pinMode(switchPin, INPUT);
  lcd.print ("Ask the");
  lcd.setCursor(0, 1);
  lcd.print("Crystal Ball!");
 }
void loop()
 {
  sS = digitalRead(switchPin);
  if (sS != psS)
   {
    if (sS == LOW)
     {
      reply = random(8);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("the Ball says:");
      lcd.setCursor(0, 1);
      switch(reply)
       {
        case 0:
        lcd.print("Yes");
        break;
        case 1:
        lcd.print("Most Likely");
        break;
        case 2:
        lcd.print("Certainly");
        break;
        case 3:
        lcd.print("Outlook Good");
        break;
        case 4:
        lcd.print("Unsure");
        break;
        case 5:
        lcd.print("Ask Again");
        break;
        case 6:
        lcd.print("Doubtful");
        break;
        case 7:
        lcd.print("No");
        break;
       }
     } 
   }
 psS = sS; 
}
