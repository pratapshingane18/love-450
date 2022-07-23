//**** Cyclically rotate an array by one 

// {1 2 3 4 5}   output should be  {5 1 2 3 4}

#include<iostream>
using namespace std;


void CyclicRotate(int arr[], int n)
{
    int x = arr[n-1];    // storing last element
    for (int  i = n-1; i > 0; i--)
    {
      arr[i] = arr[i-1];        // shifting all elements 1 position ahead 
    }

    arr[0] = x;                 // Replacing 1st element with x  
    
}
int main(){
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    CyclicRotate(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    

    return 0;
}
