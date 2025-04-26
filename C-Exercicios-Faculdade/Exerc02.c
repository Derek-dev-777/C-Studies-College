#include <stdio.h>

/*
5) Desenhe o fluxograma de um programa que simule o jogo "Pedra, Papel e Tesoura".
Apenas par simplificação, cada um dos jogadores deverá escolher entre as opções "1","2" ou "3",
sendo que "1" representa "Pedra", "2" representa "Papel", e "3" representa "Tesoura".
Peça para ambos jogadores fazerem sua escolha, e em seguida imprima se houve "empate",
ou se "jogador 1 ganhou" ou "jogador 2 ganhou".
*/

int main(){

    // Declarando nossas variaveis, para o jogo!
    int pedra=1, papel=2, tesoura=3, jogada_um, jogada_dois ;

    // Pequeno dialogo para esclarecer o jogo e explicar as regras.
    printf("Iremos jogar pedra, papel e tesoura, regras abaixo: \n");
    printf("Para jogar 'Pedra' digite 1, para jogar 'Papel' digite 2, para jogar 'Tesoura' digite 3. \n");

    // Pegando a decisão do jogador 1.
    printf("Vamos jogar... jogador um realize sua escolha  de acordo com as regras: (1, 2, 3) \n");
    scanf("%d", &jogada_um);

    // Pegando a decisão do jogador 2.
    printf("Jogador dois, realize sua escolha de acordo com as regras: (1, 2, 3). \n");
    scanf("%d", &jogada_dois);



    // Primeiro verificamos se as jogadas estão de acordo com as regras.
    if((jogada_um < 1 || jogada_um > 3) || (jogada_dois < 1 || jogada_dois >3)){
        printf("Jogada invalida, leia as regras novamente");
    }

    // realizamos a verificação de empate.
    else if(jogada_um == jogada_dois){
        printf("Ocorreu um empate. \n");
    }

    // Depois fazemos a verificação principal, para definir quem foi o vencedor.
    else if((jogada_um == pedra && jogada_dois == tesoura) ||
      (jogada_um == tesoura && jogada_dois == papel) ||
      (jogada_um == papel && jogada_dois == pedra))  {

      printf("Jogador 1 venceu! \n");

      }

    else{
        printf("Jogador 2 venceu! \n");
    }



}