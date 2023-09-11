#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>


int main()
{
    int w,c;
    std::cin>>w>>c;
    w/=1000;
    while(w!=0)
    {
        for(int i=5;i>0;i--)
        {
            int temp= i* pow(10,c);
            if( w%temp == 0)
            {
                int count = w/temp;
                w= w- count*temp;
                std::cout<<temp*1000<<" "<<count<<"\n";
            }
        }
        c--;
    }
}