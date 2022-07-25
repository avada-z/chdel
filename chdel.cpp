#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv)
{
    string outs, symbols, comp;
    bool proc=false;
    if(argc < 2)
    {
        cout<<"Use this tool to remove some characters from your string\n";
        cout<<"Usage: \n";
        cout<<"-n abc to remove normal characters\n";
        cout<<R"(-s \n to remove special characters)"<<endl;
        return 0;
    }
    if(string(argv[1])=="-n")
    {
        for (string str; getline(cin, str);)
        {
            for(int i=0; i<string(argv[2]).length(); i++)
            {
                str.erase(remove(str.begin(), str.end(), static_cast<char>(string(argv[2])[i])), str.end());
            }
            if(str.empty()==true)
            outs=outs+str;
            else
            outs=outs+"\n"+str;
        }
        cout<<outs;
    }
    else if(string(argv[1])=="-s")
    {
        for (string str; getline(cin, str);)
        {
            for(int i=0; i<string(argv[2]).length(); i=+2)
            {
                str.erase(remove(str.begin(), str.end(), static_cast<char>(string(argv[2])[i]+string(argv[2])[i+1])), str.end());
            }
            outs=outs+str;
        }
    cout << outs;
    }
    return 0;
}