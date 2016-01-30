---
layout: post
title:  Assignment 1 Questions
date: 2016-01-30
category: questions
---

<a id="Q1"></a>

#### I was reading this and was wondering if the proper way to handle this would be to swap column 2 with column 4, or to swap it with column 0, in the usual sense of the word swap. The description makes it sound more like a leftward shift of the matrix by 2 columns (which is how I implemented it originally), but I wasn't really sure which way we're intended to do it.

It really doesn't matter.  The point of this assignment is to learn about allocating memory and work with pointers.
The `swap` operation is a nonsensical operation that I made up.
The way it's described doesn't even necessarily preserve the contents of the matrix, but that is not the point of this assignment.
Describe what you are doing in the comments and then code it up.

---------------------------------------

<a id="Q2"></a>

#### Also what does the line"use a quad loop method" mean? I was able to do the matrix multiplication using 3 for loops.

Some of the comments in the file I provided have persisted through multiple iterations of this particular homework.
This should be a good lesson of what *not* to do. Keep your comments up to date! Sorry for the confusion.

---------------------------------------

<a id="Q3"></a>

#### Does our output have to match the sample output provided?

Please try your best to make it as similar as possible, if not identical.

---------------------------------------

<a id="Q4"></a>

#### How do we get `float` variables from the input file?  `fgets()` returns a `char *`.

You should use the `sscanf()` function.  See slide 157 in [intro.ppt][intro-slides] or `man 3 sscanf`.

[intro-slides]: {{site.base}}/slides/intro.ppt

---------------------------------------

<a id="Q5"></a>

#### For Comp Org Assignment 1, the provided answer.out file has both the swap and result matrices printed.  The main function in mm.c only calls the print function on the result matrix, so this is all that is printed when my program executes.  The instructions say to leave the main function as is, so I was wondering if this is what you wanted.

You can call `mm_print()` at the end of your `mm_swap()` function.  Not only will this let your output match, it should also help you while debugging your program.
