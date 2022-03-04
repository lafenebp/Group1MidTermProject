// DevTestingUI.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "DevTestingUI.h"
#include "../UnitTesting/UnitTesting.h"
#include <iostream>
#include <boost/locale.hpp>
using namespace boost::locale;
using namespace std;

// This is the constructor of a class that has been exported.
DevTestingUI::DevTestingUI()
{
    return;
}

void DevTestingUI::BuildTestingUI()
{
    generator gen;

    // Specify location of dictionaries
    gen.add_messages_path("../ExeWithUI/");
    gen.add_messages_domain("messages");

    // Generate locales and imbue them to iostream
    locale::global(gen("de_DE.UTF - 8"));
    cout.imbue(locale());

    cout << translate("testingUIContext", "Building the testing UI (in DevTestingUI)") << endl;
    UnitTesting tests;
    tests.RunUnitTests();
}
