//THUẬT TOÁN SINH XÂU NHỊ PHÂN

 #include<iostream>
 #include<cmath>
 #include<algorithm>
 #include<vector>
 bool flag=false;
 void next(int arr[],int n)
 {
     int i=n-1;
     while(i>=0 && arr[i])
     {
         arr[i]=0;
         i--;
     }
     if(i>=0) arr[i]=1;
     else flag=true;
 }
 int main()
 {
     int n;std::cin>>n;
     int arr[n];
     for(int i=0;i<n;i++)
     {
         arr[i]=0;
     }
     while(!flag)
     {
         for(int i=0;i<n;i++)
         {
             std::cout<<arr[i]<<" ";
         }
         std::cout<<"\n";
         next(arr,n);
     }  
 }