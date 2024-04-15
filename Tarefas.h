#define TOTAL 100;

typedef struct {
    int prioridade;
    char descricao[300];
    char categoria[100];


} Tarefa;

typedef enum {OK, MAX_TAREFA, SEM_TAREFAS, NAO_ENCONTRADO, ABRIR, FECHAR, ESCREVER, LER} ERROS;


typedef ERROS (*funcao)(Tarefa[], int*);

ERROS criar(Tarefa tarefas[], int *pos);
ERROS Deletar(Tarefa tarefas[], int *pos);
ERROS Listar(Tarefa tarefas[], int *pos);
ERROS Salvar(Tarefa tarefas[], int *pos);
ERROS Carregar(Tarefa tarefas[], int *pos);

