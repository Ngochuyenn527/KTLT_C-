// khac set o cho no co the luu so trung nhau /
// vay len se 0 de dang de find
#include<bits/stdc++.h>

using namespace std;

//khai bao: set<kieu_du_lieu> ten;
//count
//erase == clear : xoa all
int main(){
	multiset <int> ms;
	ms.insert(100);
	ms.insert(200);
	ms.insert(300);
	ms.insert(100);
	ms.insert(200);
	cout<<ms.size()<<endl;
	for(int x : ms){
		cout<<x<<" ";
	}
	cout<<"\n";
//add
    int n;
    cout<<"Nhap n ="; cin>>n;
    for(int i=0; i<n; i++){
    	int x; cin>>x;
    	ms.insert(x);
	}
	for(int x : ms){
		cout<<x<<" ";
	}
	cout<<"\n";
//count
	cout<<ms.count(100)<<"\n"; 
	
//erase == clear : xoa all
    ms.erase(100);
    
//cach de xoa 1 trong cac so giong nhau - xoa bang iterator
    auto it = ms.find(200);
    ms.erase(it);
    for(int x : ms){
		cout<<x<<" ";
	}
	cout<<"\n";
    


	return 0;
}
