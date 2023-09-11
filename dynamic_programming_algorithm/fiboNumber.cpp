#include<iostream>
#include<vector>
long long fibo(std::vector<long long> &f,int n)
{
    if(n<=1) return 1;
    else if(f[n]!= -1) return f[n];
    else return f[n]= fibo(f,n-1)+fibo(f,n-2);
}



int main()
{
    std::vector<long long> f(100,-1);

    std::cout<<fibo(f,4);
}