// ExeWithoutUI.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Application/Application.h"
#include <boost/locale.hpp>
using namespace boost::locale;
using namespace std;

int main()
{
    Application app;
    app.StartupApp();
}

