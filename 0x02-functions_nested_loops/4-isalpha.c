#include "main.h"

/**
 * _isalpha - Entry point
 * @c: Entry value
 * Description: _isalpha print lowercase alphabet
 * Descript: intergral 'c'
 * Return: 0
 */

int _isalpha(int c)
{

if (c > 'a' && c < 'z')
{
return (1);
}

else if (c > 'A' && c <'Z')
{
return (1);
}

else
{
return (0);
}

}
