#include<iostream>
#include <string>
using namespace std;

int main(){
    int n=0;
    cin>> n;
    int a=0, d=0;
    string s;
    cin>> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i]== 'A')
            a++;
        else
            d++;    
    }
    if (a>d)
        cout<< "Anton";
    else if (a<d)
        cout<< "Danik";
    else
        cout<< "Friendship";
     
}