#define SEG1 11//e
#define SEG2 10//d
#define SEG4 9//c
#define SEG5 8//DP
#define SEG6 7//b
#define SEG7 6//a
#define SEG9 5//f
#define SEG10 4//g
#define LEDON HIGH
#define LEDOFF LOW


void zero(){
  //numero 0
  digitalWrite(SEG1, LEDON);//e
  digitalWrite(SEG2, LEDON);//d
  digitalWrite(SEG4, LEDON);//c
  digitalWrite(SEG5, LEDON);//DP
  digitalWrite(SEG6, LEDON);//b
  digitalWrite(SEG7, LEDON);//a
  digitalWrite(SEG9, LEDON);//f
  digitalWrite(SEG10, LEDOFF);//g
}
void one(){
//numero 1
  digitalWrite(SEG1, LEDOFF);//e
  digitalWrite(SEG2, LEDOFF);//d
  digitalWrite(SEG4, LEDON);//c
  digitalWrite(SEG5, LEDON);//DP
  digitalWrite(SEG6, LEDON);//b
  digitalWrite(SEG7, LEDOFF);//a
  digitalWrite(SEG9, LEDOFF);//f
  digitalWrite(SEG10, LEDOFF);//g
}
void two(){
//numero 2
  digitalWrite(SEG1, LEDON);//e
  digitalWrite(SEG2, LEDON);//d
  digitalWrite(SEG4, LEDOFF);//c
  digitalWrite(SEG5, LEDON);//DP
  digitalWrite(SEG6, LEDON);//b
  digitalWrite(SEG7, LEDON);//a
  digitalWrite(SEG9, LEDOFF);//f
  digitalWrite(SEG10, LEDON);//g
}
void three(){
//numero 3
  digitalWrite(SEG1, LEDOFF);//e
  digitalWrite(SEG2, LEDON);//d
  digitalWrite(SEG4, LEDON);//c
  digitalWrite(SEG5, LEDON);//DP
  digitalWrite(SEG6, LEDON);//b
  digitalWrite(SEG7, LEDON);//a
  digitalWrite(SEG9, LEDOFF);//f
  digitalWrite(SEG10, LEDON);//g
}
void four(){
//numero 4
  digitalWrite(SEG1, LEDOFF);//e
  digitalWrite(SEG2, LEDOFF);//d
  digitalWrite(SEG4, LEDON);//c
  digitalWrite(SEG5, LEDON);//DP
  digitalWrite(SEG6, LEDON);//b
  digitalWrite(SEG7, LEDOFF);//a
  digitalWrite(SEG9, LEDON);//f
  digitalWrite(SEG10, LEDON);//g
}
void five(){
//numero 5
  digitalWrite(SEG1, LEDOFF);//e
  digitalWrite(SEG2, LEDON);//d
  digitalWrite(SEG4, LEDON);//c
  digitalWrite(SEG5, LEDON);//DP
  digitalWrite(SEG6, LEDOFF);//b
  digitalWrite(SEG7, LEDON);//a
  digitalWrite(SEG9, LEDON);//f
  digitalWrite(SEG10, LEDON);//g
}
void six(){
//numero 6
  digitalWrite(SEG1, LEDON);//e
  digitalWrite(SEG2, LEDON);//d
  digitalWrite(SEG4, LEDON);//c
  digitalWrite(SEG5, LEDON);//DP
  digitalWrite(SEG6, LEDOFF);//b
  digitalWrite(SEG7, LEDON);//a
  digitalWrite(SEG9, LEDON);//f
  digitalWrite(SEG10, LEDON);//g
}
void seven(){
//numero 7
  digitalWrite(SEG1, LEDOFF);//e
  digitalWrite(SEG2, LEDOFF);//d
  digitalWrite(SEG4, LEDON);//c
  digitalWrite(SEG5, LEDON);//DP
  digitalWrite(SEG6, LEDON);//b
  digitalWrite(SEG7, LEDON);//a
  digitalWrite(SEG9, LEDOFF);//f
  digitalWrite(SEG10, LEDOFF);//g
}
void eight(){
//numero 8
  digitalWrite(SEG1, LEDON);//e
  digitalWrite(SEG2, LEDON);//d
  digitalWrite(SEG4, LEDON);//c
  digitalWrite(SEG5, LEDON);//DP
  digitalWrite(SEG6, LEDON);//b
  digitalWrite(SEG7, LEDON);//a
  digitalWrite(SEG9, LEDON);//f
  digitalWrite(SEG10, LEDON);//g
}
void nine(){
//numero 9
  digitalWrite(SEG1, LEDOFF);//e
  digitalWrite(SEG2, LEDOFF);//d
  digitalWrite(SEG4, LEDON);//c
  digitalWrite(SEG5, LEDON);//DP
  digitalWrite(SEG6, LEDON);//b
  digitalWrite(SEG7, LEDON);//a
  digitalWrite(SEG9, LEDON);//f
  digitalWrite(SEG10, LEDON);//g
}

void setup() {
 Serial.begin(9600);
  pinMode(SEG1, OUTPUT);//11
  pinMode(SEG2, OUTPUT);//10
  pinMode(SEG4, OUTPUT);//9
  pinMode(SEG5, OUTPUT);//8
  pinMode(SEG6, OUTPUT);//7
  pinMode(SEG7, OUTPUT);//6
  pinMode(SEG9, OUTPUT);//5
  pinMode(SEG10, OUTPUT);//4  
}

void showNum(int number){
  switch(number){
    case 0: zero();break;
    case 1: one();break;
    case 2: two();break;
    case 3: three();break;
    case 4: four();break;
    case 5: five();break;
    case 6: six();break;
    case 7: seven();break;
    case 8: eight();break;
    case 9: nine();break;
  }
}



void loop() {
  for(int i=0; i < 10; i++){
    showNum(i);
    delay(200);
  }
}

