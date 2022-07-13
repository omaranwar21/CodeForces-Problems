#include <iostream>
#include <string>
using namespace std;

int n;
int count=0;
string s;
int main()
{
    cin>> n;
    cin>> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i]==s[i+1])
        {
            count++;
        }
        
    }

    cout<<count;
    
}
