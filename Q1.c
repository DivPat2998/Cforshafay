#include <stdio.h>

int
main ()
{

  int value;

  printf ("Enter Integar Value: ");
  scanf ("%d", &value);

  int mod = value % 5;

  if (value >= 5 && value <= 95 && mod == 0)
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
	  printf ("%d - 5 Cents Coins", five);
	}

    }
  else
    {
      printf ("Please Enter Correct Value");
    }

  return 0;
}
