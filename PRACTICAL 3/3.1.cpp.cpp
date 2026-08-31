#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "Choose Sorting Method:" << endl;
    cout << "1. Bubble Sort" << endl;
    cout << "2. Insertion Sort" << endl;
    cout << "3. Selection Sort" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if(choice == 1)
    {
        int a[6] = {77,25,90,13,88};

        for(int i=0;i<5;i++)
        {
            for(int j=0;j<4-i;j++)
            {
                if(a[j]>a[j+1])
                {
                    int temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }

        cout<<"Sorted Marks: ";
        for(int i=0;i<5;i++)
            cout<<a[i]<<" ";
    }

    else if(choice == 2)
    {
        int a[5]={67,45,90,23,78};

        for(int i=1;i<5;i++)
        {
            int key=a[i];
            int j=i-1;

            while(j>=0 && a[j]>key)
            {
                a[j+1]=a[j];
                j--;
            }

            a[j+1]=key;
        }

        cout<<"Sorted Marks: ";
        for(int i=0;i<5;i++)
            cout<<a[i]<<" ";
    }

    else if(choice == 3)
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
    }

    else
    {
        cout << "Invalid choice";
    }

    return 0;
}
