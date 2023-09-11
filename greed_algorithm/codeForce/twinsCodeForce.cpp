#include<iostream>
#include<cmath>
#include<algorithm>

bool compareReverse(const int a,const int b)
{
    return a>b;
}
int main()
{
    int n;
    std::cin>>n;
    int a[n],sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        std::cin>>a[i];
        sum2+=a[i];
    }
    std::sort(a,a+n,compareReverse);

    int count=0;
    while(sum1<=sum2)
    {
        sum1+=a[count];
        sum2-=a[count];
        count++;
    }

    std::cout<<count<<"\n";
}