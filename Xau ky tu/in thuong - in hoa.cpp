#include<iostream>
using namespace std;
int main(){
    
	string a="ngoc ";
	string b="huyenn";
	string f=a+b; // ghep xau
	cout<<f<<endl;
	for(int i=0; i<f.size(); i++){
		if(f[i] >= 'a' &&  f[i] <= 'z') f[i]-=32; // trong bang ma ASCII gia tri cua ki tu in thuong = in hoa +32
		/* in hoa = in thuong - 32 
		f[i]= f[i] - 32 */
	}
	cout<<f<<endl;
	
	
	string s;
	getline(cin,s); // khi xau co dau cach, ta dung getline(cin,s)
	for(int i=0; i<s.size(); i++){
		if (s[i] >='A' && s[i] <= 'Z') s[i]+=32;
	}
	cout<<s<<endl;
	
	string t;
	getline(cin, t);
	int count=0;
	for(int i=0; i<t.size(); i++){
		if(t[i]>='A' && t[i]<='Z') count++;
	}
	cout<<count;
	return 0;
}
