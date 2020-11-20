/*******************************************************************************
* File Name: Diod.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Diod_H) /* Pins Diod_H */
#define CY_PINS_Diod_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Diod_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Diod__PORT == 15 && ((Diod__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Diod_Write(uint8 value);
void    Diod_SetDriveMode(uint8 mode);
uint8   Diod_ReadDataReg(void);
uint8   Diod_Read(void);
void    Diod_SetInterruptMode(uint16 position, uint16 mode);
uint8   Diod_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Diod_SetDriveMode() function.
     *  @{
     */
        #define Diod_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Diod_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Diod_DM_RES_UP          PIN_DM_RES_UP
        #define Diod_DM_RES_DWN         PIN_DM_RES_DWN
        #define Diod_DM_OD_LO           PIN_DM_OD_LO
        #define Diod_DM_OD_HI           PIN_DM_OD_HI
        #define Diod_DM_STRONG          PIN_DM_STRONG
        #define Diod_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Diod_MASK               Diod__MASK
#define Diod_SHIFT              Diod__SHIFT
#define Diod_WIDTH              1u

/* Interrupt constants */
#if defined(Diod__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Diod_SetInterruptMode() function.
     *  @{
     */
        #define Diod_INTR_NONE      (uint16)(0x0000u)
        #define Diod_INTR_RISING    (uint16)(0x0001u)
        #define Diod_INTR_FALLING   (uint16)(0x0002u)
        #define Diod_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Diod_INTR_MASK      (0x01u) 
#endif /* (Diod__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Diod_PS                     (* (reg8 *) Diod__PS)
/* Data Register */
#define Diod_DR                     (* (reg8 *) Diod__DR)
/* Port Number */
#define Diod_PRT_NUM                (* (reg8 *) Diod__PRT) 
/* Connect to Analog Globals */                                                  
#define Diod_AG                     (* (reg8 *) Diod__AG)                       
/* Analog MUX bux enable */
#define Diod_AMUX                   (* (reg8 *) Diod__AMUX) 
/* Bidirectional Enable */                                                        
#define Diod_BIE                    (* (reg8 *) Diod__BIE)
/* Bit-mask for Aliased Register Access */
#define Diod_BIT_MASK               (* (reg8 *) Diod__BIT_MASK)
/* Bypass Enable */
#define Diod_BYP                    (* (reg8 *) Diod__BYP)
/* Port wide control signals */                                                   
#define Diod_CTL                    (* (reg8 *) Diod__CTL)
/* Drive Modes */
#define Diod_DM0                    (* (reg8 *) Diod__DM0) 
#define Diod_DM1                    (* (reg8 *) Diod__DM1)
#define Diod_DM2                    (* (reg8 *) Diod__DM2) 
/* Input Buffer Disable Override */
#define Diod_INP_DIS                (* (reg8 *) Diod__INP_DIS)
/* LCD Common or Segment Drive */
#define Diod_LCD_COM_SEG            (* (reg8 *) Diod__LCD_COM_SEG)
/* Enable Segment LCD */
#define Diod_LCD_EN                 (* (reg8 *) Diod__LCD_EN)
/* Slew Rate Control */
#define Diod_SLW                    (* (reg8 *) Diod__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Diod_PRTDSI__CAPS_SEL       (* (reg8 *) Diod__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Diod_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Diod__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Diod_PRTDSI__OE_SEL0        (* (reg8 *) Diod__PRTDSI__OE_SEL0) 
#define Diod_PRTDSI__OE_SEL1        (* (reg8 *) Diod__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Diod_PRTDSI__OUT_SEL0       (* (reg8 *) Diod__PRTDSI__OUT_SEL0) 
#define Diod_PRTDSI__OUT_SEL1       (* (reg8 *) Diod__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Diod_PRTDSI__SYNC_OUT       (* (reg8 *) Diod__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Diod__SIO_CFG)
    #define Diod_SIO_HYST_EN        (* (reg8 *) Diod__SIO_HYST_EN)
    #define Diod_SIO_REG_HIFREQ     (* (reg8 *) Diod__SIO_REG_HIFREQ)
    #define Diod_SIO_CFG            (* (reg8 *) Diod__SIO_CFG)
    #define Diod_SIO_DIFF           (* (reg8 *) Diod__SIO_DIFF)
#endif /* (Diod__SIO_CFG) */

/* Interrupt Registers */
#if defined(Diod__INTSTAT)
    #define Diod_INTSTAT            (* (reg8 *) Diod__INTSTAT)
    #define Diod_SNAP               (* (reg8 *) Diod__SNAP)
    
	#define Diod_0_INTTYPE_REG 		(* (reg8 *) Diod__0__INTTYPE)
#endif /* (Diod__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Diod_H */


/* [] END OF FILE */
