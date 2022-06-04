#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Definindo a estrutura
struct no *ptr_no;
ptr_no pilha;
int op;

//prototipação
void menu_mostrar();
void menu_selecionar(int op);
void pilha_inserir(ptr_no pilha);
void pilha_remover(ptr_no pilha);
void pilha_mostrar(ptr_no pilha);


int main()
{
    printf("Hello world!\n");
    return 0;
}
