#include <stdio.h>
#include <stdlib.h>

float gallons=0.0;
float miles=0.0;
float MPG=0.0;
float TotalGallons=0.0;
float TotalMiles=0.0;
float TotalMPG=0.0;

int main(void)
{
    puts("Welcome to David's MPG Calculator.");
    puts("I hope this is a great experience for you...");
    for (; ;) 
    {
        printf("Enter gallons used (-1 to end): ");
        scanf("%f",&gallons);
        if (gallons==-1)
        {
            break;
        }
    else
        {
        printf("Enter miles driven: ");
        scanf("%f",&miles);
        MPG=miles/gallons;
        printf("MPG for this tank was: %f \n\n",MPG);
        TotalGallons=gallons+TotalGallons;
        TotalMiles=miles+TotalMiles;
        }
    }
    TotalMPG=TotalMiles/TotalGallons;
    printf("Total amount of fuel: %f \n",TotalGallons);
    printf("Total distance driven: %f \n",TotalMiles);
    printf("Overall MPG: %f \n",TotalMPG);
}