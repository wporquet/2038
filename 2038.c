#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define STRFTIME_BUF_SIZE 256

int main (int argc, char **argv)
{
    time_t t;
	int sec;
	    for (t = (time_t) (~0UL >> 1) - 10, sec = 0; sec < 20; sec++, t++) {
		char buf[STRFTIME_BUF_SIZE];
			strftime (buf, STRFTIME_BUF_SIZE, "%a, %d %b %Y %H:%M:%S", localtime (&t));
				printf ("%s\n", buf);
				    }
					return 0;
					}
