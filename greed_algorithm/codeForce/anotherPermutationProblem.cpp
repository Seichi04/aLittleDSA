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
    std::cout.tie(0);
    int t;
    std::cin>>t;

    while(t--)
    {
        int n;
        std::cin>>n;

        int maximum=0;

        for(int i=0;i<n;i++)
        {
            int  ans=0;
            int k=0;
            int p=n;
            for(int j=i;j<n;j++)
            {
                ans = ans + p* (j+1);
                k = std::max(k,p*(j+1));
                p--;
            }

            for(int j=i-1;j>=0;j--)
            {
                ans = ans + p* (j+1);
                k = std::max(k,p*(j+1));
                p--;
            }

            maximum = std::max(maximum,ans-k);
        }
        std::cout<<maximum<<'\n';
        
    }
    return 0;
}