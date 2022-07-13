#include <iostream>
#include <string>

using namespace std;

string word;
int main() {
    cin>> word;
    word[0]=toupper(word[0]);
    cout<< word;
}