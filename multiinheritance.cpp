#include<iostream>
using namespace std;
class student
{
public:
int rollno;
string n;
void get()
{
cout<<"\n enter the details roll no and name:";
cin>>rollno;
cin>>n;
}
};
class mark
{
public:
int m1,m2;
void getmark()
{
cout<<"\nenter the mark";
cin>>m1>>m2;
}
};
class details:public student,public mark
{
public:
int total;
void display()
{
total=m1+m2;
cout<<rollno<<endl;
cout<<n<<endl;
cout<<total<<endl;
}
};
int main()
{
details d;
d.get();
d.getmark();
d.display();
return 0;
}
