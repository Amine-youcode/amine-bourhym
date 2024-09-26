#include <stdio.h>
#include <math.h>
int main() {
int n,a,d,t;
printf("enter une valeur: ");
scanf("%i",&n);
printf("entrer un valeur: ");
scanf("%i",&a);
a=1;
for(d=0;d<=n;d++){
    a=a*n;
   
}
printf("%d \n",a);


return 0;

}