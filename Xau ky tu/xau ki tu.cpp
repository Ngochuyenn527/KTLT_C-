//XAU KY TU
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n; //van con phim enter
	
	fflush(stdin);  //lam sach bo nho dem truoc khi nhap getline
	string s;        // khi xau co dau cach, ta dung getline(cin,s)
	getline(cin, s); // getline khi gap enter la 0 chay len ta can dung fflush(stdin) de xoa enter - lam sach
	cout<<s<<endl;
	
	
	cout<<s[1]<<endl;
	
	
	cout<<"Chieu dai xau la: "<<s.size()<<endl;  // or s.length()- dung de dem chieu dai sau
	
	
	int count=0; char c='t';
	for(int i=0; i<s.size(); i++){
		cout<<s[i]<<endl;   // liet ke cac ki tu trong xau
		if(s[i]==c) count++; // dem ki tu xuat hien bao nhieu lan trong xau	    
}   
    cout<<count<<endl;
	
	int index=-1; char w='y';
	for(int i=0; i<s.size(); i++){
		if(s[i]==w) {
			index=i; break; //break-dung khi gap ngay vi tri xh dau tien. Neu 0 co break se in ra index = vi tri cuoi cung
		}
}
	cout<<index<<endl;
	
	
	string a="ngoc";
	string b="huyenn";
	string f=a+b; // ghep xau
	cout<<f<<endl;
	for(int i=0; i<f.size(); i++){
		if(f[i] >= 'a' &&  f[i] <= 'z') f[i]-=32; // trong bang ma ASCII gia tri cua ki tu in thuong = in hoa +32
		/* in hoa = in thuong - 32 
		f[i]= f[i] - 32 */
	}
	cout<<f<<endl;
	
	
	string d="Fool myself";
	string j=d.substr(5, 3); // tach xau  substr(vi tri, so luong muon tach) = mys
	cout<<j;
	
	string u;
    getline(cin, u);
    int count2=0;
    for(int i=0; i<u.size(); i++){
    	if(u[i]==' ') count2++;  // dem so tu trong 1 chuoi
	}
	cout<<"So ky tu la: "<<count2+1;
	return 0;
}
