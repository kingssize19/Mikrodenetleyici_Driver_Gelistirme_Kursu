#ifndef INC_STM32F446XX_H_
#define INC_STM32F446XX_H_

#include <stdint.h>

#define	__IO	volatile

#define SET_BIT(REG, BIT)			(  (REG) |=  (BIT)  )
#define CLEAR_BIT(REG, BIT)			(  (REG) &= ~(BIT)  )
#define READ_BIT(REG, BIT)			(  (REG) &   (BIT)  )
#define UNUSED(x)					((void)x)


/*
 *	Memory Base Address
 *
 */

#define FLASH_BASE_ADDR				(0x08000000UL) 		/* Flash Base Address (up to 512KB) */
#define SRAM1_BASE_ADDR				(0x20000000UL) 		/* SRAM1 Base Address 112KB */
#define SRAM2_BASE_ADDR				(0x2001C000UL) 		/* SRAM2 Base Address 16KB  (SRAM1_BASE_ADDR + hex(112KB))  */


/*
 * Peripheral Base Addresses
 *
 */

#define	PERIPH_BASE_ADDR			(0x40000000UL)  					/* Base Address for All peripherals */

#define APB1_BASE_ADDR				PERIPH_BASE_ADDR					/* APB1 Bus Domain Base Address */
#define APB2_BASE_ADDR				(PERIPH_BASE_ADDR + 0x00010000UL)	/* APB2 Bus Domain Base Address */
#define AHB1_BASE_ADDR				(PERIPH_BASE_ADDR + 0x00020000UL)	/* AHB1 Bus Domain Base Address */
#define AHB2_BASE_ADDR				(PERIPH_BASE_ADDR + 0x10000000UL)	/* AHB2 Bus Domain Base Address */
#define AHB3_BASE_ADDR				(PERIPH_BASE_ADDR + 0x60001000UL)   /* AHB3 Bus Domain Base Address */



/*
 *  APB1 Peripherals Base Addresses
 *
 */

#define TIM2_BASE_ADDR				(APB1_BASE_ADDR + )					/* 	Timer 2 Base Address  	 		*/
#define TIM3_BASE_ADDR				(APB1_BASE_ADDR + 0x400UL)			/* 	Timer 3 Base Address 	 		*/
#define TIM4_BASE_ADDR				(APB1_BASE_ADDR + 0x800UL)			/* 	Timer 4 Base Address 	 		*/
#define TIM5_BASE_ADDR				(APB1_BASE_ADDR + 0xC00UL)			/* 	Timer 5 Base Address 	 		*/
#define TIM6_BASE_ADDR				(APB1_BASE_ADDR + 0x1000UL)			/* 	Timer 6 Base Address 	 		*/
#define TIM7_BASE_ADDR				(APB1_BASE_ADDR + 0x1400UL)			/* 	Timer 7 Base Address 	 		*/
#define TIM12_BASE_ADDR				(APB1_BASE_ADDR + 0x1800UL)			/*	 Timer 12 Base Address	 		*/
#define TIM13_BASE_ADDR				(APB1_BASE_ADDR + 0x1C00UL)			/*	 Timer 13 Base Address	 		*/
#define TIM14_BASE_ADDR				(APB1_BASE_ADDR + 0x2000UL)			/*	Timer 14 Base Address	 		*/

#define RTC_BKPREG_BASE_ADDR		(APB1_BASE_ADDR + 0x2800UL)			/* RTC & BKP Registers Base Address */

#define WWDG_BASE_ADDR				(APB1_BASE_ADDR + 0x2C00UL)			/* WWDG Base Address 				*/
#define IWDG_BASE_ADDR				(APB1_BASE_ADDR + 0x3000UL)			/* IWDG Base Address 				*/

#define SPI2_BASE_ADDR				(APB1_BASE_ADDR + 0x3800UL)			/* SPI2 Base Address     			*/
#define SPI3_BASE_ADDR				(APB1_BASE_ADDR + 0x3C00UL)			/* SPI3 Base Address     			*/
#define SPDIF_RX_BASE_ADDR			(APB1_BASE_ADDR + 0x4000UL)			/* SPDIF-RX Base Address 			*/

