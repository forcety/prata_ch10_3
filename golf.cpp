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
    char line[Len];
    std::cout << "Enter fullname: " ;
    // Метод sync нужен для сброса буфера ввода, если в буфер остались какие-либо данные
    // после выполнения предыдущех операций взятия из потока, когда для текущей операции
    // требуется получение данных именно с клавиатуры (в частности).
    std::cin.sync();
    std::cin.getline(line, Len);
    std::cout << "Complete line: " << line << "\n";
    strcpy(g.fullname, line);


    std::cout << "Enter handicap: " ;
    std::cin >> g.handicap;


    if (line[0] == '\0')
    {
        std::cout << "Empty name!\n" ;
        return 0;
    }
    else
    {
        return 1;
    }

}

void showgolf(const golf & g)
{
    std::cout << g.fullname << " " << g.handicap << "\n";
}

void handicap(golf & g, int hc)
{
    g.handicap = hc;
}


