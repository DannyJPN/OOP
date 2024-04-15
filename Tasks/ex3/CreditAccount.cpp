
#include "CreditAccount.hpp"


CreditAccount::CreditAccount(int num,Client*cl,double cr):Account(num,cl)
{

    cout<<"CA const"<<endl;
    credit = cr;
}

CreditAccount::CreditAccount(int num,Client*cl,double cr,double intrate):Account(num,cl,intrate)
{

    cout<<"CA const rate"<<endl;
    credit = cr;
}


bool CreditAccount::Extract(double amount)
    {
        cout<<"CA extract"<<endl;
        if(amount+credit>=money)
        {
            return false;
        }
        money-=amount;
        return true;
    }
