/*
 * WS2812B.c
 *
 *  Created on: Oct 1, 2024
 *      Author: m-ren
 */

#include <stdint.h>
#include "stm32f3xx_hal.h"
#include "WS2812B.h"

void wait_290us(TIM_HandleTypeDef *htim){
	//activate timer only for the first time
	static int executed = 0;
	if(executed == 0){
		HAL_TIM_Base_Start(htim);
	}
	executed++;
	//wait for 290us
	htim->Instance->CNT = 0;
	while((htim->Instance->CNT)<290);
}

void WS2812B_red (SPI_HandleTypeDef *hspi, TIM_HandleTypeDef *htim, uint8_t led_number,uint8_t quantity_of_light)
{
	float potion = (float)(quantity_of_light/100);

	uint8_t red = (uint8_t)(255*potion);
	uint8_t green = (uint8_t)(0*potion);
	uint8_t blue = (uint8_t)(0*potion);

	uint32_t color = green<<16 | red<<8 | blue;
	uint8_t sendData[24*led_number];

	for(int i=0; i<led_number; i++){
		for(int j=0; j<24; j++){
			if (((color>>(23-j))&0x01) == 1) {
				sendData[i*24 + j] = 0b11000000;  // store 1
			}
			else{
				sendData[i*24 + j] = 0b10000000;  // store 0
			}
		}
	}

	HAL_SPI_Transmit(hspi, sendData, 24*led_number, 1000);
	wait_290us(htim);
}

void WS2812B_orange (SPI_HandleTypeDef *hspi, TIM_HandleTypeDef *htim, uint8_t led_number,uint8_t quantity_of_light)
{
	float potion = (float)(quantity_of_light/100);

	uint8_t red = (uint8_t)(255*potion);
	uint8_t green = (uint8_t)(16*potion);
	uint8_t blue = (uint8_t)(0*potion);

	uint32_t color = green<<16 | red<<8 | blue;
	uint8_t sendData[24*led_number];

	for(int i=0; i<led_number; i++){
		for(int j=0; j<24; j++){
			if (((color>>(23-j))&0x01) == 1) {
				sendData[i*24 + j] = 0b11000000;  // store 1
			}
			else{
				sendData[i*24 + j] = 0b10000000;  // store 0
			}
		}
	}

	HAL_SPI_Transmit(hspi, sendData, 24*led_number, 1000);
	wait_290us(htim);
}

void WS2812B_yellow (SPI_HandleTypeDef *hspi, TIM_HandleTypeDef *htim, uint8_t led_number,uint8_t quantity_of_light)
{
	float potion = (float)(quantity_of_light/100);

	uint8_t red = (uint8_t)(255*potion);
	uint8_t green = (uint8_t)(255*potion);
	uint8_t blue = (uint8_t)(0*potion);

	uint32_t color = green<<16 | red<<8 | blue;
	uint8_t sendData[24*led_number];

	for(int i=0; i<led_number; i++){
		for(int j=0; j<24; j++){
			if (((color>>(23-j))&0x01) == 1) {
				sendData[i*24 + j] = 0b11000000;  // store 1
			}
			else{
				sendData[i*24 + j] = 0b10000000;  // store 0
			}
		}
	}

	HAL_SPI_Transmit(hspi, sendData, 24*led_number, 1000);
	wait_290us(htim);
}

void WS2812B_green (SPI_HandleTypeDef *hspi, TIM_HandleTypeDef *htim, uint8_t led_number,uint8_t quantity_of_light)
{
	float potion = (float)(quantity_of_light/100);

	uint8_t red = (uint8_t)(0*potion);
	uint8_t green = (uint8_t)(255*potion);
	uint8_t blue = (uint8_t)(0*potion);

	uint32_t color = green<<16 | red<<8 | blue;
	uint8_t sendData[24*led_number];

	for(int i=0; i<led_number; i++){
		for(int j=0; j<24; j++){
			if (((color>>(23-j))&0x01) == 1) {
				sendData[i*24 + j] = 0b11000000;  // store 1
			}
			else{
				sendData[i*24 + j] = 0b10000000;  // store 0
			}
		}
	}

	HAL_SPI_Transmit(hspi, sendData, 24*led_number, 1000);
	wait_290us(htim);
}

