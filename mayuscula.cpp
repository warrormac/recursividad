#include <iostream>

using namespace std;

int mayu(char b[], int c, int d)
{
    char a=b[d];

    if (c<0)
        return 0;

    b[d]=(a-32);
    cout<<b[d];
    mayu(b,c-1,d+1);
}



int main()
{
    int a,c,d=0,x;
    char b[]="abcde";
    c= (sizeof b)-2;
    x=mayu(b,c,d);

}
