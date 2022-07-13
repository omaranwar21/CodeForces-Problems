#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string name;

int main() {
    cin>> name;

    unordered_set <char> str;

    for (int i = 0; i < name.size() ; i++)
    {
        str.insert(name[i]);
    }

    if (str.size() % 2 == 0)
        cout<< "CHAT WITH HER!";
    else
        cout<< "IGNORE HIM!";
    
    
}
