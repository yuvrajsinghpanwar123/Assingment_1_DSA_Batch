/*1. Write a program to print Hello Students on the screen.
#include <stdio.h>
int main()
{
    printf("Hello Students");
    return 0;
} */

/*2. Write a program to print Hello in the first line and Students in the second line

#include <stdio.h>
int main()
{
    printf("Hello\nStudents");
    return 0;
} */

/* 3. Write a program to print “iNeuron” on the screen. (Remember to print in double quotes) 4. WAP

#include <stdio.h>
int main()
{
    printf("\"iNEURON\"");
    return 0;
} */

/*  4. WAP to find the area of the circle. Take radius of circle from user as input and print the result in
below given format.
Expected output format – “Area of circle is A having the radius R”. Replace A with area & R with radius.

#include <stdio.h>
int main()
{
    float radius;
    printf("enter radius :\n");
    scanf("%f", &radius);

    float area_of_circle;
    area_of_circle = 3.14 * radius * radius;

    printf("Area of circle is %f having the radius %f", area_of_circle, radius);



    return 0;
} */

/* 5. WAP to calculate the length of String using printf function

#include <stdio.h>

int main()
{
    printf("%d", printf("hello"));
    return 0;
}
*/

/* 6. WAP to print the name of the user in double quotes.
 Expected output format – “Hello , Amit Kumar”

#include <stdio.h>
int main()
{
    printf("\"Hello , Amit Kumar\"");
    return 0;
}
*/

/* 7. WAP to print “%d” on the screen

#include <stdio.h>
int main()
{
    printf("%%d");
    return 0;
} */

/* 8.WAP to print “\n” on the screen.

#include <stdio.h>
int main()
{
    printf("\\n");
    return 0;
}*/

/* 9. WAP to print “\\” on the screen

#include <stdio.h>
int main()
{
    printf("\\\\");
    return 0;
}
*/

/*10. WAP to take date as an input in below given format and convert the date format and
display the result as given below.
User Input date format – “DD/MM/YYYY” (27/11/2022)
Output format –
“Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022)


#include <stdio.h>
int main()
{
    int Day, Month, Year;
    printf("enter Day , Month  , Year\n");
    scanf("%d/%d/%d", &Day, &Month, &Year);
    printf("Day - %d , Month - %d , Year - %d", Day, Month, Year);

    return 0;
}
*/

/*11. WAP to take time as an input in below given format and convert the time format and
display the result as given below.
User Input date format – “HH:MM”
Output format – “HH hour and MM Minute”
Example –
“11:25” converted to “11 Hour and 25 Minute”

#include <stdio.h>
int main()
{
    int HH, MM;
    printf("enter hours and minutes\n");
    scanf("%d:%d", &HH, &MM);

    printf("%d hours and %d Minutes", HH, MM);
    return 0;
}

*/

 
/*12. Find output of below code:
int main()
{
int x = printf(“ineuron”);
printf(“%d”,x);
return 0 ;

ANSWER = it will give error on executing
*/
