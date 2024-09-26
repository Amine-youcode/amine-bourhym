#include <stdio.h>

int main() {
int n,g;
printf("entre un valeur n: ");
scanf("%i",&g);
for (n=0;n<g;n++){
    printf("%i \n",2 * n + 1);
}


return 0;
}