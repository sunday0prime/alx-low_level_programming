0x09 Static library createion
Guide
Create a main.h file that contains all the functions to be called.
Create your c profile files.
After creating your c program files run this command to create .o files
gcc -c \*.c

Now create a static library with ar using the command below
ar rcs libmy.a

All all .o files to the library
ar rcs libmy.a \*.o

check the content of your libmy.a static library file
ar -t libmy.a

Check the static library file functions with their memory allocations.
nm libmy.a


Last task
Create "create_static_lib.sh"
input the following code
#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc liball.a *.a
ranlib liball.a

now conver create_static_lib.sh to an executable thus
chmod u+x create_static_lib.sh
