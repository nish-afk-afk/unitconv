#ifndef WEIGH_H
#define WEIGH_H

double gtokg(double weigh);
double gtolb(double weigh);
double kgtog(double weigh);
double kgtolb(double weigh);
double lbtog(double weigh);
double lbtokg(double weigh);
enum WeightUnit {
    GRAM = 1,
    KILOGRAM = 2,
    POUND = 3
};
#endif
