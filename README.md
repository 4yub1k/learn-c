# learn-c
C practice ground

### Install:
1. C\C++ [VS Code plugin]
1. Code Runner [VS Code plugin] (**Optional**)
1. MingW x64 windows [Download](https://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win32/Personal%20Builds/mingw-builds/installer/mingw-w64-install.exe/download)  and install.
1. Add PATH to *bin*, in **User variables**. C:\mingw64\bin, or where you installed mingw64/bin
1. Check if path is working. Open CMD and enter gcc --version
```
C:\Windows\System32>gcc --version
gcc (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0
Copyright (C) 2018 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```


NOTE: Read Book side by side. [Download](https://github.com/4yub1k/learn-c/blob/main/The_C_Programming_Language_(2nd_Edition_Ritchie_Kernighan).pdf)
### Table of Contents  
&emsp;[1- Comments & escape sequences](https://github.com/4yub1k/learn-c/blob/main/1-%20comments%20%26%20escape%20sequences.c) \
&emsp;[2- Variables](https://github.com/4yub1k/learn-c/blob/main/2-%20variables%20.c) \
&emsp;[3- Data types](https://github.com/4yub1k/learn-c/blob/main/3-%20data%20types.c) \
&emsp;[4- Format specifiers](https://github.com/4yub1k/learn-c/blob/main/4-%20format%20specifiers.c) \
&emsp;&ensp;[4.1 Format specifiers.png](https://github.com/4yub1k/learn-c/blob/main/4-%20format%20specifiers.png) \
&emsp;&ensp;[4.2- Format](https://github.com/4yub1k/learn-c/blob/main/4.1-%20format%20.c) \
&emsp;[5- Arithmetic](https://github.com/4yub1k/learn-c/blob/main/5-%20arithm.c) \
&emsp;&ensp;[5.1- Arithmetic.png](https://github.com/4yub1k/learn-c/blob/main/5-%20arith.png) \
&emsp;[6- Input](https://github.com/4yub1k/learn-c/blob/main/6-%20input.c) \
&emsp;&ensp;[6.1-Math.png](https://github.com/4yub1k/learn-c/blob/main/6-math.png) \
&emsp;[7- Math.c](https://github.com/4yub1k/learn-c/blob/main/7-%20math.c) \
&emsp;&ensp;[7.1- Circum](https://github.com/4yub1k/learn-c/blob/main/7-%20circum.c) \
&emsp;[8- Switches](https://github.com/4yub1k/learn-c/blob/main/8-%20switches.c) \
&emsp;[9- If-statement](https://github.com/4yub1k/learn-c/blob/main/9-If-statement.c) \
&emsp;[10- Operators](https://github.com/4yub1k/learn-c/blob/main/10-%20operators.c) \
&emsp;[11- C-Operators.pdf](https://github.com/4yub1k/learn-c/blob/main/11-C%20-%20Operators.pdf) \
&emsp;[12- Functions](https://github.com/4yub1k/learn-c/blob/main/12-%20functions.c) \
&emsp;&ensp;[12.1- Function prototyping](https://github.com/4yub1k/learn-c/blob/main/12.2-%20function%20prototyping.c) \
&emsp;[13- Ternary operator](https://github.com/4yub1k/learn-c/blob/main/13-%20ternary%20operator.c) \
&emsp;[14- String library](https://github.com/4yub1k/learn-c/blob/main/14-%20string%20library.c) \
&emsp;[15- For loop](https://github.com/4yub1k/learn-c/blob/main/15-%20for%20loop.c) \
&emsp;[16- While loop](https://github.com/4yub1k/learn-c/blob/main/16-%20while%20loop.c) \
&emsp;[17- Do-while](https://github.com/4yub1k/learn-c/blob/main/17-%20do-while.c) \
&emsp;[18- Nested loop](https://github.com/4yub1k/learn-c/blob/main/18-%20nested%20loop.c) \
&emsp;[19- Continue and break](https://github.com/4yub1k/learn-c/blob/main/19-%20continue%20and%20break.c) \
&emsp;[20- Array](https://github.com/4yub1k/learn-c/blob/main/20-%20Array.c) \
&emsp;&ensp;[20.1- 2D Array](https://github.com/4yub1k/learn-c/blob/main/20.1%202D%20array.c) \
&emsp;&ensp;[20.2- MultiDimenional Array](https://github.com/4yub1k/learn-c/blob/main/20.2%20Multi%20dimen%20Array.c) \
&emsp;&ensp;[20.3- 3D-Array.jpg](https://github.com/4yub1k/learn-c/blob/main/20.3%203D-array.jpg) \
&emsp;[21- String 2D arrray](https://github.com/4yub1k/learn-c/blob/main/21-%20string%202D%20arrray.c) \
&emsp;[22- Structures](https://github.com/4yub1k/learn-c/blob/main/22-%20structures.c) \
&emsp;[23- Type def #](https://github.com/4yub1k/learn-c/blob/main/23.%20type%20def%20%23.c) \
&emsp;[24- Array of structs](https://github.com/4yub1k/learn-c/blob/main/24-%20array%20of%20structs.c) \
&emsp;[25- Enums](https://github.com/4yub1k/learn-c/blob/main/25-%20enums.c) \
&emsp;[26- Bitwise(Logic)](https://github.com/4yub1k/learn-c/blob/main/26-%20Bitwise(gates).c) \
&emsp;[27- Memory](https://github.com/4yub1k/learn-c/blob/main/27-%20memory.c) \
&emsp;[28- Pointers](https://github.com/4yub1k/learn-c/blob/main/28-%20Pointers.c) \
&emsp;[29- Files](https://github.com/4yub1k/learn-c/blob/main/29.%20files.c) \
&emsp;[30- Goto-statement](https://github.com/4yub1k/learn-c/blob/main/30.%20goto%20statement.c)

### Programs:

- Sorting Array : [Click](https://github.com/4yub1k/learn-c/blob/main/array%20sorting.c)
- Calculator : [Click](https://github.com/4yub1k/learn-c/blob/main/calculator.c)
- Guess Number : [Click](https://github.com/4yub1k/learn-c/blob/main/guess%20the%20number.c)
- Quiz : [Click](https://github.com/4yub1k/learn-c/blob/main/quiz.c)
- Random Number : [Click](https://github.com/4yub1k/learn-c/blob/main/random%20num.c)
- Swaping : [Click](https://github.com/4yub1k/learn-c/blob/main/swap.c)
- TicTacToe : [Click](https://github.com/4yub1k/learn-c/blob/main/ticTac.c)

**Hope you enjoyed it 🍰, Feel free to share it.**
