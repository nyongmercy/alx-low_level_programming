#include <stdio.h>
#include "function_pointers.h"

/**
 * Question:Write a function that prints a name.
 * print_name - function that prints a name
 * @name: name to be printed.
 * @f: pointer to a function that prints a name.
 * Return: nothing
 */
void print_name(char *name, void (*f) (char *))
{
  if (name == NULL || f == NULL)
	  return;

    f(name);
}
