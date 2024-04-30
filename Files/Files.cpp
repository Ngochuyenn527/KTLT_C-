The "fstream" library allows us to work with files.
To use the fstream library, include both the standard <iostream> AND the <fstream> header file:
	
#include<iostream>
#include<fstream>

There are three classes included in the fstream library, which are used to create, write or read files:
	
"ofstream" <=> Creates and writes to files
"ifstream" <=> reads from files
"fstream" <=> "ofstream" + "ifstream" 

int main(){
	
//create file:
 ofstream f;
 f.open( " ..txt", ios::out);
OR ofstream f(" ..txt", ios::out);
 
 
//Open file : 
         
GHI DE: "ofstream f(<ten_file>, ios::out)";
GHI BO SUNG: "ofstream f(<ten_tep>, ios::app)";

Kieu_mo: ios::out - neu muon ghi de (de len du lieu cu cua tep)
         ios::app - ghi bo sung du lieu moi vao tep
'ex: khai bao 1 bien tep f de ghi du lieu va sd no de mo tep DAT500.TXT tren o dia D, su dung che do ghi de'
' ofstream f("D:/DAT500.TXT", ios::out);


//read file:
  "ifstream f(<ten_file>, ios::in)";
'ex: ifstream f("D:/DAT500.TXT", ios::in)';
OR ifstream f;
   f.open("D:/DAT500.TXT", ios::in)


// close file
f.close();

//Both of write and read 
'fstream f("D:/DAT500.TXT", ios::in)';
	
GHI DU LIEU VAO TEP: "f<<<du_lieu";
Myfile<<"hello";instead of cout<<"hello";


string s;
getline(cin, s);
//or
char s[200];
f.getline(s,200); 

//read
#include<string>
string s;
while (getline(myfile, line)){ // duyet tung dong cua file
	cout<< s <<endl;
}
myfile.close();

//Read file line by line
ifstream myfile("Huynne.txt", ios::in); // read
char s[100]
while(!f.eof()){ //ktra xem da doc het tep chua
	f.getline(s,100);
	cout<<s<<endl;
}
f.close();


//Read file tung cum
f>>bien;
ex: cho tep du lieu so sau( tep VIDU1.TXT) 5 3 2 5 6 3 
doc toan bo tep va in ra man hinh
ifstream f("VIDU1.txt", ios::in);
int n=0; int a[100];
while(!f.eof()){
	f>>a[n]; n++;
}
f.close();

