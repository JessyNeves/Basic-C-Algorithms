#include <stdio.h>
#include <stdlib.h>

/*FIRST IN, FIRST OUT - STACK */

int main(){

int a, stack[10], i;
int tmp[10];
for(i=0; i<10; i++) stack[i]=-1;

while(5){
scanf("%d", &a);

for(i=0; i<10; i++){
  tmp[i] = stack[i];
}
stack[0] = a;

for(i=1; i<10; i++)
  stack[i] = tmp[i-1];

for(i=0; i<10; i++){
  printf("%d ", stack[i]);
}
  printf("\n");
}
}
