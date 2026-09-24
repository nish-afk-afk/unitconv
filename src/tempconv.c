
#include "tempconv.h"

double ctof(double temp){

    double res;

    res = (temp * ( 9.0 / 5.0 )) + 32.0; 


    return res;
}



double ctok(double temp){

    double res;

    res = temp + 273.15;


    return res;
}

double ftoc(double temp){

    double res;

    res = (temp - 32) * ( 5.0 / 9.0 );



    return res;
}


double ktoc(double temp){

    double res;

    res = temp - 273.15;



    return res;
}





double ftok(double temp)
{
    double res;

    res = ctok(ftoc(temp));

    return res;
}



double ktof(double temp)
{
    double res;

    res = ctof(ktoc(temp));

    return res;
}










