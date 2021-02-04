#include<stdio.h>

void main(int argc, char **argv){
  printf("There are %d arguments\n",argc-1);
  int i;
  for(i=1;i<argc;i++)
    printf("argument#%d is %s\ni, argv[i]);
}
