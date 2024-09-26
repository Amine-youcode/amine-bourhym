#include <stdio.h>

int main() {
int n , a=1;
int d ;
printf ("entrer une valeur: ");
scanf ("%d",&n);
while (a<=n){
    printf("%i+",a);
    d+=a;
    a++;
}
printf("= %i",d);


return 0;
}