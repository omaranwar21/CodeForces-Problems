#include <iostream>
#include <string>

using namespace std;

string s1;
int n;
int count=0;

int main() {
    cin>> n;
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
         
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i+1] != arr[i])
        {
            count++;
        }
        
    }
    
    cout<< count;
    
}