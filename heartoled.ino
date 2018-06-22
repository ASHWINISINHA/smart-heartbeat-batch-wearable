#include <DigisparkOLED.h>
#include <Wire.h>
int senval=0;


void setup() {
  
  oled.begin();

}

void loop() {
   
  senval=analogRead(1);
  analogWrite(4, senval-600);//change it according to your sensor type
  oled.clear();
  oled.setCursor(0, 0);
  oled.setFont(FONT8X16);
  oled.print("your text"); //your text here
  oled.setCursor(0, 2); 
  oled.println("Heart rate"); 
  oled.setFont(FONT8X16);
  oled.print(senval-600);//change it according to sensor
  delay(2000);
  oled.clear();
   
  oled.setCursor(0, 0); //top left
  oled.setFont(FONT8X16);
  oled.print("ASHWINI KUMAR"); 
  oled.setCursor(0, 2); 
  oled.setFont(FONT8X16);
  oled.print("pulse rate");
  oled.setCursor(0, 4); 
  oled.setFont(FONT8X16);
  oled.print(senval);
  oled.setCursor(0, 6);
  oled.setFont(FONT8X16);
  oled.print("yourtext@gmail.com");//your ttext here
  delay(2000);
   
}
