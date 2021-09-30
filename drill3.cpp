#include "std_lib_facilities.h"
int main(){
	cout<<"Enter the name of the person you want to write to\n";
	string firstname, friendname;
	cin>>firstname;
	cout<<"Dear "<<firstname<<",\n";
	cout<<"I'm happy to hearing from you! Sorry for the late reply, I'm really busy nowadays. How are you?\n";
	cout<<"Have you seen "<<friendname;
	cin>>friendname;
	cout<<" lately?\n";
	char friendsex;
	cout<<"Is your friend a he (m) or a she (f)?\n";
	cin>>friendsex;
	if (friendsex=='m')
	{
		cout<<"If you see "<<friendname<<" please ask him to call me.\n";
	}
	else if (friendsex=='f')
	{
		cout<<"If you see "<<friendname<<" please ask her to call me.\n";
	}
	int age;
	cout<<"How old is your friend?\n";
	cin>>age;
	cout<<"I hear you just had a birthday and you are "<<age<<" years old.\n";
	if (age<=0||age>=110)
		simple_error("you must be kidding!");
	if (age<12)
	{
		cout<<"Next year you will be "<<age++<<"\n";
	}
	else if (age==17)
	{
		cout<<"Next year you will be able to vote.\n";
	}
	else if (age>70)
	{
		cout<<"I hope you are enjoying your retirement.\n";
	}
	cout<<"Yours sincerelly,\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"Kata\n";
return 0;
}
