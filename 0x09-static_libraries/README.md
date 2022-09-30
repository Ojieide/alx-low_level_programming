<h1>0x09. C - Static libraries</h1>
<ul>
<li><b>libmy.a, main.h</b> - Create the static library libmy.a containing all the functions listed below</li>
<ol type="a">
<li>int _putchar(char c);</li>
<li>int _islower(int c);</li>
<li>int _isalpha(int c);</li>
<li>int _abs(int n);</li>
<li>int _isupper(int c);</li>
<li>int _isdigit(int c);</li>
<li>int _strlen(char *s);</li>
<li>void _puts(char *s);</li>
<li>char *_strcpy(char *dest, char *src);</li>
<li>int _atoi(char *s);</li>
<li>char *_strcat(char *dest, char *src);</li>
<li>char *_strncat(char *dest, char *src, int n);</li>
<li>char *_strncpy(char *dest, char *src, int n);</li>
<li>int _strcmp(char *s1, char *s2);</li>
<li>char *_memset(char *s, char b, unsigned int n);</li>
<li>char *_memcpy(char *dest, char *src, unsigned int n);</li>
<li>char *_strchr(char *s, char c);</li>
<li>unsigned int _strspn(char *s, char *accept);</li>
<li>char *_strpbrk(char *s, char *accept);</li>
<li>char *_strstr(char *haystack, char *needle);</li>
</ol>
<li><b>create_static_lib.sh</b> - Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory</li>
</ul>
