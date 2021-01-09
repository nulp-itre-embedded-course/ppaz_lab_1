/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"

#define HIGH 1
#define LOW  0

int main(void)
{
    int a = 8;
    a = a;
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        LED_Write (HIGH); // Встановлення високого потенціалу на пін LED
        CyDelay(1000);// функцiя затримки
        LED_Write (LOW); // Встановлення низького потенціалу на пін LED
        CyDelay(1000);  
    }
}

/* [] END OF FILE */
