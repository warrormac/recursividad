#include <iostream>

using namespace std;

int tam(char *ptr, int tama)
{
    if (*ptr=='\0')
        return tama;
    tam(ptr+1, tama+1);
}
int cpy(char *ptr, int tama,char *ptr1)
{
    *ptr1=*ptr;
    if (tama==0)
        return 0;
    cpy(ptr+1,tama-1,ptr1+1);
}
int main()
{
    int c;
    char arra[]="1,2,3,4,5,6,7,8,9";
    char *ptr=arra;
    c=tam(ptr,0);
    char arr[c];
    char *ptr1=arr;
    cpy(ptr,c,ptr1);
    for(int i=0;i<c;i++,cout<<*(ptr1++));
}
