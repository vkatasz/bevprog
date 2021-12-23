#include "../std_lib_facilities.h"
int ga[10]={1,2,4,8,16,32,64,128,256,512};
void f(int a[], int b){
	int la[10];
	for(int i=0;i<10;i++){
		la[i]=ga[i];
	}
	for(int i=0;i<b;i++){
		cout<<la[i]<<"\n";
	}
	int* p=new int[b];
	for(int i=0;i<b;i++){
		p[i]=a[i];
	}
	for(int i=0;i<b;i++){
		cout<<p[i]<<"\n";
	}
	delete[] p;
}
int main(){
	f(ga,10);
	int aa[10];
	for(int i=1;i<11;i++){
		int fact=i;
		for(int j=i-1;j>0;j--){
			fact*=j;
		}
		aa[i-1]=fact;
	}
	f(aa,10);
	return 0;
}