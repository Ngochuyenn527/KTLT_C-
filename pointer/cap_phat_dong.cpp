#include<iostream>

using namespace std;

int main(){
	int *ptr=new int; //cap phat dong 1 so nguyen va gan dia chi cho con tro ptr 
    *ptr=10; 
    
    //or int *ptr1=new int(10);
    
    delete ptr; // tra lai vung nho => con tro lo lung
    // delete voi cac bien don( 0 phai mangr )
    ptr= nullptr; // gan ptr thanh con tro null
    
#include<cstdlib>

sizeof(int)=2; sizeof(float)=4   // size tinh bang byte
<con tro> = (<Kieu con tro>*) calloc(<n>, <size>);
p = (int*) calloc(n, sizeof(int));

<Con tro> = (<Kieu con tro>*) malloc(<size>); 
VD: CAP PHAT BO NHO CHO MANG A GOM 10 PTU NGUYEN 
a=(int*)malloc(20)   or   a=(int*)malloc(10*sizeof(int))   

KHI MUON THAY DOI KICH THUOC CUA MANG " enough to use" realloc
<Con tro> = (<Kieu con tro>*) realloc(<Con tro>, <Kích thuoc moi>); - byte



int *a= new int[n]; 
// or 
int *a=(int*)calloc(n, sizeof(int));
// or
int *a=(int*)malloc(n*sizeof(int));


KHI MUON THAY DOI KICH THUOC CUA MANG " enough to use" => realloc
int *a=(int*)realloc(a,(n+1)*sizeof(int));
a[n]=a[i];
n++;


GIAI PHONG BO NHO - khi khong con su dung nua

  giai phong bo nho da cap phat bang toan tu new:  delete[] <ten con tro>
      ex: int *a=new int[n];
      delete[] a;
      
  giai phong bo nho da cap phat bang malloc, calloc:  free(<ten con tro>)
      ex: int *b, *c;
      b=(int*)calloc(n,sizeof(int));
      c=(int*)malloc(n*sizeof(int));
      free(b);
      free(c);
    
    


