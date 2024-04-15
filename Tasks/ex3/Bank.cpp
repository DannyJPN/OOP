#include "Bank.hpp"
Bank::Bank( int clientsmax, int accountsmax)
{
    clmax=clientsmax;
    acmax=accountsmax;
    Clients=new Client*[clientsmax];
    Accounts=new Account*[accountsmax];

}
    Bank::~Bank()
    {
        for(unsigned int i =0;i<clientcount;i++)
        {
            delete Clients[i];
            Clients[i]=nullptr;
        }
        delete[] Clients;
        Clients=nullptr;
        for(unsigned int i =0;i<accountcount;i++)
        {
            delete Accounts[i];
            Accounts[i]=nullptr;
        }
        delete[] Accounts;
        Accounts=nullptr;
    }

    Client* Bank::FindClient( int ID)
    {
        for(unsigned int i=0;i<clientcount;i++)
        {
            if(Clients[i]->GetCode()==ID)
            {
                return Clients[i];
            }

        }
        return nullptr;
    }
    Account* Bank::FindAccount( int ID)
    {
        for(unsigned int i=0;i<accountcount;i++)
        {
            if(Accounts[i]->GetNumber()==ID)
            {
                return Accounts[i];
            }

        }
        return nullptr;
    }
    Client* Bank::AddClient( int ID,string name)
    {

        return clientcount>clmax?nullptr:Clients[clientcount++]=new Client(ID,name);

    }
    Account* Bank::AddAccount(int number,Client*cl)
    {
        if(accountcount>=acmax)
        {
         return nullptr;
        }

            Account* a=new Account(number,cl);
               Accounts[accountcount++]=a;


           return a;
    }
    Account* Bank::AddAccount(int number,Client*cl,double rate)
    {
         if(accountcount>=acmax)
        {
         return nullptr;
        }

            Account* a=new Account(number,cl,rate);
               Accounts[accountcount++]=a;


           return a;
    }
PartnerAccount* Bank::AddAccount(int number,Client*cl,Client*p)
    {
if(accountcount>=acmax)
        {
         return nullptr;
        }
               PartnerAccount* pa=new PartnerAccount(number,cl,p);
               Accounts[accountcount++]=pa;
           return pa;

    }

PartnerAccount* Bank::AddAccount(int number,Client*cl,Client*p,double rate)
    {
        if(accountcount>=acmax)
        {
         return nullptr;
        }
        PartnerAccount* pa=new PartnerAccount(number,cl,p,rate);
               Accounts[accountcount++]=pa;
           return pa;
    }

    CreditAccount* Bank::AddAccount(int number,double cr,Client*cl)
    {
if(accountcount>=acmax)
        {
         return nullptr;
        }
               CreditAccount* ca=new CreditAccount(number,cl,cr);
               Accounts[accountcount++]=ca;
            return ca;

    }

CreditAccount* Bank::AddAccount(int number,Client*cl,double cr,double rate)
    {
        if(accountcount>=acmax)
        {
         return nullptr;
        }
        CreditAccount* ca=new CreditAccount(number,cl,cr,rate);
               Accounts[accountcount++]=ca;
           return ca;
    }

    void Bank::Increase()
    {
        for(unsigned int i=0;i<clientcount;i++)
        {
            Accounts[i]->Increase();
        }
    }

