#include<iostream>
using namespace std;
class student
{
public:
int rollno;
string n;
void get()
{
cout<<"enter roll no and name"<<endl;
cin>>rollno>>n;
}
};
class mark:public student
{
public:
int m1,m2;
void getmark()
{
cin>>m1>>m2;
}
void mdisplay()
{
int total;
total=m1+m2;
cout<<rollno<<endl;
cout<<n<<endl;
cout<<total<<endl;
}
};
class sports:public student
{
public:
string m;
void sget()
{
cout<<"enter sports name"<<endl;
cin>>m;
}
void sdisplay()
{

cout<<rollno<<endl;
cout<<n<<endl;
cout<<m<<endl;
}};
int main()
{
mark m;
m.get();
m.getmark();
m.mdisplay();
sports s;
s.get();
s.sget();
s.sdisplay();
return 0;
}
