#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
struct activity
{
    int beginTime;
    int endTime;
};

bool compare(const struct activity a,const struct activity b)
{
    if(a.endTime!=b.endTime)
    {
        return a.endTime < b.endTime;
    }
    else
    {
        return a.beginTime < b.beginTime;
    }
}

int main()
{
    int n;
    std::cin>>n;
    std::vector<struct activity> list;
    for(int i=0;i<n;i++)
    {
        struct activity a;
        std::cin>>a.beginTime>>a.endTime;
        list.push_back(a);
    }

    std::sort(list.begin(),list.end(),compare);


    int count=1;

    int mark= list[0].endTime;
    for(int i=1;i<n;i++)
    {
        if(list[i].beginTime >= mark)
        {
            count++;
            mark= list[i].endTime;
        }
    }

    std::cout<<count<<"\n";

}