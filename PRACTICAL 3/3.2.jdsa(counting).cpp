#include <iostream>
using namespace std;
int main()
{
    int a[]={2,0,1,1,1,0};
    int n=6;

    int zero=0,one=0,two=0;

    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
            zero++;
        else if(a[i]==1)
            one++;
        else
            two++;
    }

    int i=0;

    while(zero--)
        a[i++]=0;

    while(one--)
        a[i++]=1;

    while(two--)
        a[i++]=2;

    cout<<"Sorted Array: ";

    for(int j=0;j<n;j++)
        cout<<a[j]<<" ";

    return 0;
}
