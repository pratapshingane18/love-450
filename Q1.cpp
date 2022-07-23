//  **** REVERSE THE ARRAY ****

#include<iostream>

using namespace std;

void RevArr(int arr[] , int first , int last){

    
    while(first < last)
    {
        int temp = arr[first];
        arr[first] = arr[last];
        arr[last] = temp;
        first ++;
        last --;
        
        
    }
    

}

void Display(int arr[] , int n){
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" " <<endl;
        // cout<< endl;
    }
    
}

int main(){
    int n;
    
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"displaying elements before Reversing:::"<<endl;
    
    Display(arr , n);

    // After Reversing an array::
    RevArr(arr , 0 , n-1);

    cout<<"displaying elements After Reversing:::"<<endl;

    Display(arr , n);
    
    


    
    return 0;

}