#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string data;
    cout<<"Enter flag : "<<endl;
    cin>>data;
    int count=0;
    string arr[data.length()+1];
    int j=0;
    for(int i=0;i< sizeof(arr)/sizeof(arr[0]); i++)
    {
        if(data[j]=='1')
        {
            count++;
            if(count==6)
            {
                count=0;
                arr[i]='0';
            }
            else
            {
                arr[i]=data[j];
                j++;
            }
        }
        else
        {
            count=0;
            arr[i]=data[i];
            j++;
        }
    }
    for(int i=0;i< data.length()+1 ; i++)
        cout<<arr[i];
}
