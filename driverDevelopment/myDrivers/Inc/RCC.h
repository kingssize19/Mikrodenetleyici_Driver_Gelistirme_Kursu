#ifndef INC_RCC_H_
#define INC_RCC_H_

#include "stm32f446xx.h"

/*
 *
 *
 * 	RCC AHB1 Peripherals Clock Control Macro Definitions
 *
 *
 */




#define RCC_GPIOA_CLK_ENABLE()			do{ uint32_t tempValue = 0;	\
											SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOAEN);		\
											tempValue = READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOAEN);		\
											UNUSED(tempValue);		\
										   }while(0);


#define RCC_GPIOB_CLK_ENABLE()			do{ uint32_t tempValue = 0; \
											SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOBEN);		\
											tempValue = READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOBEN);	\
											UNUSED(tempValue);			\
										  }while(0);

#define RCC_GPIOC_CLK_ENABLE()			do{ uint32_t tempValue = 0;   \
											SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOCEN);		\
											tempValue = READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOCEN);	\
											UNUSED(tempValue);	\
										  }while(0);

#define RCC_GPIOD_CLK_ENABLE()			do{ uint32_t tempValue = 0;   \
											SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIODEN); \
											tempValue = READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIODEN); \
											UNUSED(tempValue);  \
										  }while(0);

#define RCC_GPIOE_CLK_ENABLE()			do{ uint32_t tempValue = 0;		\
											SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOEEN);		\
											tempValue = READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOEEN);   \
											UNUSED(tempValue);  \
										  }while(0);

#define RCC_GPIOF_CLK_ENABLE()			do{ uint32_t tempValue = 0;		\
											SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOFEN); \
											tempValue = READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOFEN);  \
											UNUSED(tempValue);		\
										  }while(0);

#define RCC_GPIOG_CLK_ENABLE()			do{ uint32_t tempValue = 0;   \
											SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOGEN);   \
											tempValue = READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOGEN);	\
											UNUSED(tempValue);		\
										  }while(0);

#define RCC_GPIOH_CLK_ENABLE()			do{ uint32_t tempValue = 0;		\
											SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOHEN);   \
											tempValue = READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOHEN);  \
											UNUSED(tempValue);		\
										  }while(0);

#define RCC_CRCEN_CLK_ENABLE()			do{ uint32_t tempValue = 0;		\
											SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_CRCEN);  \
											tempValue = READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_CRCEN);  \
											UNUSED(tempValue);		\
										  }while(0);

#define RCC_BKPSRAMEN_CLK_ENABLE()		do{ uint32_t tempValue = 0;   \
											SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_BKPSRAMEN);	\
											tempValue = READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_BKPSRAMEN);  \
											UNUSED(tempValue);		\
										  }while(0);

#define RCC_DMA1EN_CLK_ENABLE()			do{ uint32_t tempValue = 0;  \
											SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_DMA1EN);  \
											tempValue = READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_DMA1EN);  \
											UNUSED(tempValue);		\
										  }while(0);

#define RCC_DMA2EN_CLK_ENABLE()			do{ uint32_t tempValue = 0;  \
											SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_DMA2EN);	\
											tempValue = READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_DMA2EN); \
											UNUSED(tempValue);  \
										  }while(0);

#define RCC_OTGHSEN_CLK_ENABLE()		do{ uint32_t tempValue = 0;   \
											SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_OTGHSEN);  \
											tempValue = READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_OTGHSEN);  \
											UNUSED(tempValue);  \
										  }while(0);

#define RCC_OTGHSULPIEN_CLK_ENABLE()	do{ uint32_t tempValue = 0;  \
											SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_OTGHSULPIEN); \
											tempValue = READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_OTGHSULPIEN); \
											UNUSED(tempValue);		\
										  }while(0);


#define RCC_GPIOA_CLK_DISABLE()				CLEAR_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOAEN)
#define RCC_GPIOB_CLK_DISABLE()				CLEAR_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOBEN)
#define RCC_GPIOC_CLK_DISABLE()				CLEAR_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOCEN)
#define RCC_GPIOD_CLK_DISABLE()				CLEAR_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIODEN)
#define RCC_GPIOE_CLK_DISABLE()				CLEAR_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOEEN)
#define RCC_GPIOF_CLK_DISABLE()				CLEAR_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOFEN)
#define RCC_GPIOG_CLK_DISABLE()				CLEAR_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOGEN)
#define RCC_GPIOH_CLK_DISABLE()				CLEAR_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOHEN)
#define RCC_CRCEN_CLK_DISABLE()				CLEAR_BIT(RCC->AHB1ENR, RCC_AHB1ENR_CRCEN)
#define RCC_BKPSRAMEN_CLK_DISABLE()			CLEAR_BIT(RCC->AHB1ENR, RCC_AHB1ENR_BKPSRAMEN)
#define RCC_DMA1EN_CLK_DISABLE()			CLEAR_BIT(RCC->AHB1ENR, RCC_AHB1ENR_DMA1EN)
#define RCC_DMA2EN_CLK_DISABLE()			CLEAR_BIT(RCC->AHB1ENR, RCC_AHB1ENR_DMA2EN)
#define RCC_OTGHSEN_CLK_DISABLE()			CLEAR_BIT(RCC->AHB1ENR, RCC_AHB1ENR_OTGHSEN)
#define RCC_OTGHSULPIEN_CLK_DISABLE()		CLEAR_BIT(RCC->AHB1ENR, RCC_AHB1ENR_OTGHSULPIEN)





















#endif /* INC_RCC_H_ */
