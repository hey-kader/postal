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
  
```
