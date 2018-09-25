#include <iostream>

using namespace std;


bool pali(char b[], int c, int d)
{
    if (c==(c/2))
    {
        return true;
    }
    if (b[d]==b[c])
            ;
    else return false;

    pali(b,c-1,d+1);
}


int tam(char b[])
{
    int a=0;
    while (a!='\0')
    {
        a++;
    }
    return a;
}

int main()
{
    int a,c,d=0,x;
    char b[]="11111";
    c=tam(b);
    x=pali(b,c,d);
    if (x==1)
        cout<<"si es palindrome";
    else cout<<"no es palindrome";
}