#define USART2_BASE_ADDR			(APB1_BASE_ADDR + 0x4400UL)			/* USART2 Base Address   			*/
#define USART3_BASE_ADDR			(APB1_BASE_ADDR + 0x4800UL)			/* USART3 Base Address   			*/
#define UART4_BASE_ADDR				(APB1_BASE_ADDR + 0x4C00UL)			/* UART4 Base Address 	 			*/
#define UART5_BASE_ADDR				(APB1_BASE_ADDR + 0x5000UL)			/* UART5 Base Address	 			*/

#define I2C1_BASE_ADDR				(APB1_BASE_ADDR + 0x5400UL)			/* I2C 1 Base Address 				*/
#define I2C2_BASE_ADDR				(APB1_BASE_ADDR + 0x5800UL)			/* I2C 2 Base Address 				*/
#define I2C3_BASE_ADDR				(APB1_BASE_ADDR + 0x5C00UL)			/* I2C 3 Base Address 				*/

#define CAN1_BASE_ADDR				(APB1_BASE_ADDR + 0x6400UL)			/* CAN1 Base Address 				*/
#define CAN2_BASE_ADDR				(APB1_BASE_ADDR + 0x6800UL)			/* CAN2 Base Address 				*/

#define HDMI_CEC_BASE_ADDR			(APB1_BASE_ADDR + 0x6C00UL)			/* HDMI-CEC Base Address 			*/

#define PWR_BASE_ADDR				(APB1_BASE_ADDR + 0x7000UL)			/* PWR Base Address 				*/

#define DAC_BASE_ADDR				(APB1_BASE_ADDR + 0x7400UL)			/* DAC Base Address 				*/


/*
 *  APB2 Peripherals Base Addresses
 *
 */

#define TIM1_BASE_ADDR				(APB2_BASE_ADDR + 0x0000UL)			/* TIM1 Base Address	*/
#define TIM8_BASE_ADDR				(APB2_BASE_ADDR + 0x400UL)			/* TIM8 Base Address	*/

#define USART1_BASE_ADDR			(APB2_BASE_ADDR	+ 0x1000UL)			/* USART1 Base Address	*/
#define USART6_BASE_ADDR			(APB2_BASE_ADDR + 0x1400UL)			/* USART6 Base Address	*/

#define ADC1_BASE_ADDR				(APB2_BASE_ADDR + 0x2000UL)			/* ADC1 Base Address	*/
#define ADC2_BASE_ADDR				(APB2_BASE_ADDR + 0x2100UL)			/* ADC2 Base Address	*/
#define ADC3_BASE_ADDR				(APB2_BASE_ADDR + 0x2200UL)			/* ADC3 Base Address	*/

#define SDMMC_BASE_ADDR				(APB2_BASE_ADDR + 0x2C00UL)			/* SDMMC Base Address	*/

#define SPI1_BASE_ADDR				(APB2_BASE_ADDR + 0x3000UL)			/* SPI1 Base Address	*/
#define SPI4_BASE_ADDR				(APB2_BASE_ADDR + 0x3400UL)			/* SPI4 Base Address	*/

#define SYSCFG_BASE_ADDR			(APB2_BASE_ADDR + 0x3800UL)			/* SYSCFG Base Address	*/

#define EXTI_BASE_ADDR				(APB2_BASE_ADDR + 0x3C00UL)			/* EXTI Base Address	*/

#define TIM9_BASE_ADDR				(APB2_BASE_ADDR + 0x4000UL)			/* TIM9 Base Address	*/
#define TIM10_BASE_ADDR				(APB2_BASE_ADDR + 0x4400UL)			/* TIM10 Base Address	*/
#define TIM11_BASE_ADDR				(APB2_BASE_ADDR + 0x4800UL)			/* TIM11 Base Address	*/

#define SAI1_BASE_ADDR				(APB2_BASE_ADDR + 0x5800UL)			/* SAI1 Base Address	*/
#define SAI2_BASE_ADDR				(APB2_BASE_ADDR + 0x5C00UL)			/* SAI2 Base Address	*/

