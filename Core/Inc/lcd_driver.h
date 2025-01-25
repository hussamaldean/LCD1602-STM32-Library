/*
 * lcd_driver.h
 *
 *  Created on: Jan 25, 2025
 *      Author: root
 */

#ifndef INC_LCD_DRIVER_H_
#define INC_LCD_DRIVER_H_

#include "main.h"

void setCursor(int a, int b);
void lcd_send_string (char *str);
void lcd_init (void);
void lcd_clear (void);
void create_custom_char (uint8_t loc, char * data);
void display_custom_char (uint8_t loc);




#endif /* INC_LCD_DRIVER_H_ */
