#include <stdio.h>

int main() {
int a,b;
printf("entrer les numbre: ");
scanf("%d",&a);
while(0< a){
 b=a%10;
 printf("%d",b);
 
a=a/10;}


return 0;
}