# Purpose
Develope and test a library for common 'CLA' operations that will be used by all of your self-made tools.
Used 'tutorials' include: 
- https://www.baeldung.com/linux/library_path-vs-ld_library_path

After trying to modify project 'randimagen' to use 'common_cla_op', the following compilation error occured: 
```
g++ -g -c -I inc/ -std=c++98 -o obj/main.o src/main.cpp
g++ -o out/randimagen obj/main.o obj/io.o obj/comp.o obj/rnd_rgba_img.o obj/cla.o -lcommon_cla_op -lsfml-graphics -lsfml-system
/usr/bin/ld: obj/main.o: in function `main':
/home/user/Addons/MadeByMeUsedByMe/src/randimagen/src/main.cpp:15:(.text+0x3f): undefined reference to `check_help_cmd(int, char**)'
```
You'll solve it, but to ensure that the project at least aproximates it's proper behaviour, define the function inside the header, for the 
 time being.
After more thinking, the 'function' was turned into a macro.
Integrating into 'randimagen' wasn't succesful, proper methods to 'define' your own library are needed.
Yes, the test works, but 'randimagen' doesn't, so there must be something wrong, something that you forgot and need to pay attention to.
