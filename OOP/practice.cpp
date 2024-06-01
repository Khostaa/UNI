#include<iostream>

using namespace std;
class compare
{
    public:

     void largest(int *ptr, int s)
     {
        int l=ptr[0];
        for(int i=0; i<s; i++)
        {
            if(ptr[i]>l)
            {
                l=ptr[i];
            }
        }
        cout << "Largest Element is: "<< l;

     }
};

int main()
{
    compare c;
    int size,i;
    cout<<"Enter the no. of array: ";
    cin>>size;
    int *ptr= new int[size];
    if(ptr==NULL)
    {
        cout<<"Memory couldn't be allocated"<<endl;
    }
    for(i=0;i<size;i++)
    {
        cin>>ptr[i];
    }
    c.largest(ptr,size);
    return 0;
}