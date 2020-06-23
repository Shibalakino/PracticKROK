#include <QCoreApplication>
#include<iostream>

void show(int **arr,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            std::cout<<arr[i][j]<<"  ";
    std::cout<<std::endl;
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
       int n;
       std::cout<<"Enter size of matrix\n";
       do
       std::cin>>n;
       while(n<=0||n>1000);
       int **arr=new int *[n];
       std::cout<<"enter an array with size "<<n<<" x "<<n<<std::endl;
       for(int i=0;i<n;i++)
       {
           arr[i]=new int[n];
           for(int j=0;j<n;j++)
               std::cin>>arr[i][j];
       }
       show(arr,n);
       int mod;
       std::cout<<"Enter module\n";
       std::cin>>mod;
       int max=arr[0][0]%mod;
       int s,b;
       s=b=0;
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<n;j++)
           {
               if(max<(arr[i][j]%mod))
               {
                   max=arr[i][j]%mod;
                   s=i;
                   b=j;
               }
           }
       }
       std::cout<<"Max element by module "<<max<<std::endl;
       int x,y;
       x=y=0;
       for(int i=0;i<n-1;i++)
       {
           y=0;
           if(s==i)x=1;
           for(int j=0;j<n-1;j++)
           {
               if(b==j)y=1;
               arr[i][j]=arr[i+x][j+y];
           }
       }
       show(arr,n-1);
       for(int i=0;i<n;i++)
           delete [] arr[i];
    return a.exec();
}
