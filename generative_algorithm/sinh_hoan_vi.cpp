#include<iostream>
#include<cmath>
#include<iomanip>
bool flag= false;

void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

void next(int arr[],int n)
{
    int i=n-2;
    while(i>=0 && arr[i]>arr[i+1])
    {
        i--;
    }
    if(i>=0)
    {
        int j=n-1;
        while(arr[i]>arr[j])
        {
            j--;
        }
        swap(arr[i],arr[j]);
        int r= i+1,s=n-1;
        while(r<=s)
        {
            swap(arr[r],arr[s]);
            r++,s--;
        }
    }
    else flag= true;
}

int main()
{   
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]= i+1;
    }

    while(!flag)
    {
        for(int i=0;i<n;i++)
        {
            std::cout<<arr[i]<<" ";
        }
        std::cout<<"\n";
        next(arr,n);
    }
}