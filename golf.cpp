#include "golf.h"
#include <iostream>
#include <cstring>


void setgolf(golf & g, const char * name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf &g)
{
    std::cout << "Enter fullname: " ;

    std::cin >> g.fullname;
    std::cout << "Enter handicap: " ;
    std::cin >> g.handicap;

    /*
    if(g.fullname == "")
    {
        return 0;
    }
    else
    {
        return 1;
    }
    */
}

void showgolf(const golf & g)
{
    std::cout << g.fullname << " " << g.handicap << "\n";
}

void handicap(golf & g, int hc)
{
    g.handicap = hc;
}


