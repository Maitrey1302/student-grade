//Name-Maitrey Pagal
//Email id-marshpangal@gmail.com
-------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <stdio.h>

int main()
{
    int num;
printf("Enter your mark ");
scanf("%d",&num);
printf(" You entered %d\n", num); // printing outputs

	if(num >= 84){
	printf("\n You got A grade"); // printing outputs
		}
	else if ( num >=70){ // Note the space between else & if
		printf("\n You got B grade");
		}
	else if ( num >=55){
		printf("\n You got C grade");
		}
	else if ( num>=40)
	    {
		printf("\n You got E grade");
		}
		  else if (num<=39)
    {
        printf("\nyou got F grade ");
    }
    return 0;
}
