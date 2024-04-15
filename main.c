#include <stdio.h>
#include "tarefas.h"


int main (){

    Tarefa tarefas[TOTAL];
    int pos;
    Erros erro = fs[4](tarefas, &pos);
    if (erro != OK)
        pos = 0;

    funcao fs[] = {criar, deletar, listar, salvar, carregar};

    int opcao;
    do{
        printf("\nMenu principal\n");
        printf("1 - Criar tarefa\n");
        printf("2 - Deletar tarefa\n");
        printf("3 - Listar tarefas\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        
        scanf("%d", &opcao);
        opcao--;
        if(opcao > 2)
            printf("Opcao invalida\n");
        else if(opcao >= 0)
            fs[opcao](tarefas, &pos);
        else
            printf("Sair....\n");
    }while(opcao >= 0);

}