#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int i=0,n;
	char data[100];
	string array[100];
	ofstream of;//output file stream
	of.open("file1.txt",ios::out|ios::trunc);//available opt, app,ate,in,out,trunc
	of<<"This is testing the formatting!"<<endl;//writes simple line to file
	of<<"This happens when i write in new line!";//writes in new line due to endl in previous line 
	of<<"New line without endl on previos line!"<<endl;//writes in same line as last line due to absence of endl in previos line
	of.close();
	ifstream ifile; // input file stream 
	ifile.open("file1.txt",ios::in);
	// ifile>>data;
	// cout<<data; this gives just one word from file.
	while(ifile>>array[i]) // gets words separated by space
	{
		cout<<" just read -->" << array[i]<<endl;
		i++;
	}
	ifile.close();
	for(n=0;n<i;n++) //prints single line 
	{
		cout<<array[n]<<" ";
	}
	
	return 0;
}
