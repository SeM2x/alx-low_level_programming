/**
 * print_name - prints a name
 * @name: the name
 * @f: cb function
 *
 * Return: Void
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
