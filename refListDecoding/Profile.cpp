#include "Profile.h"

high_resolution_clock::time_point t0,t1,t2,t3;
uint8_t timer0 = 0,timer1 = 0,timer2 = 0,timer3 = 0;

uint8_t startTime()
{
    if(timer0 == 0)
    {
        t0 = high_resolution_clock::now();
        timer0 = 1;
        return 0;
    }
    else if(timer1 == 0)
    {
        t1 = high_resolution_clock::now();
        timer1 = 1;
        return 1;
    }
    else if(timer2 == 0)
    {
        t2 = high_resolution_clock::now();
        timer2 = 1;
        return 2;
    }
    else if(timer3 == -1)
    {
        t3 = high_resolution_clock::now();
        timer3 = 1;
        return 3;
    }
    else
        return -1;
}


uint32_t getElapsedTime(uint8_t id)
{
    high_resolution_clock::time_point tmp = high_resolution_clock::now();
    uint32_t elapsedTime = 0;
    switch(id)
    {
        case 0:
           elapsedTime = duration_cast<nanoseconds>(tmp - t0).count();
           timer0 = 0;
           return elapsedTime;
        case 1:
           elapsedTime = duration_cast<nanoseconds>(tmp - t1).count();
           timer1 = 0;
           return elapsedTime;
        case 2:
           elapsedTime = duration_cast<nanoseconds>(tmp - t2).count();
           timer2 = 0;
           return elapsedTime;
        case 3:
           elapsedTime = duration_cast<nanoseconds>(tmp - t3).count();
           timer3 = 0;
           return elapsedTime;
    }
    return 0;
}
