#include "me.c"

int main(){
  int vetor[QTD_ELEM];
  srand(time(NULL));
  GeraValoresAleatorios(vetor);
  printf("Vetor original:\n");
  ImprimeVetor(vetor);
  BuildHeap(vetor);
  printf("\nVetor depois do heap:\n");
  ImprimeVetor(vetor);
  DeterminaDoisMaioresElementos(vetor);

  return 0;
}