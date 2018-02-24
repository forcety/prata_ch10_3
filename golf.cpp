#include "golf.h"
#include <iostream>
#include <cstring>


void setgolf(golf & g, const char * name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
}

void showgolf(const golf & g)
{

}
