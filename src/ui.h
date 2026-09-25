#ifndef UI_H
#define UI_H
#include "weigh.h"


int type_select(void);
int temp_unit_select(void);
double get_num(void);
int temp_dest_select(void);
void show_result(double result);
enum WeightUnit weigh_unit_select(void);

#endif
