#include<bits\stdc++.h>
using namespace std;



    int findDuplicate(int arr[], int n){
        int res;

        for (int i = 0; i <= n; i++)
        {
           if (arr[i] == arr[i+1])
           {
               res = arr[i];
           }
           
        }
        cout<<res<<endl;
        return res;
    }




int main(){
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i <= n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr + (n+1));
    findDuplicate(arr,n);

    return 0;
    
}

