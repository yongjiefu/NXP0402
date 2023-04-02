/*
 * Copyright 2019-2020 ,2021 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/

/*! @brief Direction type  */
typedef enum _pin_mux_direction
{
  kPIN_MUX_DirectionInput = 0U,         /* Input direction */
  kPIN_MUX_DirectionOutput = 1U,        /* Output direction */
  kPIN_MUX_DirectionInputOrOutput = 2U  /* Input or output direction */
} pin_mux_direction_t;

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/* GPIO_AD_B0_13 (coord L14), UART1_RXD */
/* Routed pin properties */
#define BOARD_UART1_RXD_PERIPHERAL                                       LPUART1   /*!< Peripheral name */
#define BOARD_UART1_RXD_SIGNAL                                                RX   /*!< Signal name */

/* GPIO_AD_B0_12 (coord K14), UART1_TXD */
/* Routed pin properties */
#define BOARD_UART1_TXD_PERIPHERAL                                       LPUART1   /*!< Peripheral name */
#define BOARD_UART1_TXD_SIGNAL                                                TX   /*!< Signal name */

/* WAKEUP (coord L6), SD_PWREN */
/* Routed pin properties */
#define BOARD_SD_PWREN_PERIPHERAL                                          GPIO5   /*!< Peripheral name */
#define BOARD_SD_PWREN_SIGNAL                                            gpio_io   /*!< Signal name */
#define BOARD_SD_PWREN_CHANNEL                                                0U   /*!< Signal channel */

/* Symbols to be used with GPIO driver */
#define BOARD_SD_PWREN_GPIO                                                GPIO5   /*!< GPIO peripheral base pointer */
#define BOARD_SD_PWREN_GPIO_PIN                                               0U   /*!< GPIO pin number */
#define BOARD_SD_PWREN_GPIO_PIN_MASK                                  (1U << 0U)   /*!< GPIO pin mask */
#define BOARD_SD_PWREN_PORT                                                GPIO5   /*!< PORT peripheral base pointer */
#define BOARD_SD_PWREN_PIN                                                    0U   /*!< PORT pin number */
#define BOARD_SD_PWREN_PIN_MASK                                       (1U << 0U)   /*!< PORT pin mask */

/* GPIO_B0_13 (coord D10), LCDIF_D9/BT_CFG[9] */
/* Routed pin properties */
#define BOARD_LCDIF_D9_PERIPHERAL                                            ARM   /*!< Peripheral name */
#define BOARD_LCDIF_D9_SIGNAL                                      arm_trace_swo   /*!< Signal name */


/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

/* PMIC_STBY_REQ (coord L7), PERI_PWREN */
/* Routed pin properties */
#define BOARD_PERI_PWREN_PERIPHERAL                                        GPIO5   /*!< Peripheral name */
#define BOARD_PERI_PWREN_SIGNAL                                          gpio_io   /*!< Signal name */
#define BOARD_PERI_PWREN_CHANNEL                                              2U   /*!< Signal channel */

/* Symbols to be used with GPIO driver */
#define BOARD_PERI_PWREN_GPIO                                              GPIO5   /*!< GPIO peripheral base pointer */
#define BOARD_PERI_PWREN_GPIO_PIN                                             2U   /*!< GPIO pin number */
#define BOARD_PERI_PWREN_GPIO_PIN_MASK                                (1U << 2U)   /*!< GPIO pin mask */
#define BOARD_PERI_PWREN_PORT                                              GPIO5   /*!< PORT peripheral base pointer */
#define BOARD_PERI_PWREN_PIN                                                  2U   /*!< PORT pin number */
#define BOARD_PERI_PWREN_PIN_MASK                                     (1U << 2U)   /*!< PORT pin mask */


/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_Init_PMIC_STBY_REQ(void);

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/