#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    int f[1000];
    int ans[1000];
    int max=0;
    std::cin>>n;
    std::fill(ans,ans+n,1);
    //memset(ans,1,sizeof(ans));- không dùng hàm memset như này vì chỉ dùng để gán bằng 0 thôi tại nó set byte liên tiếp
    int maximum=0;
    for(int i=0;i<n;i++)
    {
        std::cin>>f[i];
        for(int j=0;j<i;j++)
        {
            if(f[j] <f[i]) ans[i] = std::max(ans[i],ans[j]+1);  
        }
        maximum= std::max(ans[i],maximum);
    }

    std::cout<<maximum<<"\n";
}