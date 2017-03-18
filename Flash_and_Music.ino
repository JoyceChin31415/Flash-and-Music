/* This a easy project made by Joyce Chin. 
   As the project name, this is a device combined LED flasing and speaker making music.
   
   Parts required: 
 Arduino UNO R3    | 1    
 buzzer            | 1          
 DuPont line       | 9
 speaker 8ohm      | 1
 resistance        | 7
 LED               | 6
 DuPont line       | 9

 
  Created 1 March 2017
 by Joyce Chin

 https://create.arduino.cc/editor/JoyceChin/1b8217b0-be39-4321-ab30-044f7e82c845
 


//設置控制Led 的數位IO 腳
int Led1 = 1;
int Led2 = 2;
int Led3 = 3;
int Led4 = 4;
int Led5 = 5;
int Led6 = 6;

//led 燈花樣顯示樣式1 副程式
void style_1(void)
{
unsigned char j;
for(j=1;j<=6;j++)            //每隔200ms 依次點亮1~6 引腳相連的led 燈
{
digitalWrite(j,HIGH);             //點亮j 引腳相連的led 燈
delay(200);               //延時200ms
}
 

for(j=6;j>=1;j--)              //每隔200ms 依次熄滅6~1 引腳相連的led 燈
{
digitalWrite(j,LOW);              //熄滅j 引腳相連的led 燈
delay(200);                    //延時200ms
}
}

//燈閃爍副程式
void flash(void)
{
unsigned char j,k;
for(k=0;k<=1;k++)       //閃爍兩次
{
for(j=1;j<=6;j++)         //點亮1~6 引腳相連的led 燈
{
digitalWrite(j,HIGH);      //點亮與j 引腳相連的led 燈
delay(200);                 //延時200ms
}
for(j=1;j<=6;j++)              //熄滅1~6 引腳相連的led 燈
{
digitalWrite(j,LOW);     //熄滅與j 引腳相連的led 燈
delay(200);              //延時200ms
      }
      tone(8, 698, 500);   
      delay(800);                    
      tone(8, 698, 500);  
      delay(800); 
       tone(8, 659, 500);   
      delay(800);   
       tone(8, 659, 500);   
      delay(800);   
       tone(8, 587, 500);   
      delay(800);   
       tone(8, 587, 500);   
      delay(800);   
       tone(8, 523, 500); 
       noTone(8)  
;      delay(1000);
}
}

//led 燈花樣顯示樣式2 副程式
void style_2(void)
{
unsigned char j,k;
k=1;                           //設置k 的初值為1
for(j=3;j>=1;j--)
{
digitalWrite(j,HIGH);             //點亮燈
digitalWrite(j+k,HIGH);           //點亮燈
delay(400);                    //延時400ms
k +=2;                        //k 值加2
}
k=5;                             //設置k 值為5

for(j=1;j<=3;j++)
{
digitalWrite(j,LOW);               //熄滅燈
digitalWrite(j+k,LOW);              //熄滅燈
delay(400);                      //延時400ms
k -=2;                          //k 值減2
}
 tone(8, 784, 500);   
      delay(800);                    
      tone(8, 784, 500);  
      delay(800); 
       tone(8, 698, 500);   
      delay(800);   
       tone(8, 698, 500);   
      delay(800);   
       tone(8, 659, 500);   
      delay(800);   
       tone(8, 659, 500);   
      delay(800);   
       tone(8, 587, 500); 
       noTone(8)  
;      delay(1000);
}

//led 燈花樣顯示樣式3 副程式
void style_3(void)
{
unsigned char j,k;                       //led 燈花樣顯示樣式3 副程式
k=5;                                //設置k 值為5
for(j=1;j<=3;j++)
{
digitalWrite(j,HIGH);              //點亮燈
digitalWrite(j+k,HIGH);            //點亮燈
delay(400);                     //延時400ms
digitalWrite(j,LOW);              //熄滅燈
digitalWrite(j+k,LOW);             //熄滅燈
k -=2;                          //k 值減2
}

k=3;                                 //設置k 值為3
for(j=2;j>=1;j--)
{
digitalWrite(j,HIGH);               //點亮燈
digitalWrite(j+k,HIGH);            //點亮燈
delay(400);                       //延時400ms
digitalWrite(j,LOW);                 //熄滅燈
digitalWrite(j+k,LOW);                //熄滅燈
k +=2;                              //k 值加2
}
 tone(8, 784, 500);   
      delay(800);                    
      tone(8, 784, 500);  
      delay(800); 
       tone(8, 698, 500);   
      delay(800);   
       tone(8, 698, 500);   
      delay(800);   
       tone(8, 659, 500);   
      delay(800);   
       tone(8, 659, 500);   
      delay(800);   
       tone(8, 587, 500); 
       noTone(8)  
;      delay(1000);
}
//led 燈花樣顯示樣式1 副程式
void style_4(void)
{
unsigned char j,k;
for(j=6;j>=2;j--)             
{
digitalWrite(j,HIGH);             
delay(200);
}
             
//燈閃爍副程式

  for(k=1;k<=2;k++)
 {digitalWrite(1,HIGH);
 delay(200);
 digitalWrite(1,LOW);
 delay(200);
 
}
tone(8, 784, 500);   
      delay(800);                    
      tone(8, 784, 500);  
      delay(800); 
       tone(8, 698, 500);   
      delay(800);   
       tone(8, 698, 500);   
      delay(800);   
       tone(8, 659, 500);   
      delay(800);   
       tone(8, 659, 500);   
      delay(800);   
       tone(8, 587, 500); 
       noTone(8)  
;      delay(1000);


 
}

void setup()
{
unsigned char i;
for(i=1;i<=6;i++){              //依次設置1~6 個數位引腳為輸出模式
pinMode(i,OUTPUT);  //設置第i 個引腳為輸出模式
pinMode(8, OUTPUT); 
}
}

void loop()
{
style_1();     //樣式1
flash();       //閃爍
style_2();     //樣式2
flash();       //閃爍
style_3();     //樣式3
flash();       //閃爍
style_4();
flash();

}
