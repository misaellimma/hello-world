//Bibliotecas que serao usadas.
#include<stdio.h>
#include<stdlib.h>

// Definindo a estrutura.
struct Banco {
    int num_conta;
    char nome_cliente[30];
    float saldo;
    struct Banco *ant;
    struct Banco *prox;
};
typedef struct Banco node;

//Todas as funcoes.
int menu();
void executa_opcao(int opcao,  node* BANCO);
void inicia_lista(node* BANCO);
/*void exibir_lista(node* BANCO);
void add_node_inicio(node* BANCO);
void add_node_fim(node* BANCO);
void remove_node(node* BANCO);
void libera_lista(node* BANCO);
*/
//Funcao principal.
int main (){
    int op;
    node *BANCO = (node *) malloc(sizeof(node));
    //Essa condicao ira verificar se tem memoria disponivel.
    if(!BANCO){
        printf("\n Memoria cheia.");
        exit(1);
    }else{
        //Chama a funcao.
        inicia_lista(BANCO);
        //So saira do laco quando a opcao for zero.  
        do{
            //op recebe o retorno da funcao menu.
            op = menu();
            //Chama a funcao 
            executa_opcao(op, BANCO);
        }while(op != 0);
    }
    return 0;
}
//Funcao com as opcoes
int menu(){
    //Variavel que armazenara a opcao que o usuario digitou.
    int opcao;
    //Imprime na tela as opcoes.
    printf(" Escolha uma opcao:\n");
    printf(" 0 Para sair.\n");
    printf(" 1 Para exibir lista.\n");
    printf(" 2 Para adicionar um node no inicio.\n");
    printf(" 3 Para adicionar um node no final.\n");
    printf(" 4 Para remover um node da lista.\n");
    printf(" 5 Para liberar a lista toda.\n");
    printf(" >> ");
    //Le a opcao que o usuario digitou.
    scanf("%d", &opcao);
    //Retorna a opcao escolhida.
    return opcao;
}
//Funcao que executa a opcao escolhida.
void executa_opcao(int opcao, node* BANCO){
    switch(opcao){
    case 0:
        //Limpa a tela.
        system("CLS");
        //Imprime na tela que esta encerrando o programa.
        printf("\n Encerrando...");
        
        break;
    case 1:
        //Limpa a tela.
        system("CLS");
        //Imprime na tela a lista.
        printf(" Exibindo lista!\n\n");
        //exibir_lista(BANCO);
        

        break;
    case 2:
        //Limpa a tela.
        system("CLS");
        //Imprime na tela que esta adicionando o node no inicio.
        printf(" Adicionando um node no inicio!\n\n");
        //add_node_inicio(BANCO);
        break;
    case 3:
        //Limpa a tela.
        system("CLS");
        //Imprime na tela que esta adicionando o node no fim.
        printf(" Adicionando um node no fim!\n\n");
        //add_node_fim(BANCO);
        break;
    case 4:
        //Limpa a tela.
        system("CLS");
        //Imprime na tela que esta removendo o node da lista.
        printf(" Removendo um node da lista!\n\n");
        //remove_node(BANCO);
        break;
    case 5:
        //Limpa a tela.
        system("CLS");
        //Imprime na tela liberando a lista.
        printf(" Liberando lista!\n\n");
        //libera_lista(BANCO);
        break;
    default:
        //Limpa a tela.
        system("CLS");
        //Imprime na tela que o usuario digitou errado.
        printf(" Comando invalido!\n\n");
    }
}
//Funcao que inicia a lista.
void inicia_lista(node* BANCO){
    BANCO->ant = NULL;
    BANCO->prox = NULL;
}

