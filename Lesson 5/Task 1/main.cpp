#include <iostream>
#include "computerpicker.h"
#include "computer.h"
#include <string>

using namespace std;

int main()
{
    computerpicker general;
    computer accessories;

    accessories.addGPU("Gigabyte","Geforce RTX 3090",120,1500);
    accessories.addCpu("Ryzen 3600","AMD",300,5,4.2,"AM4",56);
    accessories.addMothercard("Asus",150,"AM4","TUF B450-Plus Gaming");
    accessories.setNamePC("Very dear");
    general.addComputer(accessories);


    general.findByCpuBenchmark(56);
    general.findBySocket("AM4");
    general.findByPrice(300);


    return 0;
}
