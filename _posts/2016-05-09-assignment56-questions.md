---
layout: post
title:  Assignment 5/6 Questions
date: 2016-05-10 16:30:00
category: questions
---

<a id="Q1"></a>

#### I was just wondering if anyone else using cygwin has emailed you with concerns that OpenMP seems to not work for this homework when it comes to speeding it up. I can get it so the error rate is the same but it slows down a considerable amount no matter what I do for my pragmas.

Yes, I have heard that from a fair number of students that Cygwin sometimes does not behave as it should while using OpenMP.
Just put it in your write-up and make a conservative guess or two about `#pragma`s that *should* speed up parallel operations.

**UPDATE:** You can *try* using Visual Studio.
It may achieve better speedup than gcc under Cygwin.
See [here](https://msdn.microsoft.com/en-us/library/tt15eb9t.aspx) for guidance.

---------------------------------------

<a id="Q2"></a>

#### I ran into an issue parallelizing one of the for loops. In the main function, the second `for` loop both copies `Temperature` into `Temperature_last` and finds the maximum `dt` value. The problem with this is that this means that there is no time-effective way to run this loop in parallel: either the race condition on `dt` is avoided by running the loop serially, or the update of `dt` must be done in a critical block, which actually slows the loop down even more. So essentially, should this loop be done serially, limiting the potential speedup, or are we expected to change the structure of the actual C code to avoid the race condition?

You can make `dt` a reduction variable.  I don't know if that is slower or not but it is a correct way to solve this problem.
