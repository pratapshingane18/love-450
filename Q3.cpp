

#include<iostream>
using namespace std;

int main()
{
 
    int n ;
    cin>>n ;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    
    for (int i = 0; i < n-1; i++)
{
    for (int j = i+1; j < n; j++)
    {
        if(array[j] < array[i])
        {
            int temp = array[j];
            array[j] = array[i];
            array[i] = temp;
        }
    }
    

}

    // int k;
    // cout<<"Input Kth element of an array::"<<endl;
    // cin>>k;

//    cout<<"The Kth Maximum element in an array is ::"<<array[n-k]<<endl;
//    cout<<"The Kth Minimum element in an array is ::"<<array[k-1]<<endl;
    int num1= array[n-1];
    int num2 = array[n-2];

    int res = num1 + num2;
    cout<<res;
  return 0;
}
