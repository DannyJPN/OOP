#ifndef BANK
#define BANK
#include "Client.hpp"
#include "Account.hpp"
#include "PartnerAccount.hpp"
#include "CreditAccount.hpp"
class Bank
{

public:
    Client** Clients;
    Account** Accounts;
    unsigned int clientcount=0,accountcount=0,clmax=0,acmax=0;

    Bank( int clientsmax, int accountsmax);
    ~Bank();

    Client* FindClient( int ID);
    Account* FindAccount( int ID);
    Client* AddClient( int ID,string name);
    Account* AddAccount(int number,Client*cl);
    Account* AddAccount(int number,Client*cl,double rate);
    PartnerAccount* AddAccount(int number,Client*cl,Client*p);
    PartnerAccount* AddAccount(int number,Client*cl,Client*p,double rate);
    CreditAccount*AddAccount(int num,double cr,Client*cl);
    CreditAccount*AddAccount(int num,Client*cl,double cr,double rate);

    void Increase();



};











#endif // BANK
