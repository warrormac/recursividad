#include <iostream>

using namespace std;

int print(int *ptr, int tam)
{
    if (tam==0)
    {
        return 1;
    }
    cout<<*ptr;
    print(ptr+1,tam-1);

}

int ordenamiento(int *ptr, int tam)
{
    int b=1,c=0;
    while (c<tam)
    {
        while (b++<tam)
        {
            if (*(ptr+c)>*(ptr+b))
            {
                int temp=*(ptr+c);
                *(ptr+c)=*(ptr+b);
                *(ptr+b)=temp;
            }

        }
        c++;
        b=c+1;
    }
}



int main()
{
    int x[]={1,5,2,8,6,3};
    int *ptr=x;
    ordenamiento(ptr,6);
    print(ptr,6);
}
