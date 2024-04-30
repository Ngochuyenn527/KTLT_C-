//thuan loi trong viec loai bo ptu trung, sx tang dan, 
//khai bao thu vien set
#include<iostream>
#include<set>

using namespace std;

//khai bao: set<kieu_du_lieu> ten;
//size
//chen: s.insert(x);
//count : xuat hien cua 1 so
//xoa: s.erase(y);
int main(){
	
	set<int> s;
	s.insert(100);
	s.insert(200);
	s.insert(300);
	s.insert(100);
	s.insert(200);
	cout<<s.size()<<endl; // 3 ptu vi chua cac ptu trung gtri nhau
	// cac ptu trong set luon duoc sx tang dan mac du cin ngau nhien
	
	
	set<int> s1;
	for(int i=0; i<10; i++){
		s1.insert(i);  
	}
	cout<<s1.size()<<endl;
	
//find
	if(s1.find(5) != s1.end()){
		cout<<"Found 5 \n";
	}
	else{
		cout<<"not found 5 \n";
	}
	
//count 
    if(s1.count(7) != 0){
		cout<<"Found 7 \n";
	}
	else{
		cout<<"not found 7\n";
	}
	
	
	//cach1: duyet bang for each
	for(int x : s1){ // mmoi vong lap lay 1 ptu trong s1 gan cho x
		cout<<x<<" ";
	}
	cout<<"\n";
	
	//cach2: auto = int, string, float....(dang tong quat)
	for(auto x : s1){
		cout<<x<<" ";
	}
	cout<<"\n";
	
	//cach3: iterator = poiter
	set<int>::iterator it;
	for( it=s1.begin(); it !=s1.end(); it++){ // lap den khi nao it==s1.end() thi stop
	                                                            //-> o lien sau o cuoi cung la end 
		cout<<*it<<" ";
	}
	cout<<"\n";
	
	cout<<*s1.begin()<<"\n"; // truy cap den ptu dau tien
	cout<<*s1.rbegin()<<"\n"; // truy cap den ptu cuoi cung
	
//erase
	s1.erase(7);
	
// dem soluong cac ptu khac nhau trong mang
    int n;
    cout<<"Nhap n= "; cin>>n;
    set<int> s2;
    for(int i=0; i<n; i++){
    	int x; cin>>x;
    	s2.insert(x);
	}
	cout<<s2.size()<<"\n"; // == soluong cac ptu khac nhau trong mang luon
	// vidu 1 1 1 1 1 3 4 3 3 4 
	// s2= {1 3 4}
	
	
	int m;
	cout<<"Nhap m= "; cin>>m;
	set<string> s3;
	cin.ignore();
	for(int i=0; i<m; i++){
		string str;
		getline(cin, str);
		s3.insert(str);
	}
	cout<<s3.size()<<"\n";
	for(auto x : s3){
		cout<<x<<"\n";
	}
	
	return 0;
	
}
