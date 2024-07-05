#include<iostream>  //to use cin cout objects
#include<cstdlib>   //to use rand() function
#include<ctime> //to use current time
#include<string> //to use String object

using namespace std;

string getPassword(int length)
{
    string password = "";
    string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%&*()_-+/=~";
    int charSize = characters.size();

    srand(time(0));  //to change the starting index for rand() function with respect to time at every nanosecond;

    int randomIndex;
    for(int i=0;i<length;i++)
    {
        randomIndex = rand() % charSize;
        password= password+ characters[randomIndex];
    }
    return password;
}

int main()
{
    int length;
    cout<<"Enter the length of password :: ";
    cin>>length;
    string password = getPassword(length);
    cout<<"generated password :: "<<password;
    return 0;
}