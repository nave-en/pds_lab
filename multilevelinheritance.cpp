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
int c,d;
void insert()
{
cin>>c>>d;
}
};
class derived1:public derived
{
public:
int tot1,tot2;
void display()
{
tot1=a+b;
tot2=c-d;
cout<<tot1<<tot2;
}
};
int main()
{
derived1 d;
d.get();
d.insert();
d.display();
return 0;
}
