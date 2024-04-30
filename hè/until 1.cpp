//Consider an algorithm that takes as input a positivce integer n
//If n is even, the algorithm divides it by two
//If n is odd, the algorithm multiplies it by three and adds one
//The algorithm repeats this, until n is one.

#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	cout<<n<<" ";
	do{
		if(n%2==0){
			n/=2;
			cout<<n<<" ";
		}
		else{
			n=n*3+1;
			cout<<n<<" ";
		}
		
	}
	while(n!=1);
	return 0;
        
}
