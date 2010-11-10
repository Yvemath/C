#include<stdio.h>

union month{
  enum short_month = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
  enum long_month = {"January","February","March","April","May","June","July","August","September","October","November","December"};
};

typedef struct date{
  int day;
  union month m;
  int year;
  int function dob(newday, newmonth[], newyear){
    day = newday;
    month = newmonth;
    year = newyear;
    return 0;
  }
}date;

int main(void)
{
  char name[30];
  int ssn;
  dateofbirth dob;
}
