---
layout: post
title:  Assignment 4 Questions
date: 2016-03-20 15:00:00
category: questions
---

<a id="Q1"></a>

#### After reading the homework 6 pdf, it seems it ask us to do the adder digit by digit? Can we construct the 64bit adder by connect 16 4bit adders together using a for loop?

You should be assembling bigger adders in a hierarchical fashion.
So, for example, to build a 16-bit adder, use 4 4-bit adders.
To build a 64-bit adder, use 4 16-bit adders.
It's this hierarchy that provides us with the speed.
In fact, everyone should study why this configuration is preferred over stringing together 64 1-bit adders, 16 4-bit adders, etc.
Appendix B.6 uses the prefix "super," e.g., super propagate, super generate.
The textbook coverage is fairly thorough.

---------------------------------------

<a id="Q2"></a>

#### How will the program receive its input, and did you have any specific test cases in mind (like test_matrix.dat for assignment 1)?

I should have specified.  Entering 64 bits would be a little tedious.  You should supply your input in hexadecimal.  So you should have something similar to this:  
<pre>
long hex_val;
printf("Please enter a (hex) value: ");
scanf("%lx", &hex_val);
printf("%lx", hex_val);
</pre>
You can even add them to check your answer.

---------------------------------------

<a id="Q3"></a>

#### Step 7 in the pdf says sum_i = a_i +b_i +c_i, but the top of the pdf has c_{i-1} instead of c_i.  Isn't c_{i-1} correct?

Step 7 builds on step 6, step 8 builds on step 7, etc.
You calculate them based on the incoming c_x value which is why those indices are changing.

---------------------------------------

<a id="Q4"></a>

#### In step 5 (and similarly in 6) where it says k = j mod 4, should this be a division instead of a mod?  I’m thinking that j goes from 0 to 15, so sections will begin at multiples of 4, so taking j mod 4 will always give you k=0 and therefore only give you sc_0 as your carry-in for each of the sections.

Yes, you are correct!  I will adjust the PDF accordingly.
