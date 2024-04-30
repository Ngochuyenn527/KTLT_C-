#include <iostream>
using namespace std;

int ucln(int a, int b){
	if(a%b==0) return b;
	return ucln(b,a%b);
}

//BCNN = (tich 2 so) / UCLN
int bcnn(int a, int b){
	return (a*b)/ ucln(a,b);
}

int main(){
	int s1, s2;
	cout<<"Nhap so thu nhat : "; cin>>s1;
	cout<<"Nhap so thu hai : "; cin>>s2;
	cout<<"Boi chung nho nhat cua "<<s1<<" va "<<s2<<" la : "<<bcnn(s1,s2)<<endl;
	return 0;

}
