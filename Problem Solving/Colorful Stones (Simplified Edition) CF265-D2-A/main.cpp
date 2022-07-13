#include <iostream>
#include <string>
using namespace std;

string s;
string t;
int count=1;
int j=0;

int main(){
    cin>> s;
    cin>> t;
    for (int i = 0; i < s.length(); i++)
    {
        while (j< t.length())
        {
            if (s[i]==t[j])
            {
            count++;
            j++;
            break;
            }
        j++;
        }
        
    }
    cout<< count;
}

