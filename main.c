#include "project.h"

#define HIGH 1
#define LOW  0

int main(void)
{

    CyGlobalIntEnable; /* Enable global interrupts. */

    for(;;)
    {
        LED_Write (HIGH); // Встановлення високого потенціалу на пін LED
        CyDelay(1000);// функцiя затримки
        LED_Write (LOW); // Встановлення низького потенціалу на пін LED
        CyDelay(1000);  
    }
}
