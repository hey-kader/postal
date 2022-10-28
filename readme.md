# pure file server in c

> listens to the specified folder
> serves all the assets

## library requirements

```c
  #include <stdio.h>

  standard in/out(input | output)

  /* here we are going to need a few really primitive building blocks.
  arguibly the most primitive <em> code </em> blocks, like printf(), for example.
  */
```

```c
  #include <stdlib.h>
  /*
    standard library
  */

  the most notable structure we will need from the standard library is
  the typedef struct FILE *

  a file pointer is the data type which we can pass to fopen()
  fopen() is a conveniently typed function, defined in the standard library header

```

```c

  #include <in/netinet.h>
  /*
    internet/net-internet library
  */

```

```c
    #include <sys/socket.h>

    /*
			the systems socket library (low level i/o
    */
    
    this library creates a socket interface, which is bound to a /file/
```

```c
    #include <sys/types.h>

    /* 
			the machine-independant primatives library
    */
    we need this library for things like u_int16_t  typedefinitions, 
    because our traditional typed primatives, an integer (int), for example,
    could be represented as 4 bytes on a 32 bit machine or 8 bytes on a 64 bit machine.
```

```c
    #include <string.h>

    /*
        many common (and fast) implementations of character array filtration, 
        for example, strlen() will return the length of bytes until the \0 character
        is hit. strcat (str1, str2) will append string2 to string 1 in place 
   */
```
