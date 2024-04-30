#include<iostream>

using namespace std;

int main(){
	//chen ky tu
	string s;
	int k; 
	char ch='c';
	do{
		getline(cin,s);
	}
	while(s.size()>80);
	cout<<"Nhap vi tri k: "<<endl; cin>>k;
	s+=' ';
	for( int i=s.size()-1; i>=k; i--){
		s[i+1]= s[i];
	}
	s[k] = ch;
	cout<<s<<endl;
	
	//xoa ky tu
	fflush(stdin);
	string n;
	getline(cin,n);
	char kitu='t';
	for(int i=0; i<n.size(); i++){
		while(n[i]==kitu){
			for(int j=i; j<n.size(); j++){
				n[j]=n[j+1];
			}
		}
	}
	cout<<n;
	return 0;
}




	

