//***** Merge Sort *****

#include<iostream>
using namespace std;

void merge(int arr[] , int l , int mid , int r){
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int a[n1];
    int b[n2];

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l+i];
    }

    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid +1 +i];
    }

    int i =0;
    int j = 0;
    int k = l;

    while(i < n1 && j < n2){
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }

        else{
            arr[k] = b[j];
            k++;
            j++;
        }
        
    }

    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }

    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }

    

    
}

void mergeSort(int arr[], int l , int r){

    while(l < r){
        int mid= (l +r) /2;

        mergeSort(arr , l , mid );
        mergeSort(arr , mid +1 , r);

        merge(arr,l,mid,r);
    }
}


int main(){

    int arr[] = {5,4,3,2,1};
    mergeSort(arr, 0 ,4);
    for (int  i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
        cout<<endl;
    }

    cout<<"hi"<<endl;

    return 0;
    
}

// // A C++ program to put all negative
// // numbers before positive numbers
// #include <bits/stdc++.h>
// using namespace std;
 
// void rearrange(int arr[], int n)
// {
//     int j = 0;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] < 0) {
//             if (i != j)
//                 swap(arr[i], arr[j]);
//             j++;
//         }
//     }
// }
 
// // A utility function to print an array
// void printArray(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//         printf("%d ", arr[i]);
// }
 
// // Driver code
// int main()
// {
//     int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
//     int n = sizeof(arr) / sizeof(arr[0]);
//     rearrange(arr, n);
//     printArray(arr, n);
//     return 0;
// }