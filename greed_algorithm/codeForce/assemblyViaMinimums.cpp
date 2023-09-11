#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<set>
void getVector(std::vector<int> &arr,int n)
{
    for(int i=0;i<n;i++)
    {
        int x;
        std::cin>>x;
        arr.push_back(x);
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int  t;
    std::cin>>t;

    while(t--)
    {
        int n;
        std::cin>>n;
        int m= (n*(n-1))/2;
        std::vector<int> arrA,arrB;
        getVector(arrB,m);
        std::sort(arrB.begin(),arrB.end());
        for(int i=0;i<m;)
        {
            arrA.push_back(arrB[i]);
            i = i + n- arrA.size();
        }

        arrA.push_back(arrB[m-1]);
        for(int i=0;i<n;i++)
        {
            std::cout<<arrA[i]<<' ';
        }
        std::cout<<"\n";



    }


}