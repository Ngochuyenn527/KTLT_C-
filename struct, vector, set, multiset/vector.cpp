//Muon sd vector can phai khai bao thu vien vector
#include <bits/stdc++.h>
#include <vector>

using namespace std;

//vector<kieu du lieu> ten_vector
//v.push_back() : day ptu vao vector
//v.size() : kich thuoc vector
//duyet for each
//auto
//iterator
//v(n)
//clear: xoa all ptu
//empty: ktra
//insert: chen 1 ptu vao vtri bat ky
//truy cap cac ptu trong vector thong qua chi so
int main(){
	vector<int> v;   //{}
	v.push_back(10); //{10}
	v.push_back(20); //{10, 20}
	v.size(); //2
	
//vector la mang dong => cap den dau mang tang den do
    v.push_back(30);
	v.size(); //3

// cap phat them n ptu
	int n; cout<<"Nhap n= "; cin>>n;
	for(int i=0; i<n; i++){
		int x; cin>>x;
		v.push_back(x);
	}
	
	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<" ";
	} 
	cout<<"\n";


	cout<<"Ptu dau tien trong vector la: "<<v[0]<<endl;  
	cout<<"Ptu cuoi cung trong vector la: "<<v[v.size() - 1]<<endl;
	
    cout<<"Ptu dau tien trong vector la: "<<*v.begin()<<endl;  
	cout<<"Ptu cuoi cung trong vector la: "<<*v.rbegin()<<endl;
	
    //cach1: duyet bang for each 
	for(int x : v){
		cout<<x<<" ";
	}
	cout<<"\n";
	
	//cach2: auto == int, string, float, vector<int>::iterator ....(dang tong quat)
	for(auto x : v){ // mmoi vong lap lay 1 ptu trong v gan cho x
		cout<<x<<" ";
	}
	cout<<"\n";
	
	/*cach3: iterator = poiter
	vidu vecto co 3 o -> o dau tien la begin()
                    -> o lien sau o cuoi cung la end() - o thu 4 */
	vector<int>::iterator it;
	for( it=v.begin(); it !=v.end(); it++){ // lap den khi nao it==s1.end() thi stop
	                                                            //-> o lien sau o cuoi cung la end 
		cout<<*it<<" "; // in ra gtri
	}
	cout<<"\n";

//tao vector cho san so ptu <=> mang 1 chieu
   int t; cout<<"Nhap t = "; cin>>t;
   vector<int> v1(t);
    for(int i=0; i<t; i++){
   	    cin>>v1[i];
    }
    for(int x : v1){
   	    cout<<x<<" ";
    }
    cout<<"\n";
//chen insert thong qua iterator v.begin()
    v1.insert(v1.begin() + 2, 100); // chen 100 vao vtri v[2]
    for(int x : v1){
    	cout<<x<<" ";
	}
	cout<<"\n";
	
//erase - xoa 1 ptu
    v1.erase(v1.begin() + 3);
    for(int x : v1){
    	cout<<x<<" ";
	}
	cout<<"\n";
	
//v.pop_back()
    v1.pop_back();
    for(int x : v1){
    	cout<<x<<" ";
	}
	cout<<"\n";
	
//clear - xoa all
    v1.clear(); // xoa all
    if(v1.empty()) cout<<"EMPTY\n";
    else cout<<"NOT EMPTY\n";
   
         
//vector<int> v(n, value) khoi taoj n ptu co cung 1 value
    int m; cout<<"Nhap m= "; cin>>m;
    vector<int> v2(m,100);
    for(int i=0; i<m; i++){
    	cout<<v2[i]<<" ";
	}
	cout<<"\n";
	
	
//vector<string> v;
    vector<string> v3;
    v3.push_back("Ngoc");
    v3.push_back("Huyenn");
    for(int i=0; i<v3.size(); i++){
    	cout<<v3[i]<<" ";
	}
	cout<<"\n";
    
// tach tu trong cum
    string s;
    stringstream ss(s);
    string tmp;
    while(ss>>tmp){
    	v3.push_back(tmp);
	}
	for(string x : v3){
		cout<<x<<endl;
	}
	return 0;
}
