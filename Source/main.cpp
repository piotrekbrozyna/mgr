#include <iostream>
#include <stdio.h>
#include "MainApplication.h"

using namespace std;

int main(int argc, char *argv[])
{
    try
    {
        MainApplication application;
        application.run();
    }
        catch (exception& e)
    {
        cout << e.what() << endl;
    }
    return 0;

}
