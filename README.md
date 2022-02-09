# Get_next_line
get next line function 
Static variable:
Remains while the program is running.
Is allocated memory in data segment

Difference between global and static variable is that static variable cannot be accessed from other files.

Why using static variable :
We need to call get_next_line until EOF, so we need a static variable to hold a line read with the amount of BUFFER_SIZE until the program ends.
File descriptor :
An abstract indicator used to access a file in Unix and related computer operating systems.
Open returns file descriptor that are not allocated.
