#include "main.h"
/**
 *_strlen_p - returns length
 *
 *@s:string
 *Return:length
 *
 */
int is_palindrome(char *s);
{
        if (!*s)
        {
                return (0);
        }
        else
        {
                return (1 + _strlen_p(++s));
        }
}
/**
 *_test - palindrome?
 *@l:length
 *@s:string
 *Return:boolean
 *
 */

