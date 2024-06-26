// SPDX-License-Identifier: GPL-3.0-or-later
// SPDX-FileCopyrightText: 2024 kurth4cker <kurth4cker@gmail.com>

#include <stdarg.h>
#include <stdio.h>

const char *argv0;

void
fprintfln(FILE *out, const char *fmt, ...)
{
	va_list ap;
	va_start(ap, fmt);
	vfprintfln(out, fmt, ap);
	va_end(ap);
}

void
vfprintfln(FILE *out, const char *fmt, va_list ap)
{
	vfprintf(out, fmt, ap);
	fprintf(out, "\n");
}
