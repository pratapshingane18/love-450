/*   Largest sum contigous Subarray :::

(use of kadanes algo to solve the problem)*/

#include<iostream>
using namespace std;

int MaxContSubArrSum(int arr[] , int n)
{
    int max_so_far = arr[0];
    int curr_max = arr[0];

    for (int i = 1; i < n; i++)
    {
        curr_max = max(arr[i], curr_max + arr[i]);
        max_so_far = max(curr_max , max_so_far);
    }

    cout<<max_so_far<<endl;

    return max_so_far;
    
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    MaxContSubArrSum(arr, n);
    return 0;
}

