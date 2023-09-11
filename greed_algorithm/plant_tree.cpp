#include<iostream>
#include<algorithm>
int main()
{
    int n;
    std::cin>>n;
    int flower[n];
    for(int i=0;i<n;i++)
    {
        std::cin>>flower[i];
    }

    std::sort(flower,flower+n);
    int day=1,max=0;
    for(int temp=n-1;temp>=0;temp-- )
    {
        if(flower[temp]+day  > max )   max= flower[temp]+day;

        day++;
    }

    std::cout<<max<<"\n";

}