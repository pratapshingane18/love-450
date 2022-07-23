#include<bits/stdc++.h>
using namespace std;
#include<vector>


void Union(int arr1[], int arr2[] , int m , int n)
{
    int i = 0;
    int j =0;
    vector<int> res;


    while (i < m  &&  j < n)
    {
        if(arr1[i] < arr2[j] ){
            res.push_back(arr1[i]);
            cout<<arr1[i++]<<" ";
        
        }

       else if( arr2[j] < arr1[i] ){
           res.push_back(arr2[j]);
            cout<<arr2[j++]<<" ";
           
        }

        else
        {
            res.push_back(arr1[i]);
            cout<<arr1[i++] <<" ";
          
            j++;
        }
    }

    while (i<m)
    {
        res.push_back(arr1[i]);
        cout<<arr1[i++]<<" ";
        
    }

    while (j<n)
    {
        res.push_back(arr2[j]);
        cout<<arr2[j++]<<" ";
        
    }
    cout<<endl;
    cout<<res.size()<<endl;
}


void Intersection(int arr1[], int arr2[] , int m , int n)
{
    int i = 0;
    int j =0;
    

    while (i < m  &&  j < n)
    {
        if(arr1[i] < arr2[j] ){
            i++;
        
        }

       else if( arr2[j] < arr1[i] ){
           j++;
           
        }

        else
        {
            cout<<arr1[i++] <<" ";
          
            j++;
        }
    }

    
    
    
}


int main(){
    // int m ;
    // cin>>m;

    // int n;
    // cin>>n;

    // int arr1[m];
    // for (int i = 0; i < m; i++)
    // {
    //     cin>>arr1[i];
    // }

    // int arr2[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr1[i];
    // }

    int arr1[] = { 1, 2, 4, 5, 6 };
    int arr2[] = { 2, 3, 5, 7 };
 
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    cout<<"Array after Union is :::" <<endl;
    Intersection(arr1,arr2,m,n);
    
       return 0;

}