/*
 *  AHB1 Peripherals Base Addresses
 *
 */

#define GPIOA_BASE_ADDR				(AHB1_BASE_ADDR + 0x0000UL)		/* GPIOA Base Address 	 				 */
#define GPIOB_BASE_ADDR				(AHB1_BASE_ADDR + 0x0400UL)		/* GPIOB Base Address 					 */
#define GPIOC_BASE_ADDR				(AHB1_BASE_ADDR + 0x0800UL)		/* GPIOC Base Address					 */
#define GPIOD_BASE_ADDR				(AHB1_BASE_ADDR + 0x0C00UL)		/* GPIOD Base Address					 */
#define GPIOE_BASE_ADDR				(AHB1_BASE_ADDR + 0x1000UL)		/* GPIOE Base Address 					 */
#define GPIOF_BASE_ADDR				(AHB1_BASE_ADDR + 0x1400UL)		/* GPIOF Base Address					 */
#define GPIOG_BASE_ADDR				(AHB1_BASE_ADDR + 0x1800UL)		/* GPIOG Base Address 					 */
#define GPIOH_BASE_ADDR				(AHB1_BASE_ADDR + 0x1C00UL)		/* GPIOH Base Address 					 */

#define CRC_BASE_ADDR				(AHB1_BASE_ADDR + 0x3000UL)		/* CRC Base Address 					 */
#define RCC_BASE_ADDR				(AHB1_BASE_ADDR + 0x3800UL)		/* RCC Base Address 					 */

#define FIR_BASE_ADDR				(AHB1_BASE_ADDR + 0x3C00UL)		/* Flash Interface Register Base Address */

#define BKPSRAM_BASE_ADDR			(AHB1_BASE_ADDR + 0x4000UL)		/* BKPSRAM Base Address 				 */

#define DMA1_BASE_ADDR				(AHB1_BASE_ADDR + 0x6000UL)		/* DMA1 Base Address 					 */
#define DMA2_BASE_ADDR				(AHB1_BASE_ADDR + 0x6400UL)		/* DMA2 Base Address 					 */

#define USB_OTG_HS_BASE_ADDR		(AHB1_BASE_ADDR + 0x20000UL)	/* USB OTG HS Base Address 				 */


/*
 *  AHB2 Peripherals Base Addresses
 *
 */

#define USB_OTG_FS_BASE_ADDR		(AHB2_BASE_ADDR + 0x0000UL)		/* USB OTG FS Base Address 				 */
#define DCMI_BASE_ADDR				(AHB2_BASE_ADDR + 0x50000UL)	/* DCMI Base Address 					 */


/*
 * 	Peripheral Structure Definitions
 *
 */

typedef struct
{
	__IO uint32_t MODER;		/*!< GPIO port mode register 							Address offset: 0x00  				*/
	__IO uint32_t OTYPER;		/*!< GPIO port output type register 					Address offset: 0x04 				*/
	__IO uint32_t OSPEEDER;		/*!< GPIO port output speed register 					Address offset: 0x08				*/
	__IO uint32_t PUPDR;		/*!< GPIO port pull-up/pull-down register 				Address offset: 0x0C				*/
	__IO uint32_t IDR;			/*!< GPIO port input data register 						Address offset: 0x10				*/
	__IO uint32_t ODR;			/*!< GPIO port output data register 					Address offset: 0x14				*/
	__IO uint32_t BSRR;			/*!< GPIO port bit set/reset register 					Address offset: 0x18				*/
	__IO uint32_t LCKR;			/*!< GPIO port bit set/reset register 					Address offset: 0x1C				*/
	__IO uint32_t AFR[2];		/*!< GPIO alternate function low and high register		Address offset: 0x20				*/

}GPIO_TypeDef_t;


