// THUẬT TOÁN SINH TẬP CON
 #include<iostream>
 #include<cmath>
 #include<algorithm>
 bool flag= false;

 void next(int arr[],int n,int k)
 {
     int i=k-1;
     while(i>=0 && arr[i]==n-k+i)
     {
         i--;
     }
     if(i>=0)
     {
         arr[i]=arr[i]+1;
         for(int j=i+1;j<=k;j++)
         {
             arr[j]=arr[i]+j-i;
         }
     }
     else flag= true;
    
 }

 int main()
 {
     int n,k;
     std::cin>>n>>k;
     int arr[k];
     for(int i=0;i<k;i++)
     {
         arr[i]=i+1;
     }

     while(!flag)
     {
         for(int i=0;i<k;i++)
         {
             std::cout<<arr[i]<<" ";
         }
         std::cout<<"\n";

         next(arr,n,k);
     }
 }