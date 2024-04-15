#include <iostream>
#include "Product.hpp"

using namespace std;

    Product::Product(string n,double p)
    {
        name=n;
        price=p;
    }
    Product::Product()
    {
       name="Implicit";
        price=0;
    }

