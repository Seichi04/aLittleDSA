#include<iostream>
#include<cstring>
#define MOD 1000000007

//formula : f[s] = f[s-1]+ f[s-2] + f[s-3] + f[s-4] +f[s-5] +f[s-6]


int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n;
    std::cin>>n;

    int f[1000];
    memset(f,0,sizeof(f));

    f[0]=1;

    for(int s=1;s<=n;s++)
        for(int j=1;j<=6;j++)
        {
            if(j<=s)
                f[s]= (f[s] + f[s-j]) %MOD;
        }
    std::cout<<f[n];
}