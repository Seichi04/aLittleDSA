// greedy // string //

#include<iostream>
#include<string>

int main()
{
    std::string s;
    std::cin>>s;

    std::string key = "hello";
    int mark=0;
    bool flag= false;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]== key[mark])
        {
            mark++;
            if(mark== key.length())
            {
                flag= true;
                break;
            }
        }
    }

    if(flag) std::cout<<"YES";
    else std::cout<<"NO";
}