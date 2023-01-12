// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


template<typename A, typename B> class Druid {
public:
    A health;
    B power;
    B get(int) {
        return power;
    }
    A get1(int){
        return health;
    }

int calculatel()
{
    A sum = 10;
        health = sum;
    return health;
}
};
using namespace std;

int main()
{
    Druid<int, int> One;
    Druid<int, int> Two;
 
    One.health;
     Two.power = 30;
     One.calculatel( );
    std::cout << One.get1(4) << endl;
    std::cout << Two.get(5) << endl;
    return 0;
}
