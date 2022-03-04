// BusinessIntelligence.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "BusinessIntelligence.h"
#include <iostream>
#include "../Core/Core.h"
#include <boost/locale.hpp>
using namespace boost::locale;
using namespace std;

// This is the constructor of a class that has been exported.
BusinessIntelligence::BusinessIntelligence()
{
    return;
}

void BusinessIntelligence::DoBIStuff()
{
    generator gen;

    // Specify location of dictionaries
    gen.add_messages_path("../ExeWithUI/");
    gen.add_messages_domain("messages");

    // Generate locales and imbue them to iostream
    locale::global(gen("de_DE.UTF - 8"));
    cout.imbue(locale());

    cout << translate("BIContext", "Doing lots of BI stuff (in BI library)") << endl;
    Core core;
    core.ReferenceCoreFunction();
}
