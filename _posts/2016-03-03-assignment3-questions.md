---
layout: post
title:  Assignment 3 Questions
date: 2016-03-07 14:10:00
category: questions
---

<a id="Q1"></a>

#### Should I be using rebase?

You should *never use rebase* unless you are working on a new branch that you created.
As I didn't show you how to do that, I don't expect you to be doing that.
Rebase can potentially change the repository history which is *bad*.
If you are new to git, stick to the following: `add, commit, push, pull`.
I would also recommend sticking with command line git in the terminal as opposed to using a git client to learn it a little better.

---------------------------------------

<a id="Q2"></a>

#### I know that in the first code assignment we submitted you had asked for our names to be written in the main c file, for this one does it matter whether it goes in the c or the llvm file?

You should put it in the README.md file at the top.
So, for example, mine would be like this:  
`# Assignment 3 - Justin LaPre`  
See [here](https://github.com/RPI-CSCI-2500-2016-Spring/assignment3-laprej) for an example.

---------------------------------------

<a id="Q3"></a>

#### Assignment 3: for transpose, are we using the same definition of "transpose" that we used in Assignment 1 (swapping the 1st and 3rd columns, 2nd and 4th, etc.) or are we doing an actual transposition (swapping the rows and columns)?

For Assignment 3, you should be using the *actual* transpose and NOT the fake one we used in Assignment 1.

---------------------------------------

<a id="Q4"></a>

#### So I'm having a small problem with calling a function in LLVM for assignment 3. How do you correctly call a function that isn't in the LLVM code, but is in the C code.  When I compile it, I get an error that says, `error: use of undefined value '@mm_alloc'`.

You can use `declare` just like `define` but without a function body.
This will let the compiler know that, say, `mm_alloc()` exists but *not* in this particular file.
See [here](https://github.com/RPI-CSCI-2500-2016-Spring/assignment3-laprej/blob/master/matrix.ll) for an example.
