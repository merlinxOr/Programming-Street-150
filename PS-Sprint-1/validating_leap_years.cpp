#include <stdio.h>

bool is_leap_year(int);

int main(int argc, char const *argv[])
{

    unsigned int years[10] = {1999, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2009};

    unsigned int szYears = sizeof(years) / sizeof(years[0]);

    for (int i = 0; i < szYears; i++)
    {
        printf("> %d is %s\n", years[i], is_leap_year(years[i]) ? "leap" : "not leap year");
    }

    return 0;
}

bool is_leap_year(int year)
{
    return (year % 4 == 0) && (year % 100 != 0 || year % 400 == 0);
}
