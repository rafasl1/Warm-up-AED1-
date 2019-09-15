// Warm-up-AED1-
//Algoritmos e Estruturas de Dados
#include <stdio.h>
#include <stdlib.h>

#define MAX 50

typedef struct {
    int chave;
}REGISTRO

typedef struct{
    REGISTRO A[MAX];
    int nElementos;
}LISTA

// RETORNAR O PRIMEIRO ELEMENTO DA LISTA
void primElemento(LISTA* l){
    printf("%d",&l->A[0]->chave);
}

// RETORNAR O ULTIMO ELEMENTO DA LISTA
void ultElemento(LISTA* l){
    printf("%d",&l->A[l->nElementos-1]->chave);
}

//RETORNANDO O N-ESIMO ELEMENTO DA LISTA
int elementoN(LISTA *l, int n){
    return l->A[n-1]->chave;
}

// INICIALIZANDO A LISTA
void inicializandoLista(LISTA *l){
    l->nElementos = 0;
}

// INSERINDO UM ELEMENTO NA POSIÇÃO N
bool insereElemento(LISTA* l, int n, int x){
    if (n<=0 || n>l->nELementos){
        return false;
    }else{
        *l->nElementos = *l->nElementos + 1;
        for (int i = l->nElementos-1; i>n; i++){
            l->A[i]->chave = l->A[i-1]->chave;
        }
        l->A[n-1]->chave = x;
        return true;
    }
}

// RETORNA O INDEX DE UM ELEMENTO DA LISTA
int buscaSequencial(int key, LISTA l){
    for (int i = 0; i < l.nElementos; i++){
        if (l.A[i].chave == key){
            return i;
        }
        if (i == l.nElementos){
            return -1;
        }
    }
}

// BUSCA SEQUENCIAL EM LISTA COM SENTINELA
int buscaSeqSent(int key, LISTA l){
    l.A[l.nElementos].chave = key; // SENTINELA
    for (int i = 0; l.A[i].chave != key; i++){

    }
    if (i<l.nElementos) return i;
    else return -1;
}

// BUSCA BINARIA EM LISTA ORDENADA
int binarySearch(int key, LISTA l){
    int inf = 0, sup = l.nElementos - 1, meio;
    while (inf <= sup){
        meio = (sup + inf ) / 2;
        if (l.A[meio].chave == key) return meio;
        else
            if (key > l.A[meio].chave) inf = meio + 1;
            else sup = meio -1;
    }
    return -1;
}

// REMOVENDO UM ELEMENTO DA LISTA
bool removeElemento(LISTA* l, int key){
    int index = buscaSequencial(key,l);
    if index = -1 return false;
    for (int i = index; i < l->nElementos -2 ; i++){
        l->A[i]->chave = l->A[i+1]->chave;
    }
    l->nElementos--;
    return true;
}


int main()
{
    printf("Hello world!\n");
    return 0;
}
