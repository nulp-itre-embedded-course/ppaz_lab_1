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
#define HIGH 0
#define LOW 1


int main(void)
{
    CyGlobalIntEnable; 
    
    for(;;)
    {
        if (Sw_Read() == HIGH )
        { LED_Write(HIGH);
        }
        else{
            LED_Write(LOW);
        }
        
       
       
    }
}

/* [] END OF FILE */