typedef struct
{
	__IO uint32_t CR;			/*!< RCC clock control register 										Address offset: 0x00  				*/
	__IO uint32_t PLLCFGR;		/*!< RCC PLL configuration register										Address offset: 0x04				*/
	__IO uint32_t CFGR;			/*!< RCC clock configuration register									Address offset: 0x08				*/
	__IO uint32_t CIR;			/*!< RCC clock interrupt register										Address offset: 0x0C				*/
	__IO uint32_t AHB1RSTR;		/*!< RCC AHB1 peripheral reset register									Address offset: 0x10				*/
	__IO uint32_t AHB2RSTR;		/*!< RCC AHB2 peripheral reset register									Address offset: 0x14				*/
	__IO uint32_t AHB3RSTR;		/*!< RCC AHB3 peripheral reset register									Address offset: 0x18				*/
	__IO uint32_t RESERVED0;	/*!< Reserved 0															Address offset: 0x1C									*/
	__IO uint32_t APB1RSTR;		/*!< RCC APB1 peripheral reset register									Address offset: 0x20				*/
	__IO uint32_t APB2RSTR;		/*!< RCC APB2 peripheral reset register									Address offset: 0x24				*/
	__IO uint32_t RESERVED1[2];	/*!< Reserver1[0] & Reserved1[1]										Address offset: 0x28									*/
	__IO uint32_t AHB1ENR;		/*!< RCC AHB1 peripheral clock enable register							Address offset: 0x30				*/
	__IO uint32_t AHB2ENR;		/*!< RCC AHB2 peripheral clock enable register							Address offset: 0x34				*/
	__IO uint32_t AHB3ENR;		/*!< RCC AHB3 peripheral clock enable register							Address offset: 0x38				*/
	__IO uint32_t RESERVED2;	/*!< Reserved 2															Address offset: 0x3C									*/
	__IO uint32_t APB1ENR;		/*!< RCC APB1 peripheral clock enable register							Address offset: 0x40				*/
	__IO uint32_t APB2ENR;		/*!< APB2 peripheral clock enable register								Address offset: 0x44				*/
	__IO uint32_t RESERVED3[2];	/*!< Reserver3[0] and Reserved[1]										Address offset: 0x48									*/
	__IO uint32_t AHB1LPENR;	/*!< RCC AHB1 peripheral clock enable in low power mode register		Address offset: 0x50				*/
	__IO uint32_t AHB2LPENR;	/*!< RCC AHB2 peripheral clock enable in low power mode register 		Address offset: 0x54				*/
	__IO uint32_t AHB3LPENR;	/*!< RCC AHB3 peripheral clock enable in low power mode register 		Address offset: 0x58				*/
	__IO uint32_t RESERVED4;	/*!< Reserved 4															Address offset: 0x5C									*/
	__IO uint32_t APB1LPENR;	/*!< RCC APB1 peripheral clock enable in low power mode register		Address offset: 0x60				*/
	__IO uint32_t APB2LPENR;	/*!< RCC APB2 peripheral clock enabled in low power mode register		Address offset: 0x64				*/
	__IO uint32_t RESERVED5[2];	/*!< Reserved5[0] and Reserved[1]										Address offset: 0x68									*/
	__IO uint32_t BDCR;			/*!< RCC Backup domain control register									Address offset: 0x70				*/
	__IO uint32_t CSR;			/*!< RCC clock control & status register								Address offset: 0x74				*/
	__IO uint32_t RESERVED6[2];	/*!< Reserverd6[0] and Reserved6[1]										Address offset: 0x78									*/
	__IO uint32_t SSCGR;		/*!< RCC spread spectrum clock generation register 						Address offset: 0x80				*/
	__IO uint32_t PLLI2SCFGR;	/*!< RCC PLLI2S configuration register									Address offset: 0x84				*/
	__IO uint32_t PLLSAICFGR;	/*!< RCC PLL configuration register										Address offset: 0x88				*/
	__IO uint32_t DCKCFGR;		/*!< RCC dedicated clock configuration register							Address offset: 0x8C				*/
	__IO uint32_t CKGATENR;		/*!< RCC clocks gated enable register									Address offset: 0x90				*/
	__IO uint32_t DCKCFGR2;		/*!< RCC dedicated clocks configuration register 2						Address offset: 0x94				*/


}RCC_TypeDef_t;

