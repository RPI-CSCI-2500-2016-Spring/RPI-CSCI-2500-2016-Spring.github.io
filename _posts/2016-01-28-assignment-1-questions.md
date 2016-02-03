---
layout: post
title:  Assignment 1 Questions
date: 2016-02-02
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

---------------------------------------

<a id="Q6"></a>

#### I do not have access to a Linux computer. As the assignment states that it requires a Linux computer what do I do?

Cygwin is an acceptable Linux substitute as is a Mac.

---------------------------------------

<a id="Q7"></a>

#### I finished Assignment 1 and tried to submit it via the git commands. In the terminal it says I have the most up-to-date version, but online on github, I can not seem to find where it has been pushed to. Where do I check if it has been correctly pushed?

On Github, right above your list of files, there should be a blue bar.  This will contain the message from your most recently pushed commit (it's also clickable).  If this has your most recent commit message then you are all set.  Additionally, above that there should be a link to all of your commits labeled "*n* commits" where *n* is the number of commits you have made over the history of this repository.

---------------------------------------

<a id="Q8"></a>

#### Should we be using a memory debugger like valgrind to make sure there are no memory leaks in our program?

I think valgrind is probably a little overkill for a program of this size.  But if it makes you happy, sure, feel free to use it.

---------------------------------------

<a id="Q9"></a>

#### I'm new to git so even though I did the git tutorial I don't quite understand the process we are supposed to do to submit Comp Org Assignment 1. Are you supposed to create a pull request? I don't know.

There is nothing else that you have to do.  The TAs and I have access to every student's files.  We will collect the files on the due date.
The only thing required of you is that you make sure that the version of the files on Github matches what you have done in your local repository.
For that, you need to do a `git push` after you have committed all of your changes.

---------------------------------------

<a id="Q10"></a>

#### So since we will be turning in the assignments via GitHub, is the final push due at 8 AM on Tuesdays or 11:59 PM Tuesday?

8 AM does seem a bit earlier for your average computer scientist or RPI student so I suppose 11:59 PM would be better.
**The new due date will be 11:59 PM, ~~Tuesday, February 2nd~~ Wednesday, February 3rd, 2016.**
I wouldn't wait until the last minute, though.