void WS2812B_light_blue (SPI_HandleTypeDef *hspi, TIM_HandleTypeDef *htim, uint8_t led_number,uint8_t quantity_of_light)
{
	float potion = (float)(quantity_of_light/100);

	uint8_t red = (uint8_t)(0*potion);
	uint8_t green = (uint8_t)(255*potion);
	uint8_t blue = (uint8_t)(255*potion);

	uint32_t color = green<<16 | red<<8 | blue;
	uint8_t sendData[24*led_number];

	for(int i=0; i<led_number; i++){
		for(int j=0; j<24; j++){
			if (((color>>(23-j))&0x01) == 1) {
				sendData[i*24 + j] = 0b11000000;  // store 1
			}
			else{
				sendData[i*24 + j] = 0b10000000;  // store 0
			}
		}
	}

	HAL_SPI_Transmit(hspi, sendData, 24*led_number, 1000);
	wait_290us(htim);
}

void WS2812B_blue (SPI_HandleTypeDef *hspi, TIM_HandleTypeDef *htim, uint8_t led_number,uint8_t quantity_of_light)
{
	float potion = (float)(quantity_of_light/100);

	uint8_t red = (uint8_t)(0*potion);
	uint8_t green = (uint8_t)(0*potion);
	uint8_t blue = (uint8_t)(255*potion);

	uint32_t color = green<<16 | red<<8 | blue;
	uint8_t sendData[24*led_number];

	for(int i=0; i<led_number; i++){
		for(int j=0; j<24; j++){
			if (((color>>(23-j))&0x01) == 1) {
				sendData[i*24 + j] = 0b11000000;  // store 1
			}
			else{
				sendData[i*24 + j] = 0b10000000;  // store 0
			}
		}
	}

	HAL_SPI_Transmit(hspi, sendData, 24*led_number, 1000);
	wait_290us(htim);
}

void WS2812B_purple (SPI_HandleTypeDef *hspi, TIM_HandleTypeDef *htim, uint8_t led_number,uint8_t quantity_of_light)
{
	float potion = (float)(quantity_of_light/100);

	uint8_t red = (uint8_t)(255*potion);
	uint8_t green = (uint8_t)(0*potion);
	uint8_t blue = (uint8_t)(255*potion);

	uint32_t color = green<<16 | red<<8 | blue;
	uint8_t sendData[24*led_number];

	for(int i=0; i<led_number; i++){
		for(int j=0; j<24; j++){
			if (((color>>(23-j))&0x01) == 1) {
				sendData[i*24 + j] = 0b11000000;  // store 1
			}
			else{
				sendData[i*24 + j] = 0b10000000;  // store 0
			}
		}
	}

	HAL_SPI_Transmit(hspi, sendData, 24*led_number, 1000);
	wait_290us(htim);
}

void WS2812B_white (SPI_HandleTypeDef *hspi, TIM_HandleTypeDef *htim, uint8_t led_number,uint8_t quantity_of_light)
{
	float potion = (float)(quantity_of_light/100);

	uint8_t red = (uint8_t)(255*potion);
	uint8_t green = (uint8_t)(255*potion);
	uint8_t blue = (uint8_t)(255*potion);

	uint32_t color = green<<16 | red<<8 | blue;
	uint8_t sendData[24*led_number];

	for(int i=0; i<led_number; i++){
		for(int j=0; j<24; j++){
			if (((color>>(23-j))&0x01) == 1) {
				sendData[i*24 + j] = 0b11000000;  // store 1
			}
			else{
				sendData[i*24 + j] = 0b10000000;  // store 0
			}
		}
	}

	HAL_SPI_Transmit(hspi, sendData, 24*led_number, 1000);
	wait_290us(htim);
}
