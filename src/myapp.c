#include "myfunc.h"

int main() {
    // call functions 3 times...
    for (int i=0; i<3; i++) {
        foo();
        goo();
    }

    // call zoo three times...
    for (int i=0; i<13; i++){
        zoo();
    }
    
    return 0;
}