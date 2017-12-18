/* Quick Union Algorithm */
#include <stdio.h>
#include <stdlib.h>
#define N 10

main(){
  int p, q, v[N], i, j;
  for(i=0; i<N; i++)v[i] = i;
  while(scanf("%d %d"), &p, &q){
    i = p;
    j = q;
    while( i != v[i])  i = v[i];
    while( j != v[j])  j = v[j];
    if( j == i) continue;
    id[i] = j;
  }
}
