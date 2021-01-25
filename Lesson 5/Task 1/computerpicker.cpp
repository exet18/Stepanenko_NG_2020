#include "computerpicker.h"

computerpicker::computerpicker()
{

}

void computerpicker::addComputer(computer pc)
{
    computers.push_back(pc);
}

void computerpicker::findByPrice(int price)
{
    for(computer pc : computers)
    {
        if(pc.getsum()==price)
        {
            cout << pc.getName() << '\n';
            pc.list_info();
        }
    }
}

void computerpicker::findBySocket(string socket)
{
    for(computer pc : computers)
    {
        if(pc.getsocket().compare(socket) == 0)
        {
            cout << pc.getName() << '\n';
            pc.list_info();
        }
    }
}

void computerpicker::findByVideocardBenchmark(int score)
{
    for(computer pc : computers)
    {
        if(pc.getVideocardBenchmark() == score)
        {
            cout << pc.getName() << '\n';
            pc.list_info();
        }
    }
}

void computerpicker::findByCpuBenchmark(int score)
{
    for(computer pc : computers)
    {
     if(pc.getCPUGhz() == score)
        {
            cout << pc.getName() << '\n';
            pc.list_info();
        }
    }
}

void computerpicker::Show_Everthing()
{
    for(computer pc : computers)
    {
        cout << pc.getName() << '\n';
        pc.list_info();
    }
}
