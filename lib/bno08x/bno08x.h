// 
// STM32 HAL driver for BNO08X IMU
//
// Copyright (c) Jonathan Tainer
//

#ifndef BNO08X_H
#define BNO08X_H

#include <stdint.h>
#include "main.h"
#include "sh2.h"

#define SH2_MSG_MAX_LEN 128

typedef struct {
	sh2_Hal_t hal;
	uint8_t rx_buf[SH2_MSG_MAX_LEN];
	sh2_Quaternion_t rotation;
} bno08x_t;

int bno08x_init(I2C_HandleTypeDef* hi2c, bno08x_t* imu);

int bno08x_read_all(I2C_HandleTypeDef* hi2c, bno08x_t* imu);

#endif
