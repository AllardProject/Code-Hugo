#include <Arduino.h>

const int P1 = 2; // broche 2 du micro-contr�leur se nomme maintenant : p1
const int P2 = 3;
const int P3 = 4;
const int P4 = 5;
const int P5 = 6;
const int P6 = 7;
const int P7 = 8;
const int P8 = 9;
const int P9 = 10;
const int P10 = 11;
const int P11 = 12;
const int P12 = 13;
int Led1;
int Led2;
int Led3;
int Led4;
int Ser1;
int Ser2;
int Ser3;
int Ser4;

void setup() //fonction d'initialisation de la carte
{
//contenu de l'initialisation
pinMode(P1, OUTPUT);
pinMode(P2, OUTPUT);
pinMode(P3, OUTPUT);
pinMode(P4, OUTPUT);
pinMode(P5, OUTPUT);
pinMode(P6, OUTPUT);
pinMode(P7, OUTPUT);
pinMode(P8, OUTPUT);
pinMode(P9, OUTPUT);
pinMode(P10, OUTPUT);
pinMode(P11, OUTPUT);
pinMode(P12, OUTPUT);
}
void loop() //fonction principale, elle se r�p�te (s�ex�cute) � l'infini
{

  Led1 = 0;

  if (Led1 == 0){
    digitalWrite(P1, HIGH); //allumer L1 rouge
    digitalWrite(P2, LOW); // Eteindre L1 vert
  }
  if (Led1 == 1){
      digitalWrite(P1, LOW); //Eteindre rouge
      digitalWrite(P2, HIGH); // allumer  vert
    }


  Led2 = 1;

  if (Led2 == 0){
    digitalWrite(P3, HIGH); //allumer L1 rouge
    digitalWrite(P4, LOW); // Eteindre L1 vert
  }
  if (Led2 == 1){
      digitalWrite(P3, LOW); //Eteindre rouge
      digitalWrite(P4, HIGH); // allumer  vert
    }
 Led3 = 0;

  if (Led3 == 0){
    digitalWrite(P5, HIGH); //allumer L1 rouge
    digitalWrite(P6, LOW); // Eteindre L1 vert
  }
  if (Led3 == 1){
      digitalWrite(P5, LOW); //Eteindre rouge
      digitalWrite(P6, HIGH); // allumer  vert
    }


  Led4 = 1;

  if (Led4 == 0){
    digitalWrite(P7, HIGH); //allumer L1 rouge
    digitalWrite(P8, LOW); // Eteindre L1 vert
  }
  if (Led4 == 1){
      digitalWrite(P7, LOW); //Eteindre rouge
      digitalWrite(P8, HIGH); // allumer  vert
    }

  Ser1 = 1;

  if(Ser1 == 1){
    digitalWrite(P9, HIGH); //ouvrir serrure 1
    }

  Ser2 = 1;

  if(Ser2 == 1){
    digitalWrite(P10, HIGH);
    }

     Ser3 = 1;

  if(Ser3 == 1){
    digitalWrite(P11, HIGH);
    }


     Ser4 = 1;

  if(Ser4 == 1){
    digitalWrite(P12, HIGH);
    }


}