#include <iostream>
using namespace std;

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}


void print(int array[], int size) {
  int i;
  for (i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}


int partition(int array[], int low, int high) {
   

  int pivot = array[high];

  int i = (low - 1);

 
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
       
      i++;
     
      swap(&array[i], &array[j]);
    }
  }
 
  swap(&array[i + 1], &array[high]);
 
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {
     
    int p = partition(array, low, high);

    quickSort(array, low, p - 1);

    quickSort(array, p + 1, high);
  }
}


int main() {
 
      int a[10],n;
  cout<<"Enter size of array: ";
        cin>>n;
        for(int i=0;i<n;i++)
        {
           cin>>a[i];
        }
  cout << "Unsorted Array: \n";
  print(a, n);
  quickSort(a, 0, n - 1);
 
  cout << "Sorted array in ascending order: \n";
  print(a, n);
}