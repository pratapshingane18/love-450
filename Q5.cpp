// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cin>>n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
    
//     int left = arr[0];
//     int right = arr[n-1];

//     for (int i = 0; i < n; i++)
//     {
//         if(arr[left] < 0 &&  arr[right] < 0){
//             left ++;
//         }

//         if(arr[left] > 0 && arr[right] < 0) 
//         {
//             int temp = arr[left];
//             arr[left] = arr[right];
//             arr[right] = temp;

//             left++;
//             right--;
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
    
    
    
//     return 0;
// }

// A C++ program to put all negative
// numbers before positive numbers
#include <bits/stdc++.h>
using namespace std;
 
void rearrange(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
}
 
// A utility function to print an array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
 
// Driver code
int main()
{
    int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n);
    printArray(arr, n);
    return 0;
}

