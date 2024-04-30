//Tao 2 tep tin file1.txt and file2.txt
//Ghep 2 tep tin dethu duoc tep file3.txt
//Doc va hien thi noi dun file3
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
	ofstream f1;
	f1.open("file1.txt", ios::out);
	f1<<"7 2\n"<<"1 2 3 1 \n"<<"2 2 4 1 \n"<<"3 3 5 1 \n"; // write f1 to file1.txt
	f1.close();
	
	ofstream f2;
	f2.open("file2.txt", ios::out);
	f2<<"4 1 1 2\n"<<"5 2 2 2\n"<<"6 3 3 2\n"<<"7 4 4 2\n";
	f2.close();
	
	cout<<"\nfile1\n"; // in ra dong chu file1
	ifstream ff1;
	ff1.open("file1.txt", ios::in);
	string l1;  // dong doc cua file 1
	string c1; // rong
	while(getline(ff1, l1)){ // getline la duyet tung dong cua ff1
		cout<< l1 <<endl; // in ra tung dong 
		c1+= l1 + "\n";  // c1=rong+l1 + xuong dong  => c1 == ma tran cua file 1
	}
	ff1.close();
	
	
	cout<<"\nfile2\n";
	ifstream ff2;
	ff2.open("file2.txt", ios::in);
	string l2;
	string c2;
	while(getline(ff2, l2)){
		cout<<l2<<endl;
		c2+= l2 + "\n";  // => c2== ma tran cua file 2
	}
	ff2.close();
	
	ofstream f3;
	f3.open("file3.txt", ios::out);
	f3<<c1<<c2<<endl; // f3= c1 +c2  = matran file 1 + matran file2
	f3.close();
	
	
	cout<<"\nfile3\n";
	ifstream ff3;
	ff3.open("file3.txt", ios::in);
	string l3;
	while(getline(ff3, l3)){ // duyet tung dong cua ff3 
		cout<<l3<<endl;
	}
	ff3.close();
}
