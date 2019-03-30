#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

struct Login{
    string userName;
    string userPassword;

};

string ask_ID(Login *works);
int main()
{
    Login works;
    ask_ID(&works);

    return 0;
}

/*
has the user input values from the Login struct and prints them out.

expected result:

Please give me a username: Phillip
Please give me a password: royos

your username is: phillip  your password is royos

*/
string ask_ID(Login *works){
    string uname, pw;
    works->userName = uname;
    works->userPassword = pw;
    cout << "Please give me a username: ";
    cin >> uname;
    cout << "Please give me a password: " << endl;
    cin >> pw;

    cout << "your username is: " << uname << " your password is: " << pw << endl;
    return(uname , pw);
    //return (pw);

}


