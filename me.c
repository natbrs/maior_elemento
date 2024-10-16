#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "interface.h"

// gera valores aleatorios de 0 a 99
void GeraValoresAleatorios(int *vetor){
  for(int i=0;i<QTD_ELEM;i++){
    vetor[i]=rand()%100;
  }
}

// imprime o vetor
void ImprimeVetor(int vetor[]){
  for(int i=0;i<QTD_ELEM;i++){
    printf("%d ", vetor[i]);
  }printf("\n");
}

// faz o processo heapify no indice i
void Sift(int i, int *vetor){
  int esq=2*i+1;
  int dir=2*i+2;
  int maior=i;
  if(esq<QTD_ELEM && vetor[esq]>vetor[maior])
    maior=esq;
  if(dir<QTD_ELEM && vetor[dir]>vetor[maior])
    maior=dir;
  if(maior!=i){
    int temp=vetor[i];
    vetor[i]=vetor[maior];
    vetor[maior]=temp;
    Sift(maior, vetor);
  }
}

// cria um heap a partir de um vetor desordenado
void BuildHeap(int *vetor){
  for(int i=QTD_ELEM/2-1;i>=0;i--){
    Sift(i, vetor);
  }
}

// determina e imprime os dois maiores valores no heap
void DeterminaDoisMaioresElementos(int *vetor){
  int m1=vetor[0];
  int m2=(vetor[1]>vetor[2])?vetor[1]:vetor[2];
  printf("\nOs maiores elementos são: %d e %d\n", m1, m2);
}