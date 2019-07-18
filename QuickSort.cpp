#include <stdio.h>
#include <iostream>

using namespace std;

 
void Swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int Partition(int ar[], int low, int high){
    int pivot = ar[high];
    int i = low - 1;
    
    for (int j = low; j < high; j++){
        if(ar[j] >= pivot){
            i++;
            Swap(&ar[i], &ar[j]);
        }
    }

    Swap(&ar[i + 1], &ar[high] );
    return (i + 1);
}

/* The main function that implements QuickSort  
arr[] --> Array to be sorted,  
low --> Starting index,  
high --> Ending index */

void Quicksort(int ar[], int low, int high){
    
    if(low < high){
       int pi = Partition(ar, low, high);
        Quicksort(ar, low, pi - 1);
        Quicksort(ar, pi + 1, high);
    }
}


void ShowAr(int ar[], int n){
    for(int i = 0; i < n; i++)
        cout << ar[i] << ' ';
    cout << endl;
}




int main(){  
    int ar[] = {10, 2};
    int size = sizeof(ar) / sizeof(ar[0]);
    
    Quicksort(ar, 0, size - 1);
    ShowAr(ar, size);

    return 0;  
}  
  
 
