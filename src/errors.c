/*
** EPITECH PROJECT, 2023
** B-DOP-200-BDX-2-1-chocolatine-elliot.masina
** File description:
** errors
*/


#include <stddef.h>


int error(int argc, char *argv[])
{
    if (argc != 1 || argv == NULL)
        return -1;
    return 0;
}