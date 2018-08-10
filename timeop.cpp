#include<iostream>
using namespace std;
class sample
{
public:
int hr,min,sec,temp,rhr,rmin,rsec;
friend istream &operator >>(istream&in,sample&s1);
friend ostream &operator <<(ostream&out,sample&s2);
sample operator+(sample& s)
{
sample r;
r.rhr=s.hr+hr;
r.rmin=s.min+min;
r.rsec=s.sec+sec;
temp=r.rsec/60;
r.rsec%=60;
r.rmin+=temp;
temp=r.rmin/60;
r.rmin%=60;
r.hr+=temp;
return r;
}
};
istream &operator >>(istream&in,sample&s1)
{
in>>s1.hr>>s1.min>>s1.sec;
}
ostream &operator <<(ostream&out,sample&s2)
{
out<<s2.rhr<<s2.rmin<<s2.rsec;
}
int main()
{
sample s4,s5,s6;
cin>>s4;
cin>>s5;
s6=s4.operator+(s5);
cout<<s6;
return 0;
}
