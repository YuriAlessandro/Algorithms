// Essa função retorna o k_esimo menor elemento de um vetor

int k_menor_elemento(int L, int n, int k){

  int aux, res;

  for(int i = 0; i < k; i++){
    for(int j = i + 1; j < n; j++){
      if (L[i] > L[j] && L[j] != L[j-1]){
        aux = L[i];
        L[i] = L[j];
        L[j] = aux;
      }
    }
  }
  res = L[k-1];
  return res;
}
