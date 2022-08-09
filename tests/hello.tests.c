//
// Created by Josean Camarena on 07/07/22.
//

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <criterion/redirect.h>

#include <stdio.h>
#include <ctype.h>

#include "hello.h"

void redirect_all_std(void)
{
  cr_redirect_stdout();
  cr_redirect_stderr();
}

TestSuite(hello, .init = redirect_all_std, .timeout = 2);

Test(hello, say_hello)
{
  say_hello();
  fflush(stdout);

  cr_assert_stdout_eq_str("Hello!\nIt Works!\n");
}