#include "std_lib_facilities.h"
class Invalid_unit{};
double lengths(double number, char insideunit)
	{
		const float inchincm=2.54, minincm=100, inchinft=12;
		switch(insideunit)
			{
				case 'i':
					return (number*inchincm)/minincm;
					break;
				case 'm':
					return number;
					break;
				case 'f':
					return ((number/inchinft)/inchincm)/minincm;
					break;
				case 'c':
					return number/minincm;
					break;
				case 'x':
					throw Invalid_unit{};
					break;
			}
		return 0;
	}
int main(){
try{
	cout<<"Enter one number please followed by a unit. eb(cm,m,in,ft).\n";
	float number, min=0, max=0, numbersum=0;
	vector<float> listofnumbers;
	char insideunit=' ';
	string unit=" ";
			while(cin>>number>>unit)
				{
					numbersum+=number;
					if(unit=="in")
					{
						insideunit='i';
						//lengths(number, insideunit);
						listofnumbers.push_back(lengths(number, insideunit));
					}
					else if(unit=="m")
					{
						insideunit='m';
						//cout<<"Converted into cm: "<<lengths(number, insideunit)<<"\n";
						listofnumbers.push_back(lengths(number, insideunit));
					}
					else if(unit=="ft")
					{
						insideunit='f';
						cout<<"Converted into inch: "<<lengths(number, insideunit)<<"\n";
						listofnumbers.push_back(lengths(number, insideunit));
					}
					else if(unit=="cm")
					{
						insideunit='c';
						listofnumbers.push_back(lengths(number, insideunit));
					}
					else
					{
						insideunit='x';
						lengths(number,insideunit);
					}
					if(listofnumbers.size()==1)
					{
						max=number;
						min=number;
					}
					sort(listofnumbers);
					"\n";
					for(int i=0;i<listofnumbers.size();i++)
						cout<<"number "<<i<<" in the vector: "<<listofnumbers[i]<<"\n";
					if(number<min)
						min=number;
					if(number>max)
						max=number;
					"\n";
					cout<<"The smallest number: "<<min<<"\n";
					cout<<"The largest number: "<<max<<"\n";
					cout<<"The number of values: "<<listofnumbers.size()<<"\n";
					cout<<"The value of all values: "<<numbersum<<"\n";
				}
}
catch(Invalid_unit){
	cout<<"Invalid unit\n";
}
catch(out_of_range){
	cerr<<"Out of range\n";
}
return 0;
}
