#include <stdio.h>

/*
P7)  Escreva um programa que, dado duas datas, determine qual delas ocorreu primeiro.
 Para cada uma das duas datas, leia três números: um referente ao dia, outro ao mês e outro ao ano.
*/
int main(){

    // Declarando as variaveis que iremos utilizar.
    int ano_1, ano_2, mes_1, mes_2, dia_1, dia_2;

    // Guardei 2 frases que eu usei repetidamente no programa, para não ficar repetindo.
    char frase1[50] = "A primeira data ocorreu primeiro";
    char frase2[50] = "A segunda data ocorreu primeiro";

    // Aqui coletaremos as informações da primeira data.
    printf("Digite abaixo a primeira data na ordem: Ano, Mes e dia. \n");
    scanf("%d", &ano_1);
    scanf("%d", &mes_1);
    scanf("%d", &dia_1);

    // Aqui coletaremos as informações da segunda data.
    printf("Agora digite a segunda data na ordem: Ano, mes e dia. \n");
    scanf("%d", &ano_2);
    scanf("%d", &mes_2);
    scanf("%d", &dia_2);

    // abaixo temos uma logica bem extensa, confesso que não gostei e adoraria simplificar mas não consegui pensar em como.

    // fazemos as verificações dos anos.
    if(ano_1 < ano_2){
        printf("%s", frase1);
    }
    else if(ano_1 > ano_2){
        printf("%s", frase2);
    }
    else if(ano_1 == ano_2){
        
        // Ja aqui fazemos as verificações dos meses.
        if(mes_1 < mes_2){
            printf("%s", frase1);
        }
        else if(mes_1 > mes_2){
            printf("%s", frase2);
        }
        else if(mes_1 == mes_2){
            
            // E por ultimo verificamos os dias, chegando a conclusão se sao diferentes ou sao iguais
            if (dia_1 < dia_2){
                printf("%s", frase1);
            }
            else if(dia_1 > dia_2){
                printf("%s", frase2);
            }
            else if (dia_1 == dia_2){
                printf("As datas sao as mesmas.");
            }
        }
    }
}