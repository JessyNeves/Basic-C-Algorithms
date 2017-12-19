/* Quick Union Algorithm */
#include <stdio.h>
#include <stdlib.h>
#define N 10

main(){
  int p, q, v[N], i, j;
  for(i=0; i<N; i++)v[i] = i;
  while(scanf("%d %d", &p, &q)==2){
    if(p == -1 && q == -1) break;
    i = p;
    j = q;
    while( i != v[i]){
      i = v[i];
      printf("i=%d\n", i);
    }
    while( j != v[j]){
      j = v[j];
      printf("j=%d\n", j);

    }
    if( j == i) continue;
    v[i] = j;
    for(i=0; i<N; i++)
      printf("%d ", v[i]);
    printf("\n");
  }

}
