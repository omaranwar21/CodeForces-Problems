#include <iostream>
using namespace std;

int arr[4];
int repeated=0;
int main() {
for (int i = 0; i < 4; i++)
{
    cin>> arr[i];
}    
for (int j = 0; j < 4; j++)
{
for (int i = j+1; i < 4; i++)
{
    if (arr[j]==arr[i]){
    repeated++;
    break;
    }

}
}
cout<< repeated;

}