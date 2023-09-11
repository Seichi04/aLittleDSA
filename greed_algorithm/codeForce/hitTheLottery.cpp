#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>

int main()
{
    int money[5]={1,5,10,20,100};

    int n;std::cin>>n;
    int count=0;
    for(int i=4;i>=0;i--)
    {
        count = count +  n/money[i];
        n%=money[i];
    }

    std::cout<<count<<'\n';
}