#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void perguntarLuzApagada() {
    bool light;

    while (true) {
        printf("A luz está apagada?\n");
        char answer[10];
        scanf("%s", &answer);

        if (strcmp(answer, "sim") == 0 || strcmp(answer, "Sim") == 0) {
            light = true;
            break;
        } else if (strcmp(answer, "não") == 0 || strcmp(answer, "Não") == 0)
        {
            printf("A luz ainda está acesa. Confirme que está apagada.\n");
        } else {
            printf("Informação inválida, responda 'Sim' ou 'Não'\n");
        }
    }
}

int main() {

    perguntarLuzApagada();
    printf("A luz está apagada.\n");

    char luz_acesa[5];
    printf("Você ascendeu a luz ?\n");
    scanf("%s", &luz_acesa);

    bool resposta;
  while(true){
    if(strcmp(luz_acesa, "sim") == 0 || strcmp(luz_acesa, "Sim") == 0){
      resposta = true;
      main();
    } else if(strcmp(luz_acesa, "não") == 0 || strcmp(luz_acesa, "Não")== 0){
      resposta = false;
        perguntarLuzApagada();
    }else {
      printf("Resposta invalida, Você acesndeu a luz?");
    }
  }

    return 0;
}