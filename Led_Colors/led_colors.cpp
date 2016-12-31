#include "mbed.h"

DigitalOut My_led(PTD5); //Create a Digital output in the Location PTD5 which is for the green LED int
DigitalOut My_led2(PTE29); //Create a Digital output in the Location PTD5 which is for the red LED int

int main()
{
    My_led = 1;
    My_led2 = 1;
    while(1)//Endless loop
    {
        
        My_led = !My_led;     //!My_led; // set digital output named My_led to a value
        wait(1);
        My_led2 = !My_led2; // set digital output named My_led to a value
        
        wait(0.2);//wait before doing this again
        //My_led =1;
    }
    
}
