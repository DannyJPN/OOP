#include <iostream>
#include "Facture.hpp"
#include <stdlib.h>

using namespace std;



    Facture::Facture(unsigned int id,Person* h)
    {
        ID=id;
        human=h;
        productlist = nullptr;
        productcount = 0;
    }
    double Facture::GetPrice(Product pr)
    {
        return pr.price;
    }
    double Facture::TotalPrice()
    {
        double sum = 0;
        for(unsigned int i = 0;i<this->productcount;i++)
        {
            sum+=this->productlist[i].price;
        }
        return sum;
    }



