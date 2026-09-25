#include "weigh.h"

double kgtog(double weigh)
{
    double res;



    res = weigh * 1000.0;



    return res;
}


double gtokg(double weigh)
{

    double res;

    res = weigh / 1000.0;




    return res;
}


double kgtolb(double weigh)
{

    double res;

    
    res = weigh *  2.20462262;



    return res;
}

double lbtokg(double weigh)
{

    double res;

    res = weigh * 0.4535923;


    return res;
}

double lbtog(double weigh)
{

    double res;

    res = kgtog(lbtokg(weigh));


    return res;
}

double gtolb(double weigh)
{

    double res;	

    res = kgtolb(gtokg(weigh));

 
    return res;
}











