/* YourDuino.com Example Software Sketch
 20 character 4 line I2C Display
 Backpack Interface labelled "LCM1602 Funduino"
 terry@yourduino.com */

/*-----( Import needed libraries )-----*/
#include <Wire.h>  // Comes with Arduino IDE
// Get the LCD I2C Library here: 
// https://bitbucket.org/fmalpartida/new-liquidcrystal/downloads
// Move any other LCD libraries to another folder or delete them
// See Library "Docs" folder for possible commands etc.
#include <LiquidCrystal_I2C.h>

/*-----( Declare Constants )-----*/
//none
/*-----( Declare objects )-----*/
// set the LCD address to 0x27 for a 20 chars 4 line display
// Set the pins on the I2C chip used for LCD connections:
//                    addr, en,rw,rs,d4,d5,d6,d7,bl,blpol
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  // Set the LCD I2C address


/*-----( Declare Variables )-----*/
//none

void setupLcd()   /*----( SETUP: RUNS ONCE )----*/
{
  Serial.begin(9600);  // Used to type in characters

  lcd.begin(16,2);         // initialize the lcd for 20 chars 4 lines and turn on backlight

  // ------- Quick 3 blinks of backlight  -------------
  for(int i = 0; i< 3; i++)
  {
    lcd.backlight();
    delay(250);
    lcd.noBacklight();
    delay(250);
  }
  lcd.backlight(); // finish with backlight on  
  
  lcd.setCursor(0,0); //Start at character 0 on line 0
  printMsg("LCD is sucessfully initalized.");   
}/*--(end setup )---*/


void printMsg( char msg[]){
//  int length =  sizeof(msg)/sizeof(msg[0]);
//  for(int i = 0; i< length; i++){
//    lcd.setCursor(0,0);
//   // char[] subArray = subArray(msg,i,i+16);
//    lcd.print(msg);
//  }
  lcd.clear();
  lcd.print(msg); 
}
//
//char[] subArray(char[] fullArray,int startInx, int endInx){
//  int newLength = endInx - startInx + 1;
//  char[newLenth] returnArray; 
//  int j= 0;
//  for(int i=startInx; i <= endInx; i++){
//    returnArray[j] = fullArray[i];
//    j++;
//  }
//  return returnArray;
//}

