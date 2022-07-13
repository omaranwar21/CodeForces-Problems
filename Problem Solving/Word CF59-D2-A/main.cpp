#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string word;
    cin>> word;
    int upper=0;
    int lower=0;
    for (int i = 0; i < word.size(); i++)
    {
        if (int(word[i]) < 91)
        {
            upper++;
        }
        else
        {
            lower++;
        }
    }

    if (upper > lower)
    {
        transform(word.begin(), word.end(), word.begin(), ::toupper);
        cout<< word;
    }
    else
    {
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        cout<< word;
    }
    
    
    
}