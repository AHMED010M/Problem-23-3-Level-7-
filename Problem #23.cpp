#include <iostream>
#include <string>
using namespace std;

string ReadNameFromUser()
{
    string name;
    cout << "Please Enter Your String?" << endl;
    getline(cin, name);

    return name;
}


void PrintFistLetterFromString(string name)
{

    bool IsFisrtLetter = true;

    for (int i = 0; i<name.length(); i++)
    {
      
      

        if (name[i] != ' ' && IsFisrtLetter)
        {
            cout << name[i] << endl;

        }
        IsFisrtLetter = (name[i] == ' ' ? true : false);

    }


}

int main()
{
    
    PrintFistLetterFromString(ReadNameFromUser());


}

