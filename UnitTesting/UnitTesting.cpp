// UnitTesting.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "UnitTesting.h"
#include "../TestingCore/TestingCore.h"
#include <iostream>
#include <boost/locale.hpp>
using namespace boost::locale;
using namespace std;
// This is the constructor of a class that has been exported.
UnitTesting::UnitTesting()
{
    return;
}

void UnitTesting::RunUnitTests()
{
    generator gen;

    // Specify location of dictionaries
    gen.add_messages_path("../ExeWithUI/");
    gen.add_messages_domain("messages");

    // Generate locales and imbue them to iostream
    locale::global(gen("de_DE.UTF - 8"));
    cout.imbue(locale());

    cout << translate("unitTestContext", "Running those unit tests (in unit testing library)") << endl;
    TestingCore tCore;
    tCore.ReferenceTestingCore();
}
