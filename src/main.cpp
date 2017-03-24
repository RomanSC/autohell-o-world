#include <iostream>

#include "helper.h"
#include "../my_inc/myadd.h"

#include <stdio.h>
#include <string.h>
using namespace std;

int main() {
    MyAdd add_obj;
    std::cout << "Addition Result: " << add_obj.add(1, 1) << std::endl;

    string autohelloworld = "Hello autohell!";
    cout << autohelloworld << endl;

    return 0;
}
