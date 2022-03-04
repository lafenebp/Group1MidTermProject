// ProductionUI.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "ProductionUI.h"
#include "../Application/Application.h"
#include <iostream>
#include <boost/locale.hpp>
using namespace boost::locale;
using namespace std;



// This is the constructor of a class that has been exported.
ProductionUI::ProductionUI()
{
    return;
}

void ProductionUI::BuildProdUI()
{
    generator gen;

    // Specify location of dictionaries
    gen.add_messages_path("../ExeWithUI/");
    gen.add_messages_domain("messages");

    // Generate locales and imbue them to iostream
    locale::global(gen("de_DE.UTF - 8"));
    cout.imbue(locale());

    cout << translate("prodUIContext", "Building Production UI (in prodUI library)") << endl;
    Application app;
    app.StartupApp();
}
