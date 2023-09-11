#include<iostream>

void Try(int a[],bool chuaxet[],int n,int i)
{
    for(int j=0;j<n;j++)
    {
        if(chuaxet[j])
        {
            a[i]=j;
            chuaxet[j]=false;
            if(i==n-1)
            {
                for(int h=0;h<n;h++)
                {
                    std::cout<<a[h]<<" ";
                }
                std::cout<<"\n";
            }
            else Try(a,chuaxet,n,i+1);
            chuaxet[j]=true;
        }
    }
}

int main()
{
    int n;
    std::cin>>n;
    bool chuaxet[n];
    int a[n];
    for(int i=0;i<n;i++)
    {
        chuaxet[i] = true;
    }

    Try(a,chuaxet,n,0);
}