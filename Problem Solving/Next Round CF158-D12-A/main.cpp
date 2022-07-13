#include <iostream>
using namespace std;

int main(){
    int n,k ;
    cin>> n>>k;
    int arr[n];
    int min;
    int count=0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        min = arr[k-1];
    }
    
    for (int j = 0; j < n; j++)
    {
        if (arr[j] <=0)
        {
            continue;
        }
        else if (arr[j] >= min)
        {
            count++;
        }
        
    }
    cout << count << " ";
    
}