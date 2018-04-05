#include <iostream>
using namespace std;
char function(char arr[],char key)
{
   
    char str[100];
    int m=sizeof(str)/sizeof(str[0]);
     char first=arr[0];
    char second =arr[1];
     char third= arr[2];
    for( int i=0;i<m;i++ )
    {
        str[i]=first*second*third;
        cin>>str[i];
        first=second;second=third;third=first;
    }
    for(int j=0;j<m;j++)
    {   
        if(str[j]=key)
        return j;
    }
    
}

int main() {
  int j;
    char arr[]={'c','a','r'};
    int n=sizeof(arr)/sizeof(arr[0]); 
    char key='arc';
    function(arr,key);
    cout<< "position of arc is:"<<j;
	// your code goes here
	return 0;
}
