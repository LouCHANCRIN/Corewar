# Corewar

### About Corewar :

* Corewar got two parts
* First part is a program that will take a file written in pseudo assembly language with a .s extension as an input and create a new binary file with a .cor extension
* Second part is a virtual machine that will take the binary file as an input and will run the isntructions written in that file
* The virtual machine can take up to four file that will compete to be the last one alive

### Requierements :

* C library
* make
* gcc or clang
* ar
* libncurses5
* libtool

### Usage :

* make : create the binary
* make clean : delete the .o file
* make fclean : delete the .o and binary file
* make re : use 'make fclean' and then use 'make'
* ./asm my_file.s
* ./corewar [-v 0-8 -s] [-dump nbr_cycles] [[-n number] champ1.cor] ...

``corewar option :``

  -v x : 1 to 8 verbose level.

  -s : Graphic option with ncurse.

  -dump nb_cycle : print the memory at nb_cycle then exit.

  -n placeChamp champ.cor : give a place to champ in virtual machine.
