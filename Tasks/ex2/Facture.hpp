#ifndef FACTURE
#define FACTURE

#include "Product.hpp"
#include "Person.hpp"

using namespace std;
class Facture
{
private:
    unsigned int ID;
public:
    Person* human;
    Product* productlist;
    unsigned int  productcount;
    Facture(unsigned int id,Person* h);
    double GetPrice(Product pr);
    double TotalPrice();

};


#endif // FACTURE
