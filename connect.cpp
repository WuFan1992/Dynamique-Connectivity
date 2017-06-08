#include<iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

class UF
{
    public :
           UF(int N);
           void Union(int p , int q);
           bool Connection(int p , int q);

};


int main ()
{
      string line;
      ifstream myfile;
      myfile.open("Text.txt");
      int a ,b;
      if (myfile.is_open())
      {
            while (getline(myfile,line))
	    {istringstream iss(line);
             iss >>a>>b;
             cout<< a<<"   "<<b<<endl;}

      }
      myfile.close();
return 0;

}
