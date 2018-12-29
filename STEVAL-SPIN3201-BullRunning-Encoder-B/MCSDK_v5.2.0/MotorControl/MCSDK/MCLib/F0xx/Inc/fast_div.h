/**
  ******************************************************************************
  * @file    fast_div.h
  * @author  Motor Control SDK Team, ST Microelectronics
  * @brief   This file contains all definitions and functions prototypes for the
  *          Fast Division component of the Motor Control SDK.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2018 STMicroelectronics International N.V.
  * All rights reserved.</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without
  * modification, are permitted, provided that the following conditions are met:
  *
  * 1. Redistribution of source code must retain the above copyright notice,
  *    this list of conditions and the following disclaimer.
  * 2. Redistributions in binary form must reproduce the above copyright notice,
  *    this list of conditions and the following disclaimer in the documentation
  *    and/or other materials provided with the distribution.
  * 3. Neither the name of STMicroelectronics nor the names of other
  *    contributors to this software may be used to endorse or promote products
  *    derived from this software without specific written permission.
  * 4. This software, including modifications and/or derivative works of this
  *    software, must execute solely and exclusively on microcontroller or
  *    microprocessor devices manufactured by or for STMicroelectronics.
  * 5. Redistribution and use of this software other than as permitted under
  *    this license is void and will automatically terminate your rights under
  *    this license.
  *
  * THIS SOFTWARE IS PROVIDED BY STMICROELECTRONICS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS, IMPLIED OR STATUTORY WARRANTIES, INCLUDING, BUT NOT
  * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
  * PARTICULAR PURPOSE AND NON-INFRINGEMENT OF THIRD PARTY INTELLECTUAL PROPERTY
  * RIGHTS ARE DISCLAIMED TO THE FULLEST EXTENT PERMITTED BY LAW. IN NO EVENT
  * SHALL STMICROELECTRONICS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
  * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
  * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
  * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
  * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
  * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  * @ingroup FD
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __FAST_DIV_H
#define __FAST_DIV_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* Includes ------------------------------------------------------------------*/
#include "mc_type.h"

/** @addtogroup MCSDK
  * @{
  */

/** @addtogroup FD
  * @{
  */

/* Exported constants --------------------------------------------------------*/
/// Number of divisors that can be stored for fast division
#define FD_MAX_FDIV 5

/* Exported types ------------------------------------------------------------*/

/// Magic number structure (used for software fast division)
typedef struct
{
  int32_t M;
  int32_t s;
  int32_t d;
} FD_FastDivMagicNumber_t;

/// Handle structure of the Fast Division component
typedef struct
{
  int8_t fd_div_element;                  /*@< Pointer to the stored dividers buffer.*/
  FD_FastDivMagicNumber_t fd_m[FD_MAX_FDIV]; /*@< Struct of stored magic numbers.*/
} FastDiv_Handle_t;

/* Exported functions ------------------------------------------------------- */

void FD_Init( FastDiv_Handle_t * pHandle );
int32_t FD_FastDiv( FastDiv_Handle_t * pHandle, int32_t n, int32_t d );


/**
  * @}
  */

/**
  * @}
  */

#ifdef __cplusplus
}
#endif /* __cpluplus */

#endif /* __FAST_DIV_H */

/************************ (C) COPYRIGHT 2018 STMicroelectronics *****END OF FILE****/
