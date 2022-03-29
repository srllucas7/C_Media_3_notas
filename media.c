#include <stdio.h>
#include <stdlib.h>

int main (){

    int media1;
    scanf("%i", &media1);
    int media2;
    scanf("%i", &media2);
    int media3;
    scanf("%i", &media3);
    int result;
    

    result = (media1 + media2 + media3) / 3;

    //printf("A media entre as 3 notas eh de: %i", result);
    //condições - se maior que 7o passsa, se não reprova.

    if (result >= 70){
        printf("A media entre as 3 notas eh de: %i", result);
        printf("\nE o aluno esta aprovado");
    }else{
        printf("A media entre as 3 notas eh de: %i", result);
        printf("\nE o aluno esta reprovado");
    }
    

    return 0;
}