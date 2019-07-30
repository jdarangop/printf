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

START_TEST (preliminary_tests)
{
	int len_1_a = printf("Let's try to printf a simple sentence:\n");
	printf("Len :[%d]\n", len_1_a);
	int len_1_b = _printf("Let's try to printf a simple sentence:\n");
	_printf("Len :[%d]\n", len_1_b);

	ck_assert_int_eq(len_1_a, len_1_b);
 
	int len_2_a = printf("'c': %c char 9999: %c:\n", 'c', 9999);
	printf("Len :[%d]\n", len_2_a);
	int len_2_b = _printf("'c': %c char 9999: %c:\n", 'c', 9999);
	_printf("Len :[%d]\n", len_2_b);

	ck_assert_int_eq(len_2_a, len_2_b);

	int len_3_a = printf("'string': %s NULL: %s:\n", "string", NULL);
	printf("Len :[%d]\n", len_3_a);
	int len_3_b = _printf("'string': %s NULL: %s:\n", "string", NULL);
	_printf("Len :[%d]\n", len_3_b);

	ck_assert_int_eq(len_3_a, len_3_b);

	int len_4_a = printf("percent: 1:%% 5:%%%%%, unknown directive: %y:\n");
	printf("Len :[%d]\n", len_4_a);
	int len_4_b = _printf("percent: 1:%% 5:%%%%%, unknown directive: %y:\n");
	_printf("Len :[%d]\n", len_4_b);

	ck_assert_int_eq(len_4_a, len_4_b);

	int len_5_a = printf("spaces after %%: %     s, spaces with no directive:%        :\n", "string");
	printf("Len :[%d]\n", len_5_a);
	int len_5_b = _printf("spaces after %%: %     s, spaces with no directive:%        :\n", "string");
	_printf("Len :[%d]\n", len_5_b);

	ck_assert_int_eq(len_5_a, len_5_b);

	int len_6_a = printf("escapes:  :quote:\" quote:'hi' backslash: \\ :\n");
	printf("Len :[%d]\n", len_6_a);
	int len_6_b = _printf("escapes:  :quote:\" quote:'hi' backslash: \\ :\n");
	_printf("Len :[%d]\n", len_6_b);

	ck_assert_int_eq(len_6_a, len_6_b);

	int len_7_a = printf("integer: %d, max:%i, too large %i, char: %d, NULL: %d:\n", 1024, INT_MAX, 999999999999, 'c', NULL);
	printf("Len :[%d]\n", len_7_a);
	int len_7_b = _printf("integer: %d, max:%i, too large %i, char: %d, NULL: %d:\n", 1024, INT_MAX, 999999999999, 'c', NULL);
	_printf("Len :[%d]\n", len_7_b);

	ck_assert_int_eq(len_7_a, len_7_b);

	int len_8_a = printf("hex: %x, max:%x, too large %X, char: %x, NULL: %X:\n", 31, UINT_MAX, 999999999999, 'c', NULL);
	printf("Len :[%d]\n", len_8_a);
	int len_8_b = _printf("hex: %x, max:%x, too large %X, char: %x, NULL: %X:\n", 31, UINT_MAX, 999999999999, 'c', NULL);
	_printf("Len :[%d]\n", len_8_b);

	ck_assert_int_eq(len_8_a, len_8_b);

	int len_9_a = printf("oct: %o, max:%o, too large %o, char: %o, NULL: %o:\n", 31, UINT_MAX, 999999999999, 'c', NULL);
	printf("Len :[%d]\n", len_9_a);
	int len_9_b = _printf("oct: %o, max:%o, too large %o, char: %o, NULL: %o:\n", 31, UINT_MAX, 999999999999, 'c', NULL);
	_printf("Len :[%d]\n", len_9_b);

	ck_assert_int_eq(len_9_a, len_9_b);

	int len_10_a = printf("unsigned: %u, max:%u, too large %u, char: %u, NULL: %u:\n", 4, UINT_MAX, 999999999999, 'c', NULL);
	printf("Len :[%d]\n", len_10_a);
	int len_10_b = _printf("unsigned: %u, max:%u, too large %u, char: %u, NULL: %u:\n", 4, UINT_MAX, 999999999999, 'c', NULL);
	_printf("Len :[%d]\n", len_10_b);

	ck_assert_int_eq(len_10_a, len_10_b);

	int len_11_a = printf("String_Hex: %S, NULL: %S:\n", "Holberton\nSchool\t", NULL);
	printf("Len :[%d]\n", len_11_a);
	int len_11_b = _printf("String_Hex: %S, NULL: %S:\n", "Holberton\nSchool\t", NULL);
	_printf("Len :[%d]\n", len_11_b);

	ck_assert_int_eq(len_11_a, len_11_b);

	int len_12_a = printf("pointer: %p, NULL: %p\n", &len_12_a, NULL);
	printf("Len :[%d]\n", len_12_a);
	int len_12_b = _printf("pointer: %p, NULL: %p\n", &len_12_b, NULL);
	_printf("Len :[%d]\n", len_12_b);

	ck_assert_int_eq(len_12_a, len_12_b);

	int len_13_a = printf("reversed string: %r NULL: %r:\n", "Holberton", NULL);
	printf("Len :[%d]\n", len_13_a);
	int len_13_b = _printf("reversed string: %r NULL: %r:\n", "Holberton", NULL);
	_printf("Len :[%d]\n", len_13_b);

	ck_assert_int_eq(len_13_a, len_13_b);

	int len_14_a = printf("rot13 string: %R NULL: %R:\n", "Holberton", NULL);
	printf("Len :[%d]\n", len_14_a);
	int len_14_b = _printf("rot13 string: %R NULL: %R:\n", "Holberton", NULL);
	_printf("Len :[%d]\n", len_14_b);

	ck_assert_int_eq(len_14_a, len_14_b);

	int len_15_a = printf("give me binary or give me death: 2: %b, 0: %b, 4294967295: %b, 99999999999999: %b:\n", 2, 0, UINT_MAX, 99999999999999);
	printf("Len :[%d]\n", len_15_a);
	int len_15_b = _printf("give me binary or give me death: 2: %b, 0: %b, 4294967295: %b, 99999999999999: %b:\n", 2, 0, UINT_MAX, 99999999999999);
	_printf("Len :[%d]\n", len_15_b);

	ck_assert_int_eq(len_15_a, len_15_b);
	
}
END_TEST

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

