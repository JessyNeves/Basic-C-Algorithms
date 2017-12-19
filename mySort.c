/* Quick Find Algorithm */
#include <stdio.h>
#include <stdlib.h>
#define N 20

main(){
  int i, v[N];
  for(i=N-1; i>=0; i--)v[i] = 9 - i;
  while(f(v)!=0);
}

/* Sorting Function */
int f(int *v){
  int i=0;
  int j=0;
  for(i=0; i<N-1; i++){
    if(v[i] > v[i+1]){
    j = v[i+1];
    v[i+1] = v[i];
    v[i] = j;
    }else{
      continue;
    }
  }
  for(i=0; i<N-1; i++){
    if(v[i] != i) return -1;
    return 0;
  }
}
