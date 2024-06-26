#pragma once

#include <stdarg.h>
#include <stdio.h>

extern const char *argv0;

void fprintfln(FILE *, const char *, ...);
void vfprintfln(FILE *, const char *, ...);
