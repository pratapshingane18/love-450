// // ***  FIND THE MAXIMUM AND MINIMUM ELEMENT OF AN ARRAY using sorting ::: ***

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

   cout<<"The Maximum element in an array is ::"<<array[n-1]<<endl;
   cout<<"The Minimum element in an array is ::"<<array[0]<<endl;
  
  return 0;
}
