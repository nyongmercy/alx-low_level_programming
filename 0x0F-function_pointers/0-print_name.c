#include <stdio.h>
#include "function_pointers.h"

/**
 * Question:Write a function that prints a name.
 * print_name - function that prints a name
 * @name: name to print
 * @f: pointer to a function to use to print name
 *
 * Return: nothing
 */

void print_name(char *name, void (*f) (char *))
{
  if (name && f)
    f(name);
}
