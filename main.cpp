#include <iostream>
#include <string>
#include "address_book.h"



int main()
{
#ifdef DEBUG
    {
        std::cout << "********************\n";
        std::cout << "**   DEBUG MODE   **\n";
    }
#endif // end ifdef DEBUG

    std::cout << "********************\n";
    std::cout << "Welcome User!\n";
    std::cout << "This is Binh's Address Book App!\n";
    std::cout << "--------------------\n";
    run_program();
    std::cout << "--------------------\n";
    std::cout << "App terminated\n";
    std::cout << "********************\n";
    return 0;
}
