#include<iostream>
#include<string.h>
using namespace std;
class SocialMediaUser{
	public:
	string username;
	int followers;
	void displayProfile(){
		cout<<"\n username:- "<<username;
		cout<<"\n followers:- "<<followers;
	}
};
main(){
	SocialMediaUser s;
	s.username="Anurag";
	s.followers=1100;
	s.displayProfile();
}
