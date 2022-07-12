/**
* swap_int - swaps the values of two integers
* @a: first int to swap
* @b: second int to swap
*
* Return: void
*/
void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
