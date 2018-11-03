#include <stdio.h>

int
main ()
{
  int flag = 0;
  char option;

  while (flag == 0)
    {

      float value;
      int dollar, cents;

      printf ("\n Enter Value: ");
      scanf ("%f", &value);

      dollar = (int) value;
      cents = (int) (((value - dollar) * 100) + 0.5);

      // Dollar Section

      int one_dollar, two_dollar, five_dollar, ten_dollar, twenty_dollar,
	fifty_dollar, hundred_dollar;

      one_dollar = dollar / 1;
      two_dollar = dollar / 2;
      five_dollar = dollar / 5;
      ten_dollar = dollar / 10;
      twenty_dollar = dollar / 20;
      fifty_dollar = dollar / 50;
      hundred_dollar = dollar / 100;

      if (hundred_dollar >= 1)
	{
	  printf ("%d - $100 Notes \n", hundred_dollar);

	}
      if (fifty_dollar >= 1)
	{
	  printf ("%d - $50 Notes \n", fifty_dollar);

	}
      if (twenty_dollar >= 1)
	{
	  printf ("%d - $20 Notes \n", twenty_dollar);

	}
      if (ten_dollar >= 1)
	{
	  printf ("%d - $10 Notes \n", ten_dollar);

	}
      if (five_dollar >= 1)
	{
	  printf ("%d - $5 Notes \n", five_dollar);

	}
      if (two_dollar >= 1)
	{
	  printf ("%d - $2 Notes \n", two_dollar);

	}
      if (one_dollar >= 1)
	{
	  printf ("%d - $1 Notes \n", one_dollar);

	}


      // Cents Section
      if (cents >= 5 && cents <= 95 && cents % 5 == 0)
	{
	  int five, ten, twenty, fifty;
	  five = value / 5;
	  ten = value / 10;
	  twenty = value / 25;
	  fifty = fifty / 50;

	  if (fifty >= 1)
	    {
	      printf ("%d - 50 Cents Coins \n", fifty);

	    }
	  if (twenty >= 1)
	    {
	      printf ("%d - 20 Cents Coins \n", twenty);

	    }
	  if (ten >= 1)
	    {
	      printf ("%d - 10 Cents Coins \n", ten);

	    }
	  if (five >= 1)
	    {
	      printf ("%d - 5 Cents Coins \n", five);
	    }

	}
      printf
	("Do you want to continue ? Press Y to Continue, N to Exit. \n Enter Desired Option: ");
      scanf (" %c", &option);
      if (option == 'N' || option == 'n')
	{
	  flag = 1;
	}
    }

  return 0;
}