START_TEST (percents_must_match)
{
	puts("\n Test 1: \% \n");

	int p1_a = printf("%");
	int p1_b = _printf("%");

	ck_assert_int_eq(p1_a,p1_b);

	puts("\n Test 2: %%%%%% \n");

	int p2_a = printf("%%%%%");
	int p2_b = _printf("%%%%%");

	ck_assert_int_eq(p2_a,p2_b);

	puts("\n Test 3: estoy mamado% \n");

	int p3_a = printf("estoy mamado%");
	int p3_b = _printf("estoy mamado%");

	ck_assert_int_eq(p3_a,p3_b);

	puts("\n Test 4: \\n% \n");

	int p4_a = printf("\n%");
	int p4_b = _printf("\n%");

	ck_assert_int_eq(p4_a,p4_b);

	puts("\n Test 5: %\\n% \n");

	int p5_a = printf("%\n%");
	int p5_b = _printf("%\n%");

	ck_assert_int_eq(p5_a,p5_b);

	puts("\n Test 6: %Zxcvb \n");

	int p6_a = printf("%Zxcvb");
	int p6_b = _printf("%Zxcvb");

	ck_assert_int_eq(p6_a,p6_b);

	puts("\n Test 7:\n");

	int p7_a = printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	int p7_b = _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');

	ck_assert_int_eq(p7_a,p7_b);

	puts("\n Test 8:\n");

	int p8_a = printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	int p8_b = _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');

	ck_assert_int_eq(p8_a,p8_b);

}
END_TEST

Suite * printf_suite(void)
{
    Suite *s;
    TCase *tc_core;

    s = suite_create("Printf");

    /* Core test case */
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, preliminary_tests);
    tcase_add_test(tc_core, string_must_have_eq_len);
    tcase_add_test(tc_core, ascii_chars_should_be_eq);
    tcase_add_test(tc_core, percents_must_match);
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


    _printf("%%%%%");
    putchar('\n');
    printf("%%%%%");
    putchar('\n');
    _printf("Prueba1: %       s hola\n", "Hey");
    printf("Prueba1: %       s hola\n", "Hey");
    _printf("Prueba2: hola%\n", "Hey", 2);
    printf("Prueba2: hola%\n", "Hey", 2);
    _printf("Prueba3: %&s hola\n", "Hey");
    printf("Prueba3: %&s hola\n", "Hey");
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
