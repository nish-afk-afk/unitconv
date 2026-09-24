#include <stdio.h>
#include "ui.h"
#include "tempconv.h"

int type_select(void){


int choice;

    printf("\n\n\n");
    printf("=============================\n");
    printf("========select type==========\n");
    printf("\n\n\n");
    printf("1.temp\n");
    printf("2.weight\n");
    printf("3.quit\n");



	    printf("\n\n");
	    printf("please select a type:");
	    scanf("%i", &choice);






    return choice;
}
////////////////////////////////////////////////////////////////////////////
int temp_unit_select(void){

    int unit;

    printf("\n\n");
    printf("=============select unit=============\n");
    printf("\n\n");
    printf("1. c (celsius)\n");
    printf("2. f (fahrenheight)\n");
    printf("3. k (kelvin)\n");

    printf("\n\n");
    printf("please choose a unit(unit number, not name):");
          scanf("%i", &unit);





    return unit;
}
///////////////////////////////////////////////////////////////////////////

double get_num(void){
    double num;

    printf("\n\n");
    printf("specify number (can include decimals):");
	    scanf("%lf", &num);


   return num; 
}
int temp_dest_select(void)
{
    int unit;

    printf("\n\n");
    printf("=========select destination unit=========\n");
    printf("\n\n");
    printf("1. c (celsius)\n");
    printf("2. f (fahrenheit)\n");
    printf("3. k (kelvin)\n");

    printf("\n\n");
    printf("please choose a destination unit(unit number, not name):");
    scanf("%i", &unit);

    return unit;
}

void show_result(double result)
{
    printf("\n\n");
    printf("================result================\n");
    printf("\n");
    printf("%f\n", result);
}


















