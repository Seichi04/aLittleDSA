#include<iostream>
#include<cstring>
#include<algorithm>

int main()
{
    // std::ios_base::sync_with_stdio(false);
    // std::cin.tie(0);
    // std::cout.tie(0);

    int n,s;
    std::cin>>n>>s;

// dp mang 1 chieu
    // int xu[1000];
    // int ans[1000];
    // memset(ans,0,sizeof(ans));

    // for(int i=0;i<n;i++)
    // {
    //     std::cin>>xu[i];
    //     ans[xu[i]]=1;
    // }
 
    // for(int i=1;i<=s;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         if(xu[j]<=i)
    //         {
    //             ans[i]= ans[i] + ans[i-xu[j]];
    //         } 
    //     }
    // }
    // for(int i=0;i<=s;i++) std::cout<<ans[i]<<" ";


//dp mang 2 chieu
    int xu[1000];
    for(int i=0;i<n;i++) std::cin>>xu[i];

    int f[1000][1000];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=s;j++)
        {
            if(j==0)
            {
                f[i][j]=1;
                continue;
            }
            f[i][j]=0;
            if(i>=1) f[i][j] += f[i-1][j];
            if(j>=xu[i]) f[i][j]+= f[i-1][j-xu[i]];

        }
    }

    std::cout<<f[n-1][s];
}