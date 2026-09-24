#include <stdio.h>
#include "ui.h"
#include "tempconv.h"

int main(void)
{
  int dtemp;
  int utemp;
  int typec;

  double result;
  double to_num;


while(1){

  typec = type_select();


  if (typec == 1)
  {
    utemp = temp_unit_select();

    to_num = get_num();

    dtemp = temp_unit_select();

    if (utemp == dtemp)
    {
      result = to_num;
    }

    else if (utemp == 1 && dtemp == 2)
    {
      result = ctof(to_num);
    }

    else if (utemp == 1 && dtemp == 3)
    {
      result = ctok(to_num);
    }

    else if (utemp == 2 && dtemp == 1)
    {
      result = ftoc(to_num);
    }

    else if (utemp == 2 && dtemp == 3)
    {
      result = ftok(to_num);
    }

    else if (utemp == 3 && dtemp == 1)
    {
      result = ktoc(to_num);
    }

    else if (utemp == 3 && dtemp == 2)
    {
      result = ktof(to_num);
    }

    printf("\nresult: %f\n", result);
  }

  if(typec == 3){

    break;
  }
}
  return 0;
}