#define GPIOA									((GPIO_TypeDef_t *)(GPIOA_BASE_ADDR))
#define GPIOB									((GPIO_TypeDef_t *)(GPIOB_BASE_ADDR))
#define GPIOC									((GPIO_TypeDef_t *)(GPIOC_BASE_ADDR))
#define GPIOD									((GPIO_TypeDef_t *)(GPIOD_BASE_ADDR))
#define GPIOE									((GPIO_TypeDef_t *)(GPIOE_BASE_ADDR))
#define GPIOF									((GPIO_TypeDef_t *)(GPIOF_BASE_ADDR))
#define GPIOG									((GPIO_TypeDef_t *)(GPIOG_BASE_ADDR))
#define GPIOH									((GPIO_TypeDef_t *)(GPIOH_BASE_ADDR))

#define RCC										((RCC_TypeDef_t  *)(RCC_BASE_ADDR)  )


#define RCC_AHB1ENR_GPIOAEN_Pos					(0U)									// RCC AHB1ENR register GPIOAEN Bit Position
#define RCC_AHB1ENR_GPIOAEN_Msk					(0x1 << RCC_AHB1ENR_GPIOAEN_Pos)		// RCC AHB1ENR register GPIOAEN Bit Mask
#define RCC_AHB1ENR_GPIOAEN						RCC_AHB1ENR_GPIOAEN_Msk					// RCC AHB1ENR register GPIOAEN	Macro


#define RCC_AHB1ENR_GPIOBEN_Pos					(1U)									// RCC AHB1ENR register GPIOBEN Bit Position
#define RCC_AHB1ENR_GPIOBEN_Msk					(0x1 << RCC_AHB1ENR_GPIOBEN_Pos)		// RCC AHB1ENR register GPIOBEN Bit Mask
#define RCC_AHB1ENR_GPIOBEN						(RCC_AHB1ENR_GPIOBEN_Msk)				// RCC AHB1ENR register GPIOENB Macro


#define RCC_AHB1ENR_GPIOCEN_Pos					(2U)									// RCC AHB1ENR register GPIOCEN Bit Position
#define RCC_AHB1ENR_GPIOCEN_Msk					(0x1 << RCC_AHB1ENR_GPIOCEN_Pos)		// RCC AHB1ENR register GPIOCEN Bit Mask
#define RCC_AHB1ENR_GPIOCEN						(RCC_AHB1ENR_GPIOCEN_Msk)				// RCC AHB1ENR register GPIOCEN Macro

#define RCC_AHB1ENR_GPIODEN_Pos					(3U)									// RCC AHB1ENR register GPIODEN Bit Position
#define RCC_AHB1ENR_GPIODEN_Msk					(0x1 << RCC_AHB1ENR_GPIODEN_Pos)		// RCC AHB1ENR register GPIODEN Bit Mask
#define RCC_AHB1ENR_GPIODEN						(RCC_AHB1ENR_GPIODEN_Msk)				// RCC AHB1ENR register GPIODEN Macro

#define RCC_AHB1ENR_GPIOEEN_Pos					(4U)									// RCC AHB1ENR register GPIOEEN Bit Position
#define RCC_AHB1ENR_GPIOEEN_Msk					(0x1 << RCC_AHB1ENR_GPIOEEN_Pos)		// RCC AHB1ENR register GPIOEEN Bit Mask
#define RCC_AHB1ENR_GPIOEEN						(RCC_AHB1ENR_GPIOEEN_Msk)				// RCC AHB1ENR register GPIOEEN Macro

#define RCC_AHB1ENR_GPIOFEN_Pos					(5U)									// RCC AHB1ENR register GPIOFEN Bit Position
#define RCC_AHB1ENR_GPIOFEN_Msk					(0x1 << RCC_AHB1ENR_GPIOFEN_Pos)		// RCC AHB1ENR register GPIOFEN Bit Mask
#define RCC_AHB1ENR_GPIOFEN						(RCC_AHB1ENR_GPIOFEN_Msk)				// RCC AHB1ENR register GPIOFEN Macro

