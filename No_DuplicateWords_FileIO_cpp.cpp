#include <iostream>
#include <fstream>
#include<set> // for set operations 
#include <iterator> 
using namespace std;
int main()
{
	int i=0,n;
	char data[100];
	string a;
	set<string> noDup ;
	set <string>:: iterator itr; 
	
	ifstream ifile; // input file stream 
	ifile.open("file1.txt",ios::in);
	
	while(ifile>>a) // gets words separated by space
	{
		noDup.insert(a);
		i++;
	}
	ifile.close();
	for (itr = noDup.begin(); itr != noDup.end(); ++itr) 
    { 
        cout << ' ' << *itr; 
    } 
    cout << endl; 
	
	return 0;
}
