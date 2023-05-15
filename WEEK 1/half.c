/*
Implementation details
Your function should use the input parameters, bill, tax, and tip, to calculate the final amount. However, since these values are percentages, you’ll have to do some work to convert these to more appropriate formats to use for your calculation.

The tax should be added to the bill amount before calculating the tip. Finally, you will return exactly half of the full amount, including the bill amount, the tax and the tip.
*/

#include <stdio.h>
#include "cs50.h"

float half (float bill, float tax, int tip);

int main(void)
{
  float bill_amount = get_float("Bill before tax and tip: ");
  float tax_percent = get_float("Sale tax percent: ");
  int tip_percent = get_int("Tip percent: ");

  printf("You will owe $%.2f each", half(bill_amount, tax_percent, tip_percent));
}

float half(float bill, float tax, int tip)
{
  float addTax = bill * (tax/100);
  float billAfterTax = bill + addTax;
  float addTip = billAfterTax * (float) tip / 100;
  float split = (billAfterTax + addTip) / 2;
  return split;
}
