#include<iostream>
#include<fstream>

using namespace std;

int main(){
	ofstream f;
	f.open("firstfile.txt", ios::out);
	f<<"Problem name: exp1 \n";
	f<<"maximize \n";
	f<<"obj: x1 +2 x2 + 3 x3 + x4\n";
	f<<"Subject to \n";
	f<<"c1: x2-3.5 x4 = 0\n";
	f<<"Bounds\n";
	f<<"0 <= x1 <= 40\n";
	f<<"General\n";
	f<<"x4\n";
	f<<"End\n";
	f.close();
	
	ifstream a;
	a.open("firstfile.txt", ios::in);
	char s[200];
	while(!a.eof()){
		a.getline(s,200);
		cout<<s<<endl;
	}
	f.close();
}
