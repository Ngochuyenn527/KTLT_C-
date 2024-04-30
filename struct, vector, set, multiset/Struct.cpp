/* Struct are a way to group several related variables into one place.
 Each variable in the structure is known as a member of the structure.
Unlike an array, a structure can "contain==include" many different data types (int, string, bool, etc.). */

#include<iostream>
#include<string>

using namespace std;

struct ngochuyenn{ // Create a structure variable called Ngochuyenn
	int number;
	string color;
	
	void type(){
		cin>>number;
		cin.ignore();
		getline(cin, color);
	}
	
	void print(){
		cout<< number <<" "<< color <<"\n";
	}
};

struct connguoi{
	connguoi( int t, float v1, float cc){
		tuoi=t;
		vongmot=v1;
		chieucao=cc;
	}
	int tuoi;
	float vongmot;
	float chieucao;
};

int main(){
	ngochuyenn young;  // create a ngochuyenn struct and store it in young
	young.number = 275;
	young.color = "red";
	cout<<young.number<<" "<<young.color<<'\n';
	
	ngochuyenn old;
	old.type();
	old.print();
	
    
    
    connguoi thao = connguoi(22,95,1.3);
    connguoi huong = connguoi(12,57,1.9);
    
    connguoi *bo_nhi; //= nullptr; // chua tro vao ai ca
    // 2023
    bo_nhi=&thao;
    cout<<(*bo_nhi).tuoi<<'\n'; // *(bo_nhi) : toan tu lay gtri tai dia chi 
    
    // 2024
    bo_nhi=&thao; 
    thao.tuoi=23; // next year tuoi++
    cout<<(*bo_nhi).tuoi<<'\n';
    
}
