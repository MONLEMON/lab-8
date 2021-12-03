#include <iostream>
using namespace std; 

int main(){
string ans;
string ans2;
string name;
string day;
int id;
int GEAR;
cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
cout << "?????: ";
getline(cin,name);
cout <<"Fahsai: Wow!!! "<< name <<" is a really cool name.\n";
cout <<"Fahsai: I think you are an Engineering student. What is your student ID?\n";
cout << name << ": ";
cin >> id;
id = id/10e6;
cout << "Fahsai: I think you may be GEAR "<<id-12<<". I have a free movie ticket for you.\n";
cout << "Fahsai: Let's go to the cinema together!!!\n";
cout << "Fahsai: What movie do you want to watch?\n";
cout << name << ": ";
cin.ignore();
getline(cin,ans);
cout << "Fahsai: So....which day are you free to go with me?\n";
cout << name << ": ";
getline(cin,day);
cout << "Fahsai: "<< day <<"....that is OK!!! I'm looking forward to watching "<<ans<<" with you.\n";
cout << name << ": ";
getline(cin,ans2);
cout << "Fahsai: 555+ see you "<<day<<". Bye Bye "<<"\\(^ ^)/";
}