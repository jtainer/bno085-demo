// 
// STM32 HAL driver for BNO08X IMU
//
// Copyright (c) Jonathan Tainer
//

#include "bno08x.h"

// Callbacks allowing SH2 library to access I2C peripherals
static int imu_open(sh2_Hal_t* hub);
static void imu_close(sh2_Hal_t* self);
static int imu_read(sh2_Hal_t* self, uint8_t* buf, unsigned len, uint32_t* t_us);
static int imu_write(sh2_Hal_t* self, uint8_t* buf, unsigned len);
static int imu_micros(sh2_Hal_t* self);

int bno08x_init(I2C_HandleTypeDef* hi2c, bno08x_t* imu) {
	return 0;
}

int bno08x_read_all(I2C_HandleTypeDef* hi2c, bno08x_t* imu) {
	return 0;
}
