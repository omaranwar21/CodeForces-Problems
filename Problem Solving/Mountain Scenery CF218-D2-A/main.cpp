#include <iostream>
using namespace std;

int main (){
    int n,k;
    cin >> n >> k;
    int arr[2*n+1];
    int count=0;
    for (int i = 0; i < 2*n+1 ; i++)
    {
        cin >> arr[i];
    }
    int j=1;
    while (count != k)
    {
        if (arr[j]-1 > arr[j-1] && arr[j]-1 > arr[j+1] )
        {
        arr[j]--;
        j+=2;
        count++;
        }
        else
        {
            j+=2;
        }
        
        
    }
    
    for (int z = 0; z < 2*n+1; z++)
    {
        cout<< arr[z]<<" ";
    }
    
    
}