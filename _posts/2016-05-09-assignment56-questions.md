---
layout: post
title:  Assignment 5/6 Questions
date: 2016-05-09 15:30:00
category: questions
---

<a id="Q1"></a>

#### I was just wondering if anyone else using cygwin has emailed you with concerns that OpenMP seems to not work for this homework when it comes to speeding it up. I can get it so the error rate is the same but it slows down a considerable amount no matter what I do for my pragmas.

Yes, I have heard that from a fair number of students that Cygwin sometimes does not behave as it should while using OpenMP.
Just put it in your write-up and make a conservative guess or two about `#pragma`s that *should* speed up parallel operations.

**UPDATE:** You can *try* using Visual Studio.
It may achieve better speedup than gcc under Cygwin.
See [here](https://msdn.microsoft.com/en-us/library/tt15eb9t.aspx) for guidance.
