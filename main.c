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
    uint32_t svitlo = 20U;
    uint32_t period = 200U;
    for(;;)
    {
        Pin_1_Write(1U);
        CyDelay(svitlo);
        Pin_1_Write(0U);
        CyDelay(period - svitlo);
    }
}