#include <iostream>
#include <iomanip>
int main()
{
    std::cout << "Left fill:\n" << std::left << std::setfill(' ')
              << std::setw(12) << -1.23  << '\n';

    std::cout << "Internal fill:\n" << std::internal
              << std::setw(12) << -1.23  << '\n';

    std::cout << "Right fill:\n" << std::right
              << std::setw(12) << -1.23  << '\n';
}