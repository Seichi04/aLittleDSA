#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>

bool condition(const int a,const int b)
{
    return a>b;
}


int main(){
    int n;std::cin>>n;
    int check[5];
    std::fill(check,check+5,0);
    for(int i=0;i<n;i++)
    {
        int temp; std::cin>>temp;
        check[temp]++;
    }

    int taxi = check[4];
    while(check[1]!= 0 && check[3]!= 0)
    {
        taxi++;
        check[1]--;
        check[3]--;
    }
    if(check[3] > 0) 
    {
        taxi+= check[3];
    }
    taxi +=( check[2]/2);
    check[2]= check[2]%2;
    float temp=check[2]*2 + check[1];
    taxi += ceil((float)temp/(float)4);
    

    std::cout<<taxi<<"\n";
}