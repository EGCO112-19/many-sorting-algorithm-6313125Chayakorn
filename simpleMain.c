#include<stdio.h>
#include<stdlib.h>
#include "bubble.h"
#include "selection.h"
#include "insertion.h"
int main(int argc, char *argv[]){

  int i,N;
  printf("There are %d arguments\n",argc);
  for(i=0;i<argc;i++){
         printf("argv %d: %s\n",i,argv[i]); 
  }

  N=argc-1;

  int *a;
  a=(int*) malloc(sizeof(int)*N);

  for(i=1;i<argc;i++){
        a[i-1]=atoi(argv[i]);
  }

  //bubble(a,N);
 // selection(a,N);
 insertion(a,N);
  return 0;
}
