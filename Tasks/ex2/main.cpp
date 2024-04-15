#include <iostream>
#include "Handler.hpp"
#include <stdlib.h>
#include <time.h>

using namespace std;

double hand(Facture *f)
{
    return f->TotalPrice();
}

bool canh1(Facture*f)
{
    return (f->productcount>=30);
}
bool canh2(Facture*f)
{
    return (f->human->name.length()<5);
}
bool canh3(Facture*f)
{
    return (f->productcount%13==f->productcount%2);
}
bool canh4(Facture*f)
{
    return (f->productcount>6&&100>f->productlist[5].price);
}
bool canh5(Facture*f)
{
    return (f->productcount<10);
}


int main(void)
{
    srand(time(NULL));
    Handler *h1 = new Handler(1,canh1,hand);
    Handler *h2 = new Handler(2,canh2,hand);h1->next=h2;h2->prev=h1;
    Handler *h3 = new Handler(3,canh3,hand);h2->next=h3;h3->prev=h2;
    Handler *h4 = new Handler(4,canh4,hand);h3->next=h4;h4->prev=h3;
    Handler *h5 = new Handler(5,canh5,hand);h4->next=h5;h5->prev=h4;

    Facture * f1 = new Facture(23,new Person("Bill Gates",2409402));
    unsigned int x;
    f1->productlist = new Product[f1->productcount=20];
    for(unsigned int i = 0;i<f1->productcount;i++)
    {
        x=rand()%30+1;
        f1->productlist[i].price=x*(i+1);
        f1->productlist[i].name="";
        for(unsigned int j = 1;j<=x;j++)
        {
           f1->productlist[i].name+=(char)(rand()%(91-65)+65);
        }
        cout<<"Price = "<<x<<"*"<<(i+1)<<" = "<<f1->productlist[i].price<<" with name "<<f1->productlist[i].name<<endl;
    }
    double total = h1->Process(f1);
    if(total>=0)
    cout<<"The price of facture is "<<total<<endl;


    delete[] f1->productlist;
    f1->productlist=nullptr;
    f1->productcount--;

delete f1->human;
f1->human=nullptr;
    delete f1;
    f1=nullptr;
    for(int i = 5;i>0;i--)
    {
        h1->Remove(i);
    }

    return 0;
}
