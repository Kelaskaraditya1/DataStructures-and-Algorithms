#include<iostream>
using namespace std;
void swapalternate(int A[],int n)
{
    if(n%2==0)
    {
        for(int i=0,j=1;(i<=n-2&&j<=n-1);i=i+2,j=j+2)
        {
            
            int tmp=A[i];
            A[i]=A[j];
            A[j]=tmp;
        }
    }
    else
    {
        for(int i=0,j=1;(i<=n-3&&j<=n-2);i=i+2,j=j+2)
        {
            
            int tmp=A[i];
            A[i]=A[j];
            A[j]=tmp;
        }
    }
}
int main()
{
    int n,A[200];
    cout<<"Enter the no of elements"<<endl;
    cin>>n;
    cout<<"Enter the elemments"<<endl;
    for(int i=0;i<n;i++)
    cin>>A[i];
    swapalternate(A,n);
    cout<<"After Swapping"<<endl;
     for(int i=0;i<n;i++)
    cout<<A[i]<<"\t";
    return 0;
}