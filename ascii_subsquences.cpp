#include<iostream>
#include<string>
#include <sstream>
using namespace std;
void ascii_subseq(char* in,string out,int i)
{
    string str;
    if(in[i]=='\0')
    {
        cout<<out<<" ";
        return;
    }
    
    char ch=in[i];
    int intch=ch;
    string szName="";
     szName += to_string<int>(intch);
    ascii_subseq(in,out,i+1);
    ascii_subseq(in,out+ch,i+1);
    ascii_subseq(in,out+szName,i+1);
    
  
}


template <class T>
inline std::string to_string (const T& t)
{
   std::stringstream ss;
   ss << t;
   return ss.str();
}
int main() {
    
    char in[100];
    string out="";
    cin.getline(in,100);
    
    ascii_subseq(in,out,0);
	return 0;
}
