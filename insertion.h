//
//  bubble.h
//  First arg
//
//  Created by Mingmanas Sivaraksa on 2/1/2564 BE.
//

#ifndef insertion_h
#define insertion_h


void insertion(int a[], int N){
    int i;
    int j;
    int value;

for(i=1;i<N;i++){
   value= a[i];
   printf("value=%d\n",value);
   for(j=i-1;j>=0 && a[j]<=value;j--) {
     a[j+1]=a[j];
     
     display(a,N);
   }   
  a[j+1]=value;
  
  printf("\n");
  display(a,N);
  printf("End of round %d\n",i);
}

}

#endif /* bubble_h */
