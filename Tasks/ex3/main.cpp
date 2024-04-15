#include <iostream>
#include "Bank.hpp"
#include <time.h>
#include <stdlib.h>
#include <sstream>
using namespace std;

int main()
{


  srand(time(NULL));

Bank* bank = new Bank(100,100);
string name;
stringstream tmp;
for(int i = 0;i<20;i++)
{
    tmp<<"PERSON "<<i;
    name = tmp.str();
   tmp.clear();
   tmp.str("");
  bank->AddClient(rand()%50,name);
  cout<<bank->Clients[i]->GetName()<<" Code: "<<bank->Clients[i]->GetCode()<<endl;
}
for(int i = 0;i<20;i++)
{

  bank->AddAccount(rand()%100,bank->Clients[i]);
  cout<<"Account "<<bank->Accounts[i]->GetNumber();
  cout<<" of "<<bank->Accounts[i]->GetOwner()->GetName()<<" has ";
  cout<<bank->Accounts[i]->GetMoney()<<endl;
}
cout<<"Number: "<<Account::counter<<endl;
cout<<bank->FindClient(42)<<endl;
cout<<bank->FindAccount(66)<<endl;

delete bank;
bank=nullptr;
cout<<"Number: "<<Account::counter<<endl;

    return 0;
}
