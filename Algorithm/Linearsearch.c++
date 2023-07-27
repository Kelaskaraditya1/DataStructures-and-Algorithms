#include<iostream>
using namespace std;
int linearsearch(int A[],int n,int key)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]==key)
        return i;
        else 
        count++;
        
    }
    if(count==n)
    return -1;
}
int main()
{
    int n,A[200],key;
    cout<<"Enter the no of elements"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    cin>>A[i];
    cout<<"Enter the Key element"<<endl;
    cin>>key;
    int pos=linearsearch(A,n,key);
    if(pos==-1)
    cout<<"Key is not present in the Array"<<endl;
    else
    cout<<"The Key is present at "<<pos<<" Loaction in the Array "<<endl;
    return 0;
}