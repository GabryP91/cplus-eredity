#include <cstdlib>
#include <iostream>
#include "Studente.h"

using namespace std;

int main(int argc, char *argv[])
{
    //dichiaro l'oggetto studente
    Studente studente;
    
    studente.nome="Ciccio";
    studente.cognome="Cappuccio";
    
    studente.matricola="572712";
    studente.isInCorso=true;
    
    cout<<"Nome:      "<<studente.nome<<endl;
    cout<<"Cognome:   "<<studente.cognome<<endl;
    cout<<"Matricola: "<<studente.matricola<<endl;
    cout<<"In Corso?  "<<studente.isInCorso<<endl;
    system("pause");
    return EXIT_SUCCESS;
}
