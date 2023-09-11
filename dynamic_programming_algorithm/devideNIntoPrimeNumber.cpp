//chia số tự nhiên n thành tổng các số nguyên dương nhỏ hơn hặc bằng m
// các hoán vị chỉ tính là 1 cách


#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>

long long F(int m,int v)
{
    if(m==0)
    {
        if(v==0) return 1;
        else return 0;
    }
    long long s=0;
    if(m>v)  s += F(m-1,v);
    else s+= (F(m-1,v) + F(m,v-m));

    return s;
}

int main()
{
    std::ios_base::sync_with_stdio(false);

    int t;std::cout<<t;
    while(t--)
    {
        int m,v;
        std::cin>>m>>v;

        long long s= F(m,v);


        std::cout<<s<<'\n';


    }
}