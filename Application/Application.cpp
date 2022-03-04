// Application.cpp : Defines the exported functions for the DLL.
//
#include <boost/locale.hpp>
#include "framework.h"
#include "Application.h"
#include <iostream>
#include "../BusinessIntelligence/BusinessIntelligence.h"
using namespace std;
using namespace boost::locale;


// This is the constructor of a class that has been exported.
Application::Application()
{
    return;
}

void Application::StartupApp()
{
    generator gen;

    // Specify location of dictionaries
    gen.add_messages_path("../ExeWithUI/");
    gen.add_messages_domain("messages");

    // Generate locales and imbue them to iostream
    locale::global(gen("de_DE.UTF - 8"));
    cout.imbue(locale());

    cout << translate("appContext", "Starting up the app! (in application library)") << endl;
    BusinessIntelligence bi;
    bi.DoBIStuff();
}
