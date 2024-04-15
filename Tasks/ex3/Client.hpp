#ifndef CLIENT
#define CLIENT
#include <iostream>

using namespace std;

class Client
{
    private:
    int code;
    string name;

    public:
       Client(int ID,string n);
        int GetCode();
        string GetName();



};










#endif // CLIENT
