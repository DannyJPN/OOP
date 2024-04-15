#ifndef HANDLER
#define HANDLER
#include "Facture.hpp"

class Handler
{
private:
    unsigned int ID;
    bool (*CanHandle)(Facture* fact);
    double (*Handle)(Facture* facture);
public:
    Handler* next,*prev;
    Handler(unsigned int ,bool (*can)(Facture*fact),double (*han)(Facture*fact));
    double Process(Facture* fact);
    bool Remove(int ID);

};



#endif // HANDLER
