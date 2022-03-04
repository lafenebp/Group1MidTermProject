// ExeWithUI.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../ProductionUI/ProductionUI.h"
#include "../DevTestingUI/DevTestingUI.h"
#include <boost/locale.hpp>
using namespace boost::locale;
using namespace std;

int main()
{
    
    generator gen;

    // Specify location of dictionaries
    gen.add_messages_path(".");
    gen.add_messages_domain("messages");

    // Generate locales and imbue them to iostream
    //locale::global(gen("de_DE.UTF - 8"));
    cout.imbue(locale());


    cout << translate("someContext", "Starting...") << endl;


    ProductionUI prod;
    prod.BuildProdUI();

    

    cout << "-----------------------------" << endl;



    DevTestingUI dev;
    dev.BuildTestingUI();

}
