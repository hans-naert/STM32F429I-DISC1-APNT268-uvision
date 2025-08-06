/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 06/08/2025 20:56:59
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated with a generator out of the
 *               STM32CubeMX project and its generated files (DO NOT EDIT!)
 ******************************************************************************/

#ifndef MX_DEVICE_H__
#define MX_DEVICE_H__

/* MX_Device.h version */
#define MX_DEVICE_VERSION                       0x01000000


/*------------------------------ I2C3           -----------------------------*/
#define MX_I2C3                                 1

/* Filter Settings */
#define MX_I2C3_ANF_ENABLE                      1
#define MX_I2C3_DNF                             0

/* Peripheral Clock Frequency */
#define MX_I2C3_PERIPH_CLOCK_FREQ               42000000

/* Pins */

/* I2C3_SCL */
#define MX_I2C3_SCL_Pin                         PA8
#define MX_I2C3_SCL_GPIO_Pin                    GPIO_PIN_8
#define MX_I2C3_SCL_GPIOx                       GPIOA
#define MX_I2C3_SCL_GPIO_Mode                   GPIO_MODE_AF_OD
#define MX_I2C3_SCL_GPIO_PuPd                   GPIO_NOPULL
#define MX_I2C3_SCL_GPIO_Speed                  GPIO_SPEED_FREQ_HIGH
#define MX_I2C3_SCL_GPIO_AF                     GPIO_AF4_I2C3

/* I2C3_SDA */
#define MX_I2C3_SDA_Pin                         PC9
#define MX_I2C3_SDA_GPIO_Pin                    GPIO_PIN_9
#define MX_I2C3_SDA_GPIOx                       GPIOC
#define MX_I2C3_SDA_GPIO_Mode                   GPIO_MODE_AF_OD
#define MX_I2C3_SDA_GPIO_PuPd                   GPIO_NOPULL
#define MX_I2C3_SDA_GPIO_Speed                  GPIO_SPEED_FREQ_HIGH
#define MX_I2C3_SDA_GPIO_AF                     GPIO_AF4_I2C3

/*------------------------------ SPI5           -----------------------------*/
#define MX_SPI5                                 1

/* Peripheral Clock Frequency */
#define MX_SPI5_PERIPH_CLOCK_FREQ               84000000

/* Pins */

/* SPI5_MISO */
#define MX_SPI5_MISO_Pin                        PF8
#define MX_SPI5_MISO_GPIO_Pin                   GPIO_PIN_8
#define MX_SPI5_MISO_GPIOx                      GPIOF
#define MX_SPI5_MISO_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SPI5_MISO_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI5_MISO_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_SPI5_MISO_GPIO_AF                    GPIO_AF5_SPI5

/* SPI5_MOSI */
#define MX_SPI5_MOSI_Pin                        PF9
#define MX_SPI5_MOSI_GPIO_Pin                   GPIO_PIN_9
#define MX_SPI5_MOSI_GPIOx                      GPIOF
#define MX_SPI5_MOSI_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SPI5_MOSI_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI5_MOSI_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_SPI5_MOSI_GPIO_AF                    GPIO_AF5_SPI5

/* SPI5_SCK */
#define MX_SPI5_SCK_Pin                         PF7
#define MX_SPI5_SCK_GPIO_Pin                    GPIO_PIN_7
#define MX_SPI5_SCK_GPIOx                       GPIOF
#define MX_SPI5_SCK_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_SPI5_SCK_GPIO_PuPd                   GPIO_NOPULL
#define MX_SPI5_SCK_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_SPI5_SCK_GPIO_AF                     GPIO_AF5_SPI5

/*------------------------------ USART1         -----------------------------*/
#define MX_USART1                               1

/* Virtual mode */
#define MX_USART1_VM                            VM_ASYNC
#define MX_USART1_VM_ASYNC                      1

/* Pins */

/* USART1_RX */
#define MX_USART1_RX_Pin                        PA10
#define MX_USART1_RX_GPIO_Pin                   GPIO_PIN_10
#define MX_USART1_RX_GPIOx                      GPIOA
#define MX_USART1_RX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART1_RX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART1_RX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART1_RX_GPIO_AF                    GPIO_AF7_USART1

/* USART1_TX */
#define MX_USART1_TX_Pin                        PA9
#define MX_USART1_TX_GPIO_Pin                   GPIO_PIN_9
#define MX_USART1_TX_GPIOx                      GPIOA
#define MX_USART1_TX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART1_TX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART1_TX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART1_TX_GPIO_AF                    GPIO_AF7_USART1

/*------------------------------ USB_OTG_HS     -----------------------------*/
#define MX_USB_OTG_HS                           1

/* Handle */
#define MX_USB_OTG_HS_HANDLE                    hhcd_USB_OTG_HS

/* Virtual mode */
#define MX_USB_OTG_HS_VM                        Host_FS
#define MX_USB_OTG_HS_Host_FS                   1

/* Pins */

/* USB_OTG_HS_DM */
#define MX_USB_OTG_HS_DM_Pin                    PB14
#define MX_USB_OTG_HS_DM_GPIO_Pin               GPIO_PIN_14
#define MX_USB_OTG_HS_DM_GPIOx                  GPIOB
#define MX_USB_OTG_HS_DM_GPIO_Mode              GPIO_MODE_AF_PP
#define MX_USB_OTG_HS_DM_GPIO_PuPd              GPIO_NOPULL
#define MX_USB_OTG_HS_DM_GPIO_Speed             GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_HS_DM_GPIO_AF                GPIO_AF12_OTG_HS_FS

/* USB_OTG_HS_DP */
#define MX_USB_OTG_HS_DP_Pin                    PB15
#define MX_USB_OTG_HS_DP_GPIO_Pin               GPIO_PIN_15
#define MX_USB_OTG_HS_DP_GPIOx                  GPIOB
#define MX_USB_OTG_HS_DP_GPIO_Mode              GPIO_MODE_AF_PP
#define MX_USB_OTG_HS_DP_GPIO_PuPd              GPIO_NOPULL
#define MX_USB_OTG_HS_DP_GPIO_Speed             GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_HS_DP_GPIO_AF                GPIO_AF12_OTG_HS_FS

/* USB_OTG_HS_VBUS */
#define MX_USB_OTG_HS_VBUS_Pin                  PB13
#define MX_USB_OTG_HS_VBUS_GPIO_Pin             GPIO_PIN_13
#define MX_USB_OTG_HS_VBUS_GPIOx                GPIOB
#define MX_USB_OTG_HS_VBUS_GPIO_Mode            GPIO_MODE_INPUT
#define MX_USB_OTG_HS_VBUS_GPIO_PuPd            GPIO_NOPULL

#endif  /* MX_DEVICE_H__ */
