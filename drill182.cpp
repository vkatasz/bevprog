#include "../std_lib_facilities.h"
vector<int>gv={1,2,4,8,16,32,64,128,256,512};
void f(vector<int>v){
	vector<int>lv(v.size());
	for(int i=0;i<gv.size();i++){
		lv[i]=gv[i];
	}
	for(int i=0;i<lv.size();i++){
		cout<<lv[i]<<"\n";
	}
	vector<int>lv2(v.size());
	for(int i=0;i<lv2.size();i++){
		lv2[i]=v[i];
	}
	for(int i=0;i<lv2.size();i++){
		cout<<lv2[i]<<"\n";
	}
}
int main(){
	f(gv);
	vector<int>vv;
	for(int i=1;i<11;i++){
		int numbs=i;
		for(int j=i-1;j>0;j--){
			numbs*=j;
		}
		vv.push_back(numbs);
	}
	f(vv);
	return 0;
}