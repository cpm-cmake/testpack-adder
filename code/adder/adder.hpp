#pragma once

// should create a warning with `-Wreturn-type`
inline int emitWarning(int unused) { }

namespace adder
{
int add(int a, int b);
}
