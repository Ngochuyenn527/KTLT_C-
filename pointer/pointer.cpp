#include <iostream>
#include<math.h>

using namespace std;
void changearray(int *ptr){
	ptr[0]=1; // or *ptr=1 vi toan tu tro (*) tra ve gtri ptu dau tien array[0]
	ptr[1]=3; 
}
void printsize(int *array){
	cout<<sizeof(array);
}
void swap(int *a, int *b){
	int temp=(*a); // doi gtri
	*a = *b;
	*b = temp;
}
 
int main(){
	int x=10;
	cout<<x<<endl; // print the value of x
	cout<<&x<<endl; // print the address of x
	cout<<*&x<<endl; // print the value at the address of x
	*&x=20;
	cout<<*&x<<endl;
	cout<<" "<<endl;
	
/*       ptr == &value
        *ptr == value
        co the gan gia tri cho *ptr nhu 1 bien bth
        int value=5, int *ptr=7; */
        
        
	int value=40; // gia tri tai dia tri cua value = 40
	int *ptr=&value;
	cout<<value<<endl;
	cout<<&value<<endl; // dia chi cua value
	cout<<ptr<<endl; // == dia chi cua value
	cout<<*ptr<<endl; // dau * chir gia tri tai dia chi ma con tro tro toi == value
	*ptr = 100; // gia tri =100
	cout<<value<<endl;
	cout<<" "<<endl;
	
	
	int array[]={5,8,2,7};
	cout<<"Before"<<endl;
	cout<<"array[0]= "<<array[0]<<endl;
	cout<<"array[1]= "<<array[1]<<endl;
	cout<<" "<<endl;

	
	changearray(array); // mangr chuyen doi ngaamf thanh con tro,
	cout<<"After"<<endl;
	cout<<"array[0]= "<<array[0]<<endl; 
	cout<<"array[1]= "<<array[1]<<endl;
	cout<<" "<<endl;

	
	char name1[]="Huyenn";
	cout<<*(name1)<<endl; // su dung toan tu tro (*) de lay gtri ptu dau tien cua mang
    cout<<" "<<endl;
	
	
	int name2[]={1,3,4,5};
	int *ptr1 = name2;	// or sd con tro ptr1 tro vao mang name2[]
	cout<<*(ptr1)<<endl; // gtri cua con tro == name2[0] 
	cout<<" "<<endl;
	
	
    int array2[]={4,3,7,2};
    cout<<sizeof(array2)<<endl;
    printsize(array2);
    cout<<" "<<endl;
    
    
    int huyen[]={27,5,2,0,4};
    cout<< &huyen[1]<< endl;  //dia chi ptu 1 - MANG
    cout<< huyen + 1 <<endl;  //dia chi ptu 1 - POINTER
    cout<<" "<<endl;
    //&a[i] == a + i
    
    cout<< huyen[1] << endl; // gia tri ptu 1 - MANG
    cout<< *(huyen + 1) << endl; // gia tri ptu 1 - POINTER
    // a[i] == *(a + i)
    cout<<" "<<endl;
    
    
    int m,n;
    cout<<"Nhap m= "; cin>>m;
    cout<<"Nhap n= "; cin>>n;
    swap(&m, &n); // chuyen dia chi cua m va n 
    cout<<m<<" "<<n;
    cout<<endl;
    
    
    
    int z[5];
    cout<<endl;
    cout<< &z<<endl;
    for(int i=0; i<5; i++){
    	cout<< &z[i]<<endl;
	} // ta thay &a==&a[0]
	

// #include<cstdlib>

/*sizeof(int)=2; sizeof(float)=4   // size tinh bang byte
<con tro> = (<Kieu con tro>*) calloc(<n>, <size>);
p = (int *) calloc(n, sizeof(int));

<Con tro> = (<Kieu con tro>*) malloc(<size>); 
VD: CAP PHAT BO NHO CHO MANG A GOM 10 PTU NGUYEN 
a=(int*)malloc(20)   or   a=(int*)malloc(10*sizeof(int))   

KHI MUON THAY DOI KICH THUOC CUA MANG " enough to use" realloc
<Con tro> = (<Kieu con tro>*) realloc(<Con tro>, <Kích thuoc moi>); - byte

  */

	return 0;
}

