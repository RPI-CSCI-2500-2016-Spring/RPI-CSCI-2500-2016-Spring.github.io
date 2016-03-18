---
layout: post
title:  Assignment 4 Questions
date: 2016-03-18 15:00:00
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
