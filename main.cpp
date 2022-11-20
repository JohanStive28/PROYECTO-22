#include <iostream>
#include <sstream>

using namespace std;
#include "Menu.h"

int main() {
    Menu* menu=new Menu();
    menu->InfoHospital();
    menu->MenuPrincipal();

    return 0;
}
