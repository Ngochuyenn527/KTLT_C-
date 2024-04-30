#include<iostream>

using namespace std;

int xau(string s){
	int d=0, c=0;
	for(int i=0; i<s.size(); i++){
		if(s[i]==' ' && s[i+1]==' '){
			d++; // neu d==0 thi hop le.
		}
		if(s[i]==' ' && s[i+1] != ' '){
			c++; // 0 qua 10 tu => 0 qua 10 dau cach  vi co the co dau cach dau chuoi => neu c<=10 thi hop le
		}
	}
	if(d==0 && c<=10){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	string s;
	getline(cin,s);
	if(xau(s)==true){
		cout<<"hop le.";
	}
	else{
		cout<<"khong hop le";
	}
	return 0;
}
