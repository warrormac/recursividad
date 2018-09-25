#include <iostream>

using namespace std;


int tam(char a[],int d, int f, int q)
{
    if(f==0)
    {
        return q;
    }
    q+=static_cast<int>(a[d]-'0');
    tam(a,d+1,f-1,q);
}

int main()
{
    int a,c,d=0,sum=0;
    char b[]="123456";
    c=tam(b,d,6,sum);
    cout<<c;
}
