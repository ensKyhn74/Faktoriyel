#include <stdio.h>
// klavyeden girilen sayının faktoriyeli hesaplanır,ekrana yazdırılır  

int main() 

{
 
 int sayi;
 int i;
 
 printf("lutfen faktoriyelinin hesaplanmasini istediginiz sayiyi girin: ");
 scanf("%d",&sayi);
 
 if(sayi >= 0)
 {
  int fact = 1; // çarpma yapılacağı için 1'den başlat!
 
  for(i = 1 ; i <= sayi ; i++) 
  {
   fact *= i; 
  }  
 
  printf("%d! = %d",sayi,fact);   
 }
 
 else
 {
  printf("negatif sayi girmeyin!");     
 }
  
 return 0;

}