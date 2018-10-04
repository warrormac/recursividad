#include <iostream>

using namespace std;

int print(char *ptr, int tam)
{
    if (tam==0)
        return 0;

    cout<<*ptr;

    print(ptr+1,tam-1);
}

int mayus(char *ptr, int tam)
{
    for (int i=0;i<tam;i++,ptr++)
        *ptr=*ptr-32;

}

int main()
{
    char arr[]="hola mundo";
    char *ptr=arr;
    mayus(ptr,10);
    print(ptr,10);
}
