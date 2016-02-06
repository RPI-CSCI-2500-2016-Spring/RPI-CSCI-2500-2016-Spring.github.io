---
layout: page
title: Syllabus
description: Syllabus for CSCI 2500 Computer Organization.
---

## CSCI 2500, Computer Organization

### Spring 2016

Dr. Justin M. LaPre  
Department of Computer Science  
Rensselaer Polytechnic Institute  
110 8th Street Troy, New York 12180  
E-mail: laprej AT cs.rpi.edu  
Course web site: [http://rpi-csci-2500-2016-spring.github.io](http://rpi-csci-2500-2016-spring.github.io)  
Office Hours: Amos Eaton 132, Tuesday and Friday, 10 a.m. to noon (and by appointment).  
Class Time and Location: Ricketts 203, Tuesdays and Fridays, 8 a.m. to 9:50 a.m.

### Course Description
Introduction to computer organization, assembler language, and operating
systems with a heavy emphasis on systems and low-level programming. Topics
include, but are not exclusively limited to:

* Organization/design of processors, memory and I/O.
* Numeric representation including binary integer and floating point number systems.
* Digital logic including Boolean algebra, gates, digital logic circuits, and memory.
* Assembly language including instruction formats, addressing modes, instruction types, flow of control, the assembly process, macros, linking, loading.
* Advanced architectures including RISC architectures and parallel architectures.
* Operating systems virtual memory, processes and interprocess communication.

**Prerequisite** CSCI 1200 (Data Structures).

### Required Textbooks

*Computer Organization & Design: The Hardware/Software Interface, 5th Edition* (2013), by Patterson and Hennessy.
[Amazon link.](http://amzn.com/0124077269)

### Optional Textbooks

*The C Language Reference Manual, 5th Edition* (2002), by Samuel P. Harbison and Guy L. Steele.
[Amazon link.](http://amzn.com/013089592X)

### Graduate Teaching Assistants
We have two Graduate TAs assigned to our class.
All office hours are typically held in the Amos Eaton, room 217, unless otherwise specified by the TA.

* Nikhil Mehta (mehtan4 AT rpi.edu): Office Hours: Amos Eaton 217, Wednesday, 4 p.m. to 5 p.m. and Thursday, 4 p.m. to 5 p.m.
* Yu Chen (cheny39 AT rpi.edu): Office Hours: Amos Eaton 217, Friday, 5 p.m. to 7 p.m.

### Schedule of Topics

* Introduction to Unix and C: Assignment 1.
* History, Performance and Why Parallelism?: P&H/Chapter 1 and class hand-out, Assignment 2.
* Assembly Language Programming MIPS and x86: P&H/Chapter 2 and hand-outs, Assignments 3 and 4.
* Digital Logic: P&H/Appendix B, Assignment 5.
* Computer Arithmetic: P&H/Chapter 3, Assignment 6.
* Building a Processor: P&H/Chapter 4, hand-out,  start of group project.
* Pipelining & Multiprocessors: P&H/Chapters 4 and 7 plus lecture notes, Assignment 7.
* Memory Hierarchy: P&H, Chapter 5, finish-up group project.

### Schedule of Homework and Quizzes and NO CLASS days

* Assignment 1 due on Tuesday, February 2nd.  Quiz 1 on Friday, February 5th.
* February 15, 2016 - February 16, 2016	President's Day holiday -- No classes.
* Assignment 2 due on Wednesday, February 17th.  Quiz 2 on Friday, February 19th.
* Assignment 3 due on Tuesday, March 1st.  Quiz 3 on Friday, March 4th.
* SPRING BREAK March 14, 2016 -- March 18, 2016
* Assignment 4 due on Tuesday, March 22nd.  Quiz 4 on Friday, March 25th.
* Assignment 5 due on Tuesday, April 5th.  Quiz 5 on Friday, April 8th.
* Assignment 6 due on Tuesday, April 19th.  Quiz 6 on Friday, April 22nd.
* Group Project due date, Friday April 29th.
* Assignment 7 due on Tuesday, May 3rd.  Quiz 7 on Friday, May 6th.

### Grading and Other Class Policies

*  4%: Problem of the day
*  10%: Lab sections
*  35%: 7 homeworks, 5 pts each -- due every other Tuesday.
*  42%: 7 quizzes, 6 pts each, given in class every other Friday.
*   9%: 1 project.

**Attendance Policy**: Attendance at lectures is not required, but
be aware that I may include material not necessarily covered in the
text or on the web page.  You are responsible for all announcements
made in lecture (e.g., any change in due dates).
Additionally, you *are* responsible for the **problem of the day**.

**Problem of the day**: Each day in lecture you are to turn in the problem assigned from the previous lecture.
Students are excused from handing this in on quiz days; turn it in at the beginning of the following lecture.
The twist is that actually solving the problem is optional, i.e., you will receive full credit by simply putting your name on the page.
With a very high likelihood, students actually attempting to solve the problem will achieve a deeper understanding of the material than those that simply write their name on the paper.

**Lab Sections**: Lab attendance is mandatory and you will be graded.
Keeping up with the labs will be the best way for your to make sure that you do not fall behind.

**Late Assignments Policy**: Three late days are permitted for assignments.
They will be consumed in whole day increments. In other words, if you are one hour late, that will
count as one day. 25 hours late will count as two days, etc. Once these are exhausted, late assignments
will not be graded.

**Grade Modifiers Policy**: Grade modifiers will be used in this
class. Nominally, for example, you expect to earn a B- if your score
is greater than 79.5 and less than 83.0, B if your score is greater
than 83 and less than 86, B+ if your score is greater than 86 and less
than 89.5. The same modifier points occur for the A, C and D ranges
except that there is no A+ nor is a D- allowed under the RPI Grade
Modifier Policy.

**Assignment Grading Criteria**: Programming assignments are graded
as follows: 15% for proper comments (e.g., each function should
indicate what it does) and 85% for a correct working
implementation. We typically divide the correctness points over key
functions working. For example, reading - worth 10 points,
writing -- worth 10 points as file correctly, and then doing the
calculation correctly -- worth 65 points. Note that programs that
either don't compile or generate a `core dump` typically get no more
than 20 points of the 85. Thus, your max score for a "properly
commented" program that fails in some fundamental way is only 35
points even if you spent 100 hours of time on it.  Non-programming
assignments/homeworks are graded on a per-problems basis. Typically 5
problems will be given and each is worth 20 points.

### Academic Integrity

While I strongly encourage you to form study groups and work
together in learning this material, the course project, homeworks and
programming assignments are to be done individually unless otherwise
noted by the assignment/project specification. What this means is that
you should do whatever is necessary to ensure your work remains your
work. For example, in doing programming assignments you might want to
prepend variable names with your initials. If during in the grading
process, it is determined that students shared or duplicated work,
those students will automatically take a zero for the offense plus a 5
point total average deduction. For a second offense, the student or
students involved will fail this course and a report will be sent to
the Dean of Students office which could result in additional
disciplinary action.

### Learning Outcomes
By the end of this course, you will be able to:

* Apply the concepts of the C programming language to the
construction of moderately complex software implementation problems.
* Apply the concepts of assembly language to correct and efficient translation
of a given C programming language into the course required assembly language(s).
* Apply the concepts of integer and floating point formats to convert
from the base-10 integer or scientific format into the correct machine
readable binary format.
* Apply the concepts of Boolean Algebra to simplify given Boolean equations.
* Apply the concepts of K-Maps to the problem of Boolean expression simplification.
* Apply the concepts of Performance to the analysis of computer performance problems.
* Apply the concepts of a multi-cycle datapath and control by showing in
written form the processing steps that different classes of
instructions require as they move through the datapath and control
hardware structures.
* Apply the concepts of a pipelined datapath and control by showing in
written form the processing steps that different classes of
instructions require as they move through the datapath and control
hardware structures.
* Apply the concepts of caching and memory hierarchy to solve a problem which
requires you to design the "best" cache system given particular
design constraints.
* Apply the concepts of parallel programming to the construction/implementation
of a correct and efficiently executing multi-threaded program.
