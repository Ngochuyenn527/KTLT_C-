#include<iostream>
#include<string>

using namespace std;

int main(){
	string s = "Bui Thi Ngoc Huyenn";
	stringstream ss(s);
	string tmp;
	int cnt = 0 ;
	while(ss>>tmp){
		cnt++;
	}
	for(string x : s){
		cout<<x<<endl;
	}
}
