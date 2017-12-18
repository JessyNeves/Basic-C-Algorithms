/* Quick Find Algorithm */
#include <stdio.h>
#include <stdlib.h>
#define N 10

main(){
  int i, p, q, v[N], t;
  /*Initialize Vector*/
  for(i=0; i<N; i++)
    v[i] = i;
  /* Read from stdin p and q */
  /* When you insert -1 -1, program jumps to Quick Find */
  while(scanf("%d %d", &p, &q)==2){
    if(p==-1 && q==-1)break;
    if(p==0 & q==0){
      for(i=0; i<N; i++)
        printf("%d ", v[i]);
    printf("\n");
    }
    t = v[p];
    for(i=0; i<N; i++)
      if(v[i] == t) v[i] = v[q];
  }
  while(scanf("%d %d", &p, &q)==2){
  /* When you insert -1 -1, program exits */
    if(p==-1 && q==-1)exit(0);
    if(v[p]==v[q]){
      printf("Pair Connected!\n");
    }else{
      printf("Pair Not Connected\n");
    }
  }
}