#define RCC_AHB1ENR_GPIOGEN_Pos					(6U)									// RCC AHB1ENR register GPIOGEN Bit Position
#define RCC_AHB1ENR_GPIOGEN_Msk					(0x1 << RCC_AHB1ENR_GPIOGEN_Pos)		// RCC AHB1ENR register GPIOGEN Bit Mask
#define RCC_AHB1ENR_GPIOGEN						(RCC_AHB1ENR_GPIOGEN_Msk)				// RCC AHB1ENR register GPIOGEN Macro

#define RCC_AHB1ENR_GPIOHEN_Pos					(7U)									// RCC AHB1ENR register GPIOHEN Bit Position
#define RCC_AHB1ENR_GPIOHEN_Msk					(0x1 << RCC_AHB1ENR_GPIOHEN_Pos)		// RCC AHB1ENR register GPIOHEN Bit Mask
#define RCC_AHB1ENR_GPIOHEN						(RCC_AHB1ENR_GPIOHEN_Msk)				// RCC AHB1ENR register GPIOHEN Macro


#define RCC_AHB1ENR_CRCEN_Pos					(12U)									// RCC AHB1ENR register CRCEN Bit Position
#define RCC_AHB1ENR_CRCEN_Msk					(0x1 << RCC_AHB1ENR_CRCEN_Pos)			// RCC AHB1ENR register CRCEN Bit Mask
#define RCC_AHB1ENR_CRCEN						(RCC_AHB1ENR_CRCEN_Msk)					// RCC AHB1ENR register CRCEN Macro

#define RCC_AHB1ENR_BKPSRAMEN_Pos				(18U)									// RCC AHB1ENR register BKPSRAMEN Bit Position
#define RCC_AHB1ENR_BKPSRAMEN_Msk				(0x1 << RCC_AHB1ENR_BKPSRAMEN_Pos)		// RCC AHB1ENR register BKPSRAMEN Bit Mask
#define RCC_AHB1ENR_BKPSRAMEN					(RCC_AHB1ENR_BKPSRAMEN_Msk)				// RCC AHB1ENR register BKPSRAMEN Macro

#define RCC_AHB1ENR_DMA1EN_Pos					(21U)									// RCC AHB1ENR register DMA1EN Bit Position
#define RCC_AHB1ENR_DMA1EN_Msk					(0x1 << RCC_AHB1ENR_DMA1EN_Pos)			// RCC AHB1ENR register DMA1EN Bit Mask
#define RCC_AHB1ENR_DMA1EN						(RCC_AHB1ENR_DMA1EN_Msk)				// RCC AHB1ENR register DMA1EN Macro

#define RCC_AHB1ENR_DMA2EN_Pos					(22U)									// RCC AHB1ENR register DMA2EN Bit Position
#define RCC_AHB1ENR_DMA2EN_Msk					(0x1 << RCC_AHB1ENR_DMA2EN_Pos)			// RCC AHB1ENR register DMA2EN Bit Mask
#define RCC_AHB1ENR_DMA2EN						(RCC_AHB1ENR_DMA2EN_Msk)				// RCC AHB1ENR register DMA2EN Macro

#define RCC_AHB1ENR_OTGHSEN_Pos 				(29U)									// RCC AHB1ENR register OTGHSEN Bit Position
#define RCC_AHB1ENR_OTGHSEN_Msk					(0x1 << RCC_AHB1ENR_OTGHSEN_Pos)		// RCC AHB1ENR register OTGHSEN Bit Mask
#define RCC_AHB1ENR_OTGHSEN						(RCC_AHB1ENR_OTGHSEN_Msk)				// RCC AHB1ENR register OTGHSEN Macro

#define RCC_AHB1ENR_OTGHSULPIEN_Pos				(30U)									// RCC AHB1ENR register OTGHSULPIEN Bit Position
#define RCC_AHB1ENR_OTGHSULPIEN_Msk				(0x1 << RCC_AHB1ENR_OTGHSULPIEN_Pos)	// RCC AHB1ENR register OTGHSUPLIEN Bit Mask
#define RCC_AHB1ENR_OTGHSULPIEN					(RCC_AHB1ENR_OTGHSULPIEN_Msk)			// RCC AHB1ENR register OTGHSULPIEN Macro
















#include "RCC.h"
#include "GPIO.h"

#endif /* INC_STM32F446XX_H_ */
