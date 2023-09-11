#include<iostream>
#include<cmath>
#include<algorithm>

void Try(int arr[],int n,int i)
{
    for(int j=0;j<=1;j++)
    {
        arr[i]=j;
        if(i==n-1) 
        {
             for(int k=0;k<n;k++)
            {
                std::cout<<arr[k]<<" ";
            }
            std::cout<<"\n";
        }
        else Try(arr,n,i+1);
    }
}

int main()
{
    int n;
    std::cin>>n;
    int arr[n];
    std::fill(arr,arr+n,0);
    Try(arr,n,0);
}