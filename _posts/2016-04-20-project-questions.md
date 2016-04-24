---
layout: post
title:  Project Questions
date: 2016-04-23 19:00:00
category: questions
---

<a id="Q1"></a>

#### I just wanted to let you know that I had to change the Makefile to compile with the -lm flag to get the project to successfully compile and link (it looks like the man pages for the math functions say to link with -lm).  Not sure if other people are running into this as well but figured it could be helpful.

Thanks for sharing!

---------------------------------------

<a id="Q2"></a>

#### How is data stored in the cache? Is it in the `cache[i].replacement[j]`? If not what does the `cache[i].replacement[j]` do and why is it set to `j`?

This simulation doesn't actually store any data but rather *metadata*.
Otherwise, we would have supplied a full image for your CPU simulator to run on.
But at any rate, it's just a quick way to simulate moving your cached data.
Your cache in your CPU won't physically copy the data around but that's one way to approximate LRU.
Storing the LRU index in the `replacement` variable is just as good and won't require you to copy your data around as that is not how a cache behaves.
Although seeing how we are *simulating* this, you could bypass the `replacement` variable altogether and just propagate the entire set of cache lines on each access.

---------------------------------------

<a id="Q3"></a>

#### Isn't the custom cache data structure already made for us with the cache[i].assoc and cache[i].replacement? If not, where do we construct the custom data structure?

Yes, the cache implementation has been written for you.
You just need to fill in the details.

---------------------------------------

<a id="Q4"></a>

#### What is the purpose of the `replace_on_miss()` , `update_on_hit()`, and `trap_address()` functions?

`iplc_sim_trap_address()` should be called from primarily three locations:

* near the top of `iplc_sim_parse_instruction()` to get the address of your instruction
* inside `iplc_sim_push_pipeline_stage()` to capture the address of `store` instructions
* inside `iplc_sim_push_pipeline_stage()` to capture the address of `load` instructions

Since you have extracted the address at this point, now is as good a time as any to check if that address is cached.
If you find it, call `iplc_sim_LRU_update_on_hit()` to update your book-keeping info.
If not, call `iplc_sim_LRU_replace_on_miss()` to insert it and possibly replace another cached value.
