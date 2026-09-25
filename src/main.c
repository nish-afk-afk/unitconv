#include <stdio.h>
#include "ui.h"
#include "tempconv.h"
#include "weigh.h"


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
    if(typec == 2){



        enum WeightUnit uweigh;
        enum WeightUnit dweigh;

        uweigh = weigh_unit_select();

        to_num = get_num();

        dweigh = weigh_unit_select();
        //////////

        if(uweigh == dweigh){

          result = to_num;

        }

        else if(uweigh == GRAM && dweigh == KILOGRAM){

          result = gtokg(to_num);

        }

        else if (uweigh == GRAM && dweigh == POUND) {

            result = gtolb(to_num);
        }

        else if(uweigh == KILOGRAM && dweigh == GRAM){

          result = kgtog(to_num);
        }

        else if(uweigh == KILOGRAM && dweigh == POUND){

          result = kgtolb(to_num);

        }
        else if(uweigh == POUND && dweigh == KILOGRAM){

          result = lbtokg(to_num);

        }
        else if(uweigh == POUND && dweigh == GRAM){

          result = lbtog(to_num);

        }
        ////////////
        show_result(result);


    }

    if(typec == 3){

      break;
    }
  }


  return 0;
}
