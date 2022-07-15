#include <iostream>
#include<string>
using namespace std;
int main() {
string music;
cin>>music;
while(music.find("WUB")!=-1){
	int found=music.find("WUB");
	if(found==0){
		music.erase(0,3);
	}
	else{
	music.replace(found,1," ");
	music.erase(found+1,2);
	}
}
cout<<music;
}