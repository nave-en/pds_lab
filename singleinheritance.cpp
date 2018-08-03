#include<iostream>
using namespace std;
class base
{
public:
int a,b;
void get()
{
cin>>a>>b;
}
};
class derived:public base
{
public:
int total;
void display()
{
total=a+b;
cout<<total;
}
};
int main()
{
derived d;
d.get();
d.display();
return 0;
}
