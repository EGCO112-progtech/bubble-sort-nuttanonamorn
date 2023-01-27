// #define N 6
#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

int main(int argc, char* argv[]) {
  int new_number,n,*a;
  n=argc - 1;
  a=(int*)malloc(sizeof(int) * n);
  int *prime=(int*)malloc(sizeof(int)*n);
  int i,j = 0;
    for(i=0;i<n;i++){
      a[i]=atoi(argv[i+1]);
      if(Isprime(a[i] == 1)){
        prime[j]=a[i];
        j++;
        }
      }
  n=j;
  if(n==0) printf("No prime\n");
  else{
    display(prime,n);
    bubbleSort(prime,n); 
    //insertion(a,N);
    // selectionSort(a,N);
    display(prime,n);
    }
 return 0;
}


