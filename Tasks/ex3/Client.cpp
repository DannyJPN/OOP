#include "Client.hpp"
#include <iostream>
using namespace std;



Client::Client(int ID,string n)
{
    code=ID;
    name=n;
}
int Client::GetCode()
{
    return code;
}

string Client::GetName()
{
    return name;
}
