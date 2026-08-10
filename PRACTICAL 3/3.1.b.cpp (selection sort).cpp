#include <iostream>
using namespace std;

int main()
{
    int a[5]={67,45,90,23,18};

    for(int i=0;i<5;i++)
    {
        int min=i;

        for(int j=i+1;j<5;j++)
        {
            if(a[j]<a[min])
            min=j;
        }

        int temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }

    cout<<"Sorted Marks: ";

    for(int i=0;i<5;i++)
    cout<<a[i]<<" ";

    return 0;
}
