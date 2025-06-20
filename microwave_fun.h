/* 
 * File:   microwave_fun.h
 * Author: harid
 *
 * Created on 3 January, 2025, 12:56 PM
 */

#ifndef MICROWAVE_FUN_H
#define	MICROWAVE_FUN_H

void clear_screen(void);
unsigned char power_on_screen(void);
void menu_screen(void);
unsigned char micro_mode(unsigned char key, unsigned char reset_flag);
unsigned char display_time(unsigned char key, unsigned char reset_flag);
unsigned char operation_mode(unsigned char key, unsigned char reset_flag);
unsigned char convection_mode(unsigned char key, unsigned char reset_flag);
unsigned char pre_heat_mode(unsigned char reset_flag);
unsigned char start_mode(unsigned char reset_flag);

#endif	/* MICROWAVE_FUN_H */

