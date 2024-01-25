#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);
  //button degiskenleri
  #define Button1 7
  #define Button2 8        
  #define Button3 9
  #define Button4 10

  //hepsi icin farkli durum olusturuldu hata olusmamasi icin
  int durum1 = 0; 
  int durum2 = 0; 
  int durum3 = 0; 
  int durum4 = 0; 

  //binary sayilar
  int binary1=0; 
  int binary2=0;
  int binary3=0;
  int binary4=0;
  //binarylerin birlesimi
  char combined[5];

  void setup() {
    //buttonlari input olarak tanimlama
    pinMode(Button1, INPUT);  
    pinMode(Button2, INPUT);
    pinMode(Button3, INPUT);
    pinMode(Button4, INPUT);

    // İnteger değerleri combined degiskenine ekleme
    sprintf(combined, "%d%d%d%d", binary1, binary2, binary3, binary4);

    durum1 = 0; 
    durum2 = 0; 
    durum3 = 0; 
    durum4 = 0;  

    binary1=0;
    binary2=0;
    binary3=0;
    binary4=0;

    lcd.begin();
    lcd.print("Game 1");
  }

  void loop() {
    //1.OYUN
    //Button 1,2,3,4
      if(digitalRead(Button1)==1){
        if(durum1==0){
        binary1=1;
        durum1 =1;
        delay(500);
      }
      else{
        binary1=0;
        durum1= 0;
        delay(500);
      }
    }
      //Button2 0,1
      if(digitalRead(Button2)==1){
      if (durum2==0){
        binary2=1;
        durum2 =1;
        delay(500);
      }
      else{
        binary2=0;
        durum2= 0;
        delay(500);
      }
    }
      //Button3 0,1
      if(digitalRead(Button3)==1){
      if (durum3==0){
        binary3=1;
        durum3 =1;
        delay(500);
      }
      else{
        binary3=0;
        durum3= 0;
        delay(500);
      }
    }
      //Button4 0,1
      if(digitalRead(Button4)==1){
      if (durum4==0){
        binary4=1;
        durum4 =1;
        delay(500);
      }
      else{
        binary4=0;
        durum4= 0;
        delay(500);
      }
    }
    lcd.setCursor(0, 1); 

    sprintf(combined, "%d%d%d%d", binary1, binary2, binary3, binary4);
    lcd.print(combined);
    
    //combined degiskeninin icindeki degerin esit olmasi durumunda yapilacaklar.
    if(strcmp(combined, "0000") == 0){lcd.setCursor(6, 1); lcd.print("0   ");} 
     //3 karakter bosluk var 10 ve sonrasi degerlerinden buraya gecince hata olmamasi icin
    else if(strcmp(combined, "0001") == 0){lcd.setCursor(6, 1); lcd.print("1   ");}
    else if(strcmp(combined, "0010") == 0){lcd.setCursor(6, 1); lcd.print("2   ");} 
    else if(strcmp(combined, "0011") == 0){lcd.setCursor(6, 1); lcd.print("3   ");} 
    else if(strcmp(combined, "0100") == 0){lcd.setCursor(6, 1); lcd.print("4   ");} 
    else if(strcmp(combined, "0101") == 0){lcd.setCursor(6, 1); lcd.print("5   ");} 
    else if(strcmp(combined, "0110") == 0){lcd.setCursor(6, 1); lcd.print("6   ");} 
    else if(strcmp(combined, "0111") == 0){lcd.setCursor(6, 1); lcd.print("7   ");} 
    else if(strcmp(combined, "1000") == 0){lcd.setCursor(6, 1); lcd.print("8   ");} 
    else if(strcmp(combined, "1001") == 0){lcd.setCursor(6, 1); lcd.print("9   ");} 
    else if(strcmp(combined, "1010") == 0){lcd.setCursor(6, 1); lcd.print("10-A");} 
    else if(strcmp(combined, "1011") == 0){lcd.setCursor(6, 1); lcd.print("11-B");} 
    else if(strcmp(combined, "1100") == 0){lcd.setCursor(6, 1); lcd.print("12-C");} 
    else if(strcmp(combined, "1101") == 0){lcd.setCursor(6, 1); lcd.print("13-D");} 
    else if(strcmp(combined, "1110") == 0){lcd.setCursor(6, 1); lcd.print("14-E");} 
    else if(strcmp(combined, "1111") == 0){lcd.setCursor(6, 1); lcd.print("15-F");} 
  }