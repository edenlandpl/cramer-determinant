/*Adrian Glabik I semestr niestacjonarne 2016*/
/*
 * Rozwiazywanie rownania kwadratowego
 * 1.12.2009
 * Wersja 1.0
 */
#include <math.h> /* funkcja sqrt */
#include <stdio.h> /* funkcje printf, scanf */
#include <stdlib.h> /* funkcja system */
float a1, b1, c1, a2, b2, c2; /* wspolczynniki rownania */
float w, wx, wy; /* pierwiastki rzeczywiste */
float x , y ;
int main()
{
  system("cls"); /* wyczyszczenie ekranu */
  printf("Program rozwiazuje uklad rownan metoda Pana Cramera\n");
  printf(" Pierwsze rownanie: a1x + b1y = c1  \n\n");
  printf(" Drugie rownanie: a2x + b2y = c2  \n\n");
  printf("Podaj wartosci wspolczynnikow:\n");
  printf("a1 = "); /* wyswietlenie napisu */
  scanf("%f", &a1); /* odczyt z klawiatury */
  printf("b1 = "); /* wyswietlenie napisu */
  scanf("%f", &b1); /* odczyt z klawiatury */
  printf("c1 = "); /* wyswietlenie napisu */
  scanf("%f", &c1); /* odczyt z klawiatury */
  printf("a2 = "); /* wyswietlenie napisu */
  scanf("%f", &a2); /* odczyt z klawiatury */
  printf("b2 = "); /* wyswietlenie napisu */
  scanf("%f", &b2); /* odczyt z klawiatury */
  printf("c2 = "); /* wyswietlenie napisu */
  scanf("%f", &c2); /* odczyt z klawiatury */  
  w = a1*b2 - b1*a2;
  wx = c2*b2 - b1*c2;
  wy = a1*c2 - c1*a2;
  if (w == 0) /* sprawdzenie, dla w = 0 */
     {
       if (wx == 0 && wy == 0) /* sprawdzenie, dla wx = 0 */
           {
            printf("Uklad nieoznaczony \n\n"); /* na ekran */;
           } 
       if (wx != 0 || wy != 0) /*wx albo wy rozne od zera*/    
          {
          printf("Uklad sprzeczny \n\n"); /* na ekran */;    
              
          }      
       
       
 } 
  else
  {
   x= wx / w ;
   y= wy / w ;
   printf("Rozwiazanie rownania\n\n"); /* na ekran */;
   printf("x = %.5f\n\n", x); /* na ekran */;
   printf("y = %.5f\n\n", y); /* na ekran */;   
  }
  
  
  system("pause");
 return 0; /* wyjscie z programu */
}
