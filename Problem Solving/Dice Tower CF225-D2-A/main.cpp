#include <iostream>

using namespace std;

int main () {
    int n;
    int top;
    bool found=0;
    cin>>n >> top;
    int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>> arr[i][j];
            if (arr[i][j] == top || arr[i][j] == 7-top)
            {
                found=1;
            }
            
        }
        
    }
    
    if (found==0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
    
}