/*
 * WS2812B.h
 *
 *  Created on: Oct 1, 2024
 *      Author: m-ren
 */

#ifndef INC_WS2812B_H_
#define INC_WS2812B_H_

void wait_290us(TIM_HandleTypeDef *htim);
void WS2812B_red(SPI_HandleTypeDef *hspi, TIM_HandleTypeDef *htim, uint8_t led_number, uint8_t quantity_of_light);
void WS2812B_orange(SPI_HandleTypeDef *hspi, TIM_HandleTypeDef *htim, uint8_t led_number, uint8_t quantity_of_light);
void WS2812B_yellow(SPI_HandleTypeDef *hspi, TIM_HandleTypeDef *htim, uint8_t led_number, uint8_t quantity_of_light);
void WS2812B_green(SPI_HandleTypeDef *hspi, TIM_HandleTypeDef *htim, uint8_t led_number, uint8_t quantity_of_light);
void WS2812B_light_blue(SPI_HandleTypeDef *hspi, TIM_HandleTypeDef *htim, uint8_t led_number, uint8_t quantity_of_light);
void WS2812B_blue(SPI_HandleTypeDef *hspi, TIM_HandleTypeDef *htim, uint8_t led_number, uint8_t quantity_of_light);
void WS2812B_purple(SPI_HandleTypeDef *hspi, TIM_HandleTypeDef *htim, uint8_t led_number, uint8_t quantity_of_light);
void WS2812B_white(SPI_HandleTypeDef *hspi, TIM_HandleTypeDef *htim, uint8_t led_number, uint8_t quantity_of_light);

#endif /* INC_WS2812B_H_ */
