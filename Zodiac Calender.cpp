#include <iostream>

int main() {
#include <iostream>

int main() {
    int year;
    std::cout<<"Enter the year : ";
    std::cin>>year;
    
    if (year>1912 and year<2043)
    {
        switch(year%12)
        {
            case 0:
            std::cout<<"Your chinese zodiac sign is the monkey";
            break;
            case 1:
            std::cout<<"Your chinese zodiac sign is the rooster";
            break;
            case 2:
            std::cout<<"Your chinese zodiac sign is the dog";
            break;
            case 3:
            std::cout<<"Your chinese zodiac sign is the pig";
            break;
            case 4:
            std::cout<<"Your chinese zodiac sign is the rat";
            break;
            case 5:
            std::cout<<"Your chinese zodiac sign is the ox";
            break;
            case 6:
            std::cout<<"Your chinese zodiac sign is the tiger";
            break;
            case 7:
            std::cout<<"Your chinese zodiac sign is the rabbit";
            break;
            case 8:
            std::cout<<"Your chinese zodiac sign is the dragon";
            break;
            case 9:
            std::cout<<"Your chinese zodiac sign is the snake";
            break;
            case 10:
            std::cout<<"Your chinese zodiac sign is the horse";
            break;
            case 11:
            std::cout<<"Your chinese zodiac sign is the sheep";
            break;
        }
    }
    else
    {
        std::cout<<"Enterd year is out of range";
    }

    
    return 0;
}
