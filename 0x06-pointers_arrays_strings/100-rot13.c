#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string to be encoded
 *
 * Return: a pointer to the encoded string.
 */

char *rot13(char *str)
{
        int a = 0;
        int b = 0;
        char *s = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
        char *en = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

        while (*(str + a) != '\0')
        {
                while (*(s + b) != '\0')
                {
                        if (*(str + a) == *(s + b))
                        {
                                *(str + a)  = *(en + b);
                                break;
                        }
                        b++;
                }
                b = 0;
                a++;
        }
        return (str);
}
