// ***  FIND THE MAXIMUM AND MINIMUM ELEMENT OF AN ARRAY ::: ***

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int currmax = arr[0];       // Initializing with first element in an array :::
    int currmin = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > currmax)
        {
            currmax = arr[i];   // updating maximum value 
        }

        if (arr[i] < currmin)
        {
            currmin = arr[i]; // updating min value in an array::
            
        }

        
        
        
    }
    

        cout<<"The Maximum value in an array is :::" << currmax<<endl;
        cout<<"The Minimum value in an array is :::" << currmin<<endl;
    

    return 0;


}
