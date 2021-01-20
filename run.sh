#!/bin/bash

gcc main.c libftprintf.a -I./libft/ -I./includes&& ./a.out | ./cnt_len.exe
gcc main.c libftprintf2.a -I./libft/ -I./includes&& ./a.out | ./cnt_len.exe

