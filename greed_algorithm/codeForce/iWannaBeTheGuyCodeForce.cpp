#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
#include<set>

int main(){
    int n; std::cin>>n;
    std::set<int> arr;
    int q; std::cin>>q;
    for(int i=0;i<q;i++)
    {
        int temp;
        std::cin>>temp;
        arr.insert(temp);
    }
    int p; std::cin>>p;
    for(int i=0;i<p;i++)
    {
        int temp;
        std::cin>>temp;
        arr.insert(temp);
    }

    bool check[n];
    std::fill(check,check+n,false);
    for(std::set<int>::iterator it= arr.begin(); it!= arr.end( ); it++)
    {
        check[(*it)-1] = true;

    }


    bool flag= true;
    for(int i=0;i<n;i++)
    {
        if(!check[i])
        {
            flag = false;
            break;

        }
    }

    if(flag) std::cout<<"I become the guy.";
    else std::cout<<"Oh, my keyboard!";
}