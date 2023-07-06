# ft_printf

This is a simplified implementation of the `printf` function in the C programming language. It provides a basic formatting and printing functionality similar to the standard `printf` function.

## Introduction

`ft_printf` is a project that aims to replicate the behavior of the standard `printf` function in C. It allows you to format and print various types of data, such as integers, strings, characters, and more, to the standard output.

## Features

- Support for basic format specifiers (`%d`, `%s`, `%c`, `%x`, `%f`, etc.)
- Width and precision modifiers
- Flag modifiers (`-`, `+`, `0`, `#`, ` `)
- Variable number of arguments

## Usage

To use `ft_printf`, simply use the Makefile and use the executable to see the output.

```
make
./ft_printf
```

## Supported Format Specifiers
- `%d` or `%i`: Signed decimal integer
- `%u`: Unsigned decimal integer
- `%o`: Unsigned octal
- `%x` or `%X`: Unsigned hexadecimal (lowercase/uppercase)
- `%f`: Decimal floating point
- `%c`: Character
- `%s`: String
- `%p`: Pointer address
- `%%`: Percent sign

For a more detailed explanation of format specifiers, please refer to the official documentation on printf format strings.
