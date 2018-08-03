#include<iostream>
using namespace std;
class add
{
private:
int a,b;
friend void get(add&c);
friend void sum(add&z);
};
void get(add&c)
{
cin>>c.a>>c.b;
}
void sum(add &z)
{
int c,d;
c=z.a;
d=z.b;
cout<<c+d;
}
int main()
{
add c;
get(c);
sum(c);
return 0;
}
