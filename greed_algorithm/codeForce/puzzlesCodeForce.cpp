#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n,m;
    std::cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++)
    {
        std::cin>>a[i];
    }

    std::sort(a,a+m);
    int min=1001;
    for(int i=0;i<=(m-n);i++)
    {
        if(min > (a[i+n-1]-a[i]) ) min = a[i+n-1] - a[i];
    }

    std::cout<<min<<'\n';

}