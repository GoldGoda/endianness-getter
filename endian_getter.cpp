#include <iostream>
#include <cstdint>

void get_endianess()
{
    uint16_t u16 = 1;
    uint8_t* ptr = reinterpret_cast<uint8_t*>(&u16);
    if (reinterpret_cast<uint8_t*>(&u16)[0] == 1)
        std::cout << "Little Endian\n";
    else
        std::cout << "Big Endian\n";
}

int main()
{   
    get_endianess();
    return 0;
}