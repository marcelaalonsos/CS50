/**
 * Beach Burger Shack has the following 10 items on their menu
 * Burger: $9.5
 * Vegan Burger: $11
 * Hot Dog: $5
 * Cheese Dog: $7
 * Fries: $5
 * Cheese Fries: $6
 * Cold Pressed Juice: $7
 * Cold Brew: $3
 * Water: $2
 * Soda: $2
*/

#include "cs50.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

//number of menu items
//adjust this value to number of items input below
#define NUM_ITEMS 10

//menu items have item name and price
typedef struct
{
  string item;
  float price;
}

menu_item;

//array of menu items
menu_item menu[NUM_ITEMS];

//add items to menu
void add_items(void);

//calculate total cost
float get_cost(string item);

int main(void)
{
  add_items();
  printf("\nWelcome to Beach Burger Shack!\n");
  printf("Choose from the following menu to order. Press enter when done.\n\n");

  for (int i = 0; i < NUM_ITEMS; i++)
  {
    printf("%s: $%.2f\n", menu[i].item, menu[i].price);
  }
  printf("\n");

  float total = 0;
  while(true)
  {
    string item = get_string("Enter a food item: ");
    if (strlen(item) == 0)
    {
      printf("\n");
      break;
    }
    total += get_cost(item);
  }
  printf("Your total cost is: $%.2f\n", total);
}

//add at least the first four items to the menu array
void add_items(void)
{
  for (int i = 0; i < NUM_ITEMS; i++)
  {
    menu[i].item = get_string("Enter food item: ");
    menu[i].price = get_float("Enter food item cost: ");
  }
}

//search through the menu array to find an item's cost
float get_cost(string item)
{
  for (int i = 0; i < NUM_ITEMS; i++)
  {
    if (strcasecmp(menu[i].item, item) == 0)
    {
      return menu[i].price;
    }
  }
  return 0.0;
}
