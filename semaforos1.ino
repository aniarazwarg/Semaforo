// C++ code

//rua1
int red_1 = 13;
int yel_1 = 12;
int gre_1 = 11;

//rua2
int red_2 = 4;
int yel_2 = 3;
int gre_2 = 2;

//pedestres
int pRed_1 = 10;
int pGre_1 = 9;



//pedestres
int pRed_2 = 6;
int pGre_2 = 5;

void setup(){
  
pinMode (red_1 ,OUTPUT);
pinMode (yel_1 ,OUTPUT);
pinMode (gre_1 ,OUTPUT);
pinMode (red_2 ,OUTPUT);
pinMode (yel_2 ,OUTPUT);
pinMode (gre_2 ,OUTPUT);
pinMode (pRed_1,OUTPUT);
pinMode (pGre_1,OUTPUT);
pinMode (pRed_2,OUTPUT);
pinMode (pGre_2,OUTPUT);
  
}

void loop(){
cruzamento();
}

void cruzamento(){
  
  
digitalWrite(red_1,LOW);
digitalWrite(gre_1,LOW);
digitalWrite(yel_1,HIGH);
digitalWrite(pRed_1,HIGH);
digitalWrite(pGre_1,LOW);
  
 // rua 1 amarelo , pedestre vermelho

digitalWrite(red_2,HIGH);
digitalWrite(gre_2,LOW);
digitalWrite(yel_2,LOW);
digitalWrite(pRed_2,LOW);
digitalWrite(pGre_2,HIGH);
  
  //rua 2 vermelho , pedestre verde 

delay(2000);
  
  //------piscar ----------//

digitalWrite(red_1,HIGH);
digitalWrite(gre_1,LOW);
digitalWrite(yel_1,LOW);
digitalWrite(pRed_1,HIGH);
digitalWrite(pGre_1,LOW);

digitalWrite(red_2,HIGH);
digitalWrite(gre_2,LOW);
digitalWrite(yel_2,LOW);
digitalWrite(pRed_2,HIGH);
digitalWrite(pGre_2,LOW);
  
  //rua 2 vermelho, pedestre vermelho

delay(400);
  
 digitalWrite(red_1,HIGH);
digitalWrite(gre_1,LOW);
digitalWrite(yel_1,LOW);
digitalWrite(pRed_1,HIGH);
digitalWrite(pGre_1,LOW);


digitalWrite(red_2,HIGH);
digitalWrite(gre_2,LOW);
digitalWrite(yel_2,LOW);
digitalWrite(pRed_2,LOW);
digitalWrite(pGre_2,LOW);
  
  //rua 2 vermelho, pedestre apagado.

delay(400);
  
 digitalWrite(red_1,HIGH);
digitalWrite(gre_1,LOW);
digitalWrite(yel_1,LOW);
digitalWrite(pRed_1,HIGH);
digitalWrite(pGre_1,LOW);


digitalWrite(red_2,HIGH);
digitalWrite(gre_2,LOW);
digitalWrite(yel_2,LOW);
digitalWrite(pRed_2,HIGH);
digitalWrite(pGre_2,LOW);
  
  //rua 2 vermelho, pedestre vermelho

delay(400);
  
  //---------------------parar de piscar----------------//
  
digitalWrite(red_1,HIGH);
digitalWrite(gre_1,LOW);
digitalWrite(yel_1,LOW);
digitalWrite(pRed_1,LOW);
digitalWrite(pGre_1,HIGH);
  
 //rua 1 vermelho, pedestre verde.

digitalWrite(red_2,LOW);
digitalWrite(gre_2,HIGH);
digitalWrite(yel_2,LOW);
digitalWrite(pRed_2,HIGH);
digitalWrite(pGre_2,LOW);
  
  //rua 2 verde, pedestre vermelho.

delay(4000);
  
  //-----------------------1fechou/ p1 abriu-2abriu p2 fechou--------------------------//
  
  // PISCAR //
  digitalWrite(red_1,HIGH);
digitalWrite(gre_1,LOW);
digitalWrite(yel_1,LOW);
digitalWrite(pRed_1,HIGH);
digitalWrite(pGre_1,LOW);
  
 // rua 1 VERMELHO , pedestre vermelho

digitalWrite(red_2,LOW);
digitalWrite(gre_2,HIGH);
digitalWrite(yel_2,LOW);
digitalWrite(pRed_2,HIGH);
digitalWrite(pGre_2,LOW);
  
  //rua 2 vermelho , pedestre verde 

delay(400);
  
    digitalWrite(red_1,HIGH);
digitalWrite(gre_1,LOW);
digitalWrite(yel_1,LOW);
digitalWrite(pRed_1,LOW);
digitalWrite(pGre_1,LOW);
  
 // rua 1 VERMELHO , pedestre APAGADO

digitalWrite(red_2,LOW);
digitalWrite(gre_2,HIGH);
digitalWrite(yel_2,LOW);
digitalWrite(pRed_2,HIGH);
digitalWrite(pGre_2,LOW);
  
  //rua 2 vermelho , pedestre verde 

delay(400);
  
    digitalWrite(red_1,HIGH);
digitalWrite(gre_1,LOW);
digitalWrite(yel_1,LOW);
digitalWrite(pRed_1,HIGH);
digitalWrite(pGre_1,LOW);
  
 // rua 1 VERMELHO , pedestre vermelho

digitalWrite(red_2,LOW);
digitalWrite(gre_2,LOW);
digitalWrite(yel_2,HIGH);
digitalWrite(pRed_2,HIGH);
digitalWrite(pGre_2,LOW);
  
  //rua 2 AMARELO , pedestre VERMELHO 

delay(400);
  
  //----------------1 FECHOU/FECHOU/AMARELO/VERMELHO-------------//
  
  
   digitalWrite(red_1,HIGH);
digitalWrite(gre_1,LOW);
digitalWrite(yel_1,LOW);
digitalWrite(pRed_1,HIGH);
digitalWrite(pGre_1,LOW);
  
 // rua 1 VERMELHO , pedestre vermelho

digitalWrite(red_2,LOW);
digitalWrite(gre_2,LOW);
digitalWrite(yel_2,HIGH);
digitalWrite(pRed_2,HIGH);
digitalWrite(pGre_2,LOW);
  
  //rua 2 AMARELO , pedestre VERMELHO

delay(1600);
  
  //-------------------------------------------------------------//
  
    digitalWrite(red_1,HIGH);
digitalWrite(gre_1,LOW);
digitalWrite(yel_1,LOW);
digitalWrite(pRed_1,HIGH);
digitalWrite(pGre_1,LOW);
  
 // rua 1 VERMELHO , pedestre vermelho

digitalWrite(red_2,HIGH);
digitalWrite(gre_2,LOW);
digitalWrite(yel_2,LOW);
digitalWrite(pRed_2,HIGH);
digitalWrite(pGre_2,LOW);
  
  //rua 2 VERMELHO , pedestre VERMELHO.

delay(300);
  
  digitalWrite(red_1,LOW);
digitalWrite(gre_1,HIGH);
digitalWrite(yel_1,LOW);
digitalWrite(pRed_1,HIGH);
digitalWrite(pGre_1,LOW);
  
 // rua 1 VERDE , pedestre vermelho

digitalWrite(red_2,HIGH);
digitalWrite(gre_2,LOW);
digitalWrite(yel_2,LOW);
digitalWrite(pRed_2,LOW);
digitalWrite(pGre_2,HIGH);
  
  //rua 2 VERMELHO , pedestre VERDE.

delay(3800);
  
 
}
  
  