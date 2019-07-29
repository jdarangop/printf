/*
 * tests.c
 *
 *  Created on: Jul 28, 2019
 *      Author: dario
 */

/*
 * Check: a unit test framework for C
 * Copyright (C) 2001, 2002 Arien Malec
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 */

#include <stdlib.h>
#include <stdio.h>
#include <check.h>
#include <limits.h>
#include "../holberton.h"

START_TEST (string_must_have_eq_len)
{
    int len = _printf("Let's try to printf a simple sentence.\n");
    int len2 = printf("Let's try to printf a simple sentence.\n");

    ck_assert_int_eq(len, len2);
}
END_TEST

START_TEST (ascii_chars_should_be_eq)
{
    int a_dec_1 = _printf("%c",65);
    int a_dec_2 = printf("%c",65);
    int a_bin_1 = _printf("%c",0b1000001);
    int a_bin_2 = printf("%c",0b1000001);
    int a_oct_1 = _printf("%c",0101);
    int a_oct_2 = printf("%c",0101);
    int a_ch_1 = _printf("%c",'A');
    int a_ch_2 = printf("%c",'A');

    ck_assert_int_eq(a_dec_1, a_dec_2);
    ck_assert_int_eq(a_bin_1, a_bin_2);
    ck_assert_int_eq(a_oct_1, a_oct_2);
    ck_assert_int_eq(a_ch_1, a_ch_2);

    putchar('\n');
}
END_TEST

Suite * printf_suite(void)
{
    Suite *s;
    TCase *tc_core;

    s = suite_create("Printf");

    /* Core test case */
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, string_must_have_eq_len);
    tcase_add_test(tc_core, ascii_chars_should_be_eq);
    suite_add_tcase(s, tc_core);

    return s;
}

int main(void)
{
	int number_failed;
	Suite *s;
	SRunner *sr;
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;

    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    _printf("Binary:[%b]\n", 65535);
    printf("Binary:[%b]\n", 65535);

    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");

    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");

	s = printf_suite();
	sr = srunner_create(s);

	srunner_run_all(sr, CK_NORMAL);

	number_failed = srunner_ntests_failed(sr);
	srunner_free(sr);
	return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}


