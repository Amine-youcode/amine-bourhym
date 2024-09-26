#include <stdio.h>
//union main(){
int main() {
 int n , d=1 ,a=1;
 printf ("enter your valeur n: ");
 scanf ("%i",&n);
 while (a <= n){
     
     d*=a;
     a++;
     
 }
 printf ("resultat: %i ",d);
return 0;
}