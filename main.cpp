#include <iostream>
using namespace std;
#include "sorting.h"

int main(int argc,char ** argv) {
  int *a,i;
  int N=argc-1;
  a= new int [N];
  for(i=1;i<argc;i++)
    a[i-1]=atoi(argv[i]);


  display(a,N);
  //bubbleSort(a,N); 
  selectionSort(a,N);
  //insertion(a,N);

  //display(a,N);
}


// new number =2 

// Don't know how to compile different functions into 
// different output files so they are all in bubble