#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main () {
    string v = "aoyeui";
    string word;
    cin >> word;
    transform (word.begin(), word.end(), word.begin(), ::tolower);
    // cout << word;
    for (int i = 0; i < word.size(); i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (word[i] == v[j])
            {
                word[i]=0;
            }
            
        }
        
    }
    for (int z = 0; z < word.size(); z++)
    {   
        if (word[z]==0)
        {
            continue;
        }
        
        cout << '.'<< word[z];
    }
    
}