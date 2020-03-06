#include<iostream>
#include<cstdio>

using namespace std;

class DiffieHellman
{
       public:
              long long int p,g,x,a,y,b,A,B;
              DiffieHellman(long long int p1,long long int g1,long long int x1,long long int y1)
              {
                     p = p1;
                     g = g1;
                     x = x1;
                     y = y1;
                     a=power(g,x,p);
                     b=power(g,y,p);
                     A = power(b,x,p);
                     B = power(a,y,p);
              }
              long long int power(int a,int b,int mod)
              {
                     long long int t;
                     if(b==1)
                           return a;
                     t=power(a,b/2,mod);
                     if(b%2==0)
                           return (t*t)%mod;
                     else
                           return (((t*t)%mod)*a)%mod;
              }
};

int main()
{
       long long int p,g,x,a,y,b,A,B;

       cout<<"Enter the values of p and g upon which User[1] And [2] both will agreed : "<<endl;
       cin>>p>>g;

       cout<<"Enter the Secret Integer for User[1] : ";
       cin>>x;
       cout<<"Enter the Secret Integer for User[2] : ";
       cin>>y;
       cout<<endl;
       DiffieHellman dh(p,g,x,y);

       cout<<"Alice's private key, known only to Alice : "<<dh.a<<endl;
       cout<<"Bob's private key known only to Bob : "<<dh.b<<endl;
       cout<<endl;
       cout<<"Alice's public key, known to Alice and Bob : "<<dh.A<<endl;
       cout<<"Bob's public key, known to Alice and Bob : "<<dh.B<<endl;
       return 0;
}
