#include "../std_lib_facilities.h"
vector<int>* suspicious(){
	vector<int>p{new vector<int>};
	for(int i;cin>>i; ){
		if(i)
			p.push_back(i);
		else
			throw exception();
	}
	return p.release();
}
int main(){
	try{
		vector<int>* p=suspicious();
		for(int i=0;i<p.size();i++)
			cout<<p[i]<<''<<"\n";
		delete[] p;
		return 0;
	}
	catch(excpetion& e){
		cerr<<"Error!\n";
		return 1;
	}
}