#include "Scene/goodbyeclass.h"
#include "../config.h"

#include <iostream>

#include "RA/file.h"

int main() {

    jlu::Goodbye a;
    a.printBye("Yordy Leonidas");
    std::cout << "Versi�n: " << VERSION_MAJOR << ":" << VERSION_MINOR << std::endl;
    function();
}