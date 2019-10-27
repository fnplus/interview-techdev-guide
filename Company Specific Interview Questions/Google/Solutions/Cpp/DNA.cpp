#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	string Original;
	string copy[10];
	int match[10];
	cin>>Original;
	for (int i=0;i<10;i++)
	    cin>>copy[i];
	    
	int count_max=0;
	
	for(int j=0;j<10;j++)
	{
	int count=0;
	for (int i=0 ;i<Original.length();i++)
	{
	    if (copy[j][i]==Original[i])
	    {
	        count++;
	    }
	}
	match[j]=count;
	
	    if(count_max<match[j])
	        count_max=match[j];
	}
	
	for( int i=0;i<10;i++)
	{
	    if(count_max == match[i])
	        cout<<copy[i]<<" Is Family\n";
	}
	return 0;
}
