//author:somya
//problem:CHEFDIL

#include <iostream>
#include <string.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{char s[100000];
	int nof1=0;
	    cin>>s;
	    for(int i=0;i<strlen(s);i++)
	    if(s[i]-'0'==1)
	    nof1++;
	    
	    if(nof1%2==1)
	    cout<<"WIN\n";
	    else cout<<"LOSE\n";
	}
	return 0;
}
