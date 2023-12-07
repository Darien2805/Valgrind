# Valgrind
Research paper that demonstrates and discuss Valgrind to detect memory-related errors.

## Abstract
This project uses the Harris platform and the dynamic analysis tool
Valgrind to identify memory-related issues in the C programming language.
If not correctly controlled, memory allocation and deallocation
and free can result in errors. The double-free is a frequent mistake where
the same memory block is deallocated more than once, leading to unpredictable
behavior. Such errors can be found using Valgrind’s Memcheck
tool, which intercepts function calls and examines memory activities. In
this project, we test the detection of double-free, no free, reading outside
of the malloc’d block and accessing outside the array length errors using
Memcheck using flawed code, then we examine the generated reports. We
also review how to use Valgrind to find and correct memory-related issues,
demonstrating its value in enhancing program reliability. Through
this research, we emphasize the value of effective memory management
and the function that dynamic analysis tools like Valgrind play in ensuring
memory safety in C.


[Research Paper](ReportPaper.pdf)
