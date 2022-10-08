#include <iostream>
using namespace std;
#include <algorithm>

int main()
{
    int n;
    cin>> n;
    int *ginger;
    int ginger[(n/2)+1];
    int *clone;
    int clone[(n/2)];
    int arr[n];
    bool flag = 1;
    for (int i = 0; i < n^2; i++)
    {
        cin>>arr[i];
    }
    *ginger = arr[0];
    *clone = arr[n-1];
    ginger[0] = arr[0];
    clone[0] = arr[n-1];
    int i=1;
    while(flag)
    {
        
        
    }
    
      
}

// bool is_n
