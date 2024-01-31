#include<stdio.h>

#define TAMPILHA 10
int pilha[TAMPILHA] = {0, 0, 0, 0, 0, 0, 0, 0, 0,0};
int topo = 0;
int i;
void lista_elementos() {
    printf("\t =========== Pilha Atual ==========\n");
    for (i = 0; i < TAMPILHA; i++) {
        printf("-");
        printf("|%d|", pilha[i]);
        printf("-");
    }
    printf("Topo: %d", topo);
    printf("\n\n");

    
}

// criando um função
void push() {
    int val;
    printf("Informe o valor: ");
    scanf("%d", &val);
    if(topo < TAMPILHA) { // < MENOR
        pilha[topo] = val;
        topo++;
        lista_elementos();

        
    } else {
        printf("Pilha esta cheia!\n");
    }

}
//Função de remover
void pop() {
    if(topo >= 0) {
        pilha[topo - 1] = 0;
        topo = topo - 1;
        lista_elementos(); 
    } else {
        printf("A pilha esta vazia!");
    }
}
/*Mas porque eu coloquei aqui [topo - 1].
 No programa de exemplo: ele explica que o topo esta sempre com um valor acima.
 O topo indica aonde vai entra o próximo elemento.
 Então se eu quiser remover o último elemento do topo [topo - 1]. 
  A gente passa o [topo - 1].
 */

// Criando uma função de limpar o topo too pilha.
void clear() {
    for(i = 0; i < TAMPILHA; i++) {
        pilha[i] = 0;
    }
    topo = 0;
}



int main() {
    int opcao = 0;
    do {
        printf("Selecione a opcao: \n\n");
        printf("[1] - Inserir (push): \n");
        printf("[2] - Inserir (pop):\n");
        printf("[3] - Listar: \n");
        printf("[4] - Limpar a pilha: \n");
        printf("[-1] - SAIR: \n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
              push();
              break;
              case 2:
              pop();
              break;
            case 3: 
              lista_elementos();
              break;
           case 4: 
              clear();
              break;
            case -1:
              break;
        
         default:
            printf("Opcao Invalida!");
            break;
        }
        
    } while (opcao != -1);
        printf("Programa Encerrado");
    
    return 0;

}
