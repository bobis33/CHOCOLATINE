/*
** EPITECH PROJECT, 2023
** B-DOP-200-BDX-2-1-chocolatine-elliot.masina
** File description:
** test
*/


#include <criterion/criterion.h>
#include <criterion/redirect.h>

#include "utils.h"


Test(test1, error_return_value) {
    int argc = 0;
    char **argv = NULL;
    cr_assert(error(argc, argv) == -1);
}
