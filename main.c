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


int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        LED_Write (1); // функцiя встановлення високого потенцiалу
        CyDelay(1000);// функцiя затримки
        LED_Write (0);
        CyDelay(1000);        
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
