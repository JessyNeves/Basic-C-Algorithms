/* Quick Union Algorithm */
#include <stdio.h>
#define N 10

main(){
  int i, p, q, v[N], t;
  /*Initialize Vector*/
  for(i=0; i<N; i++)
    v[i] = i;
  /* Read from stdin p and q */
  while(scanf("%d %d", &p, &q)==2){
    if(p==0 & q==0)break;
    t = v[p];
    for(i=0; i<N; i++)
      if(v[i] == t) v[i] = v[q];
  }
  for(i=0; i<N; i++)
    printf("%d ", v[i]);
  printf("\n");
}
