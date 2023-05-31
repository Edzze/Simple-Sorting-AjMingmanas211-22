#include <iomanip>

inline void display(int *a, int n){
  int i;
  for(i=0;i<n;i++){
    cout<<setw(5)<<a[i];
  }
  cout<<endl;

}

inline void swap(int &a,int &b){
 int temp;
  temp=a;
  a=b;
  b=temp;
  
}

// selection sort function module in C 
void selectionSort(int data[], int length) 
{ 
	int i, j, m, mi; 

  /* TRY TO REMOVE 'm' */
for (j=0; j<length-1; j++)
  {
    //***try removing 'm' ***
    //m=data[j]; //data
  mi=j; //index of data
  
	for (i = j+1; i < length; i++) 
	{ 
    //for (j=0;j<length-1;j++)
	   /* find the minimum */ 
    if(data[mi]>data[i]) // if current num > the next num
    {
      //data[j]=data[i]; // change current minimum
      mi=i; // change index of current minimum 
    }
  }
     swap(data[j],data[mi]);
  display(data,length);
	} 
  
  
} 

void insertion(int a[], int n) 
{
    for (int i = 1; i < n; i++) {
        int value = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > value) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = value;
        display(a, n);
        cout << "================" << endl;
    }
}

void bubbleSort(int *a,int n)
{
  int i,j;
  int sorted;

  for(j=0;j<n-1;j++)
  {
    sorted = 0;
    for(i=0;i<n-1;i++)
    {
      if (a[i]>a[i+1])
      {
        swap(a[i],a[i+1]);
        sorted = 1;
      }
    }
    display(a,n);
    if (sorted == 0)
      break;
  }
}