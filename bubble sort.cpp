#include<iostream>
using namespace std;
int main()
{
    int a[20],n,i,j,temp,swap;
    cout<<"enter the size of the array: \n";
    cin>>n;
    cout<<"enter the array elements : \n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<(n-1);i++)
    {
        swap=0;
        for(j=0;j<(n-i)-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                swap =1;
            }
        }
        if(swap==0)
        {
            break;
        }
    }
    cout<<"array after bubble sort:";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    return 0;
}