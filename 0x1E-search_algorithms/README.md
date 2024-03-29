# 0x1E. C - Search Algorithms

<!-- Ansi shadow -->
```c
███████╗███████╗ █████╗ ██████╗  ██████╗██╗  ██╗     █████╗ ██╗      ██████╗  ██████╗ ███████╗
██╔════╝██╔════╝██╔══██╗██╔══██╗██╔════╝██║  ██║    ██╔══██╗██║     ██╔════╝ ██╔═══██╗██╔════╝
███████╗█████╗  ███████║██████╔╝██║     ███████║    ███████║██║     ██║  ███╗██║   ██║███████╗
╚════██║██╔══╝  ██╔══██║██╔══██╗██║     ██╔══██║    ██╔══██║██║     ██║   ██║██║   ██║╚════██║
███████║███████╗██║  ██║██║  ██║╚██████╗██║  ██║    ██║  ██║███████╗╚██████╔╝╚██████╔╝███████║
╚══════╝╚══════╝╚═╝  ╚═╝╚═╝  ╚═╝ ╚═════╝╚═╝  ╚═╝    ╚═╝  ╚═╝╚══════╝ ╚═════╝  ╚═════╝ ╚══════╝
```

## Learning objectives

* What is a search algorithm
* What is a linear search
* What is a binary search
* What is the best search algorithm to use depending on your needs

## Environment

<!-- ubuntu -->
[![Ubuntu](https://img.shields.io/static/v1?label=&message=Ubuntu&color=E95420&logo=Ubuntu&logoColor=E95420&labelColor=2F333A)](https://ubuntu.com/)

* Editors: ``vim``
* OS: ``Ubuntu`` 20.04 LTS
* Compiler: ``gcc`` 9.3.0
  * flags: ``-Wall -Werror -Wextra -pedantic -std=gnu89``
* Shell: Bash
* Style guideliness: ```Betty``` [https://github.com/holbertonschool/Betty](https://github.com/holbertonschool/Betty)
* ``make`` GNU Make 4.2.1
  * 0: linear
  * 1: binary
  * 100: jump
  * 102: interpolation
  * 103: exponential
  * 104: advanced_binary
  * 105: jump
  * fclean : clean executable outputs
  * betty: style for .h and .c files recursively

```bash
root@fbe996797dd6:/#betty -r *.c *.h

========== -r ==========
main
main
...
root@fbe996797dd6:/#
```

## BIG O notation

* O(1)
* O(n)
* O(n!)
* n*m -> O(nm)
* n square -> O(n^2)
* sqrt n -> O(sqrt(n))
* log(n) -> O(log(n))
* n * log(n) -> O(nlog(n))

## Search algorithms

```bash
vagrant@ubuntu-focal:~/$ ./0-linear
Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Found 3 at index: 3

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Found 42 at index: 2

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Value checked array[4] = [4]
Value checked array[5] = [42]
Value checked array[6] = [6]
Value checked array[7] = [7]
Value checked array[8] = [-1]
Value checked array[9] = [9]
Found 999 at index: -1

root@fbe996797dd6:/#
```

## Author

> Chikaodiri Agu
