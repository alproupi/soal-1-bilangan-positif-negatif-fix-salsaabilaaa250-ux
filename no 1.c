#include <stdio.h>

int main() {
    int bilangan;
    
    printf("masukan bilangan:");
    scanf("%d", &bilangan);
    if(bilangan < 0){
        printf("bilangan negatif");
    }
    else if(bilangan == 0){
        printf("bilangan nol");
    }else{
         printf("bilangan positif");
    }
    return 0;
}
   