---
layout: post
title:  Project Questions
date: 2016-04-28 12:00:00
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

---------------------------------------

<a id="Q5"></a>

#### Aren't the `if` conditions at 483 and 489 identical?

Yes, sorry about that.  You can remove one of them.

---------------------------------------

<a id="Q6"></a>

#### Is this MIPS simulator one with full forwarding?

Yes, and areas where some special handling is required should be spelled out in the starter code.

---------------------------------------

<a id="Q7"></a>

#### Since this is a simulator, does it matter what stages we identify hazards in? (e.x. FETCH & DECODE vs DECODE & ALU)

Not really.  As long as your numbers line up (or are close) with our numbers, you should be fine.

---------------------------------------

<a id="Q8"></a>

#### I am having issues seeing a way to detect hazards without heavy modification of your template code.
```
Example 1
LW $1, 4($2)
LW $3, 4($1)
Because the 4($1) is parsed into "base_reg" there is no way to detect this hazard within the template code you have given us. 

Example 2 (very problematic)
LW $1, 4($2)
addi $3, $5, 1
vs 
LW $1, 4($2)
add $3, %5, $1

The problem I see here is that the existing code does not ID a $2 vs a 2.
// copy down over $ character than return atoi
for( i = 0; i < strlen(reg_str); i++ )
   reg_str[i] = reg_str[i+1];
return(atoi(reg_str));
```
Yes, I see what you are saying.  But if you look in the provided `iplc_sim_parse_instruction()` function, `-1` values are passed in anyway so you don't have to worry about that.

---------------------------------------

<a id="Q9"></a>

#### In the provided code, the rtype_t struct is used for both R-format (e.g. add) and I-format (e.g. addi) MIPS instructions. It uses the same variable to store the second source reg for an R-format instruction and the immediate value for an I-format. I can foresee this causing inconsistencies with the pipeline. For instance, with this hypothetical series of instructions:
```
lw $8, 0($16)
addi $9, $10, 8
```

#### The addi is represented by an rtype_t struct with the constant 8 stored in the variable reg2_or_constant. When the addi is in the ALU stage and the lw is in the MEM stage, we would check to see if the lw_t's dest reg is the same as either of the rtype_t's source regs and stall if it is. But in this case, it would see that the lw_t's dest_reg $8 has the same value as the rtype_t's reg2_or_constant 8 and stall the pipeline even though the addi doesn't use register 8. It seems like there should either be a different struct for I-format instructions or that the rtype_t struct should have different variables for the second source reg of an R-format instruction and the constant of an I-format instruction. What is your advice?


Actually, I think the above question was referring to the same issue now that I have read it again.
Chalk it up to a bug on my part.
Cases where such code sequences exist should hopefully be few in number, but you are correct.
Do the best with the code provided.
Substandard code is unfortunately a fact of life.

---------------------------------------

<a id="Q10"></a>

#### For the method: `iplc_sim_LRU_update_on_hit(int index, int assoc)`, what is the purpose of the `assoc` argument?

It is the entry into your cache set for when you are using a cache configuration with an associativity greater than one.

---------------------------------------

<a id="Q11"></a>

#### I am having a bit of trouble implementing the branch predictor. I understand the idea of checking the program counter for the next instruction, but I am having trouble seeing how that is implemented. I see that each branch has two registers, but those are not related to the program counter and are set to -1 by default. If there is no program counter variable, how should I check the next instruction?

Inside of your `iplc_sim_push_pipeline_stage()` function, you are able to access the address of instructions at all stages of your pipeline.
When your branch instruction is in the decode stage, you can check to see if the address of your newly-inserted follow-up instruction in the fetch stage is greater than four bytes away.

---------------------------------------

<a id="Q12"></a>

#### When we push the stages through the pipeline, do we need to use if statements to cover each type of instruction and its associated member variables (type, address, stage variables)? Or will simple assignment operators properly copy the stage:
```
pipeline[WRITEBACK] = pipeline[MEM];
pipeline[MEM] = pipeline[ALU];
pipeline[ALU] = pipeline[DECODE];
pipeline[ALU] = pipeline[FETCH];
```

That would work if those values were basic data types (`char`, `int`, `float`, etc.) but seeing as they are actually `struct`s, you should probably use `memcpy()` and friends.

---------------------------------------

<a id="Q13"></a>

#### I am also confused about replace on miss. I see that there is a replacement pointer in the data structure. Are we supposed to make it point to the tag that should be replaced next? I am not sure how it is supposed to work.

The only reason we do that is because the number of entries is dynamic.
See the answer for <a href="#Q2">question 2</a> above.

---------------------------------------

<a id="Q14"></a>

#### I'm still confused about iplc_sim_trap_address().

#### My understanding is that it's meant to return 1 and call iplc_sim_LRU_update_on_hit() if the address was in the cache, and return 0 and call iplc_sim_LRU_replace_on_miss() if not.

#### So, I'm supposed to do something similar to what we did in Lab 8, right? I take an address, and from those 32 bits I extract index, tag and block offset? If the only argument is address, how should I figure which bits belong to which? Do I calculate it each time within the function using from the size of the cache data structure? If I'm misinterpreting or missing anything the function is supposed to do, please let me know.

Yes, `iplc_sim_trap_address()` takes a single value which is the address.
In the `iplc_sim_init()` function, global variables `cache_index`, `cache_blocksize`, and `cache_assoc` are set and available for you to use.
From that address and those variables you should be able to extract the tag, index, and block offset bits.

---------------------------------------

<a id="Q15"></a>

#### I was wondering if late days are applicable to the project due tomorrow.

Late days for the project will be deducted *n* days at a time where *n* is the number of students in your group.
So if your group has four members and uses two late days, a total of eight late days will be used, distributed across all members.
If a student runs out of late days but other members have spare late days they can donate some to that student.

---------------------------------------

<a id="Q16"></a>

#### I was hoping for a clarification on the project due date. In the PDF is says we need to hand in a card copy to you but in the README it says it's due at midnight. Is it due in class or by midnight?

It's due at midnight.
You can simply add a pdf, Word document, etc. to the repository.
This report may possibly include graphs or other evidence backing up your claim that a certain cache configuration is "the best."

---------------------------------------

<a id="Q17"></a>

#### Also what does this line mean? Is it okay if our final code is just on the assignemnt page under the comp org ogranization on github?

#### PLEASE INDICATE WHAT ACCOUNT YOUR FINAL CODE IS LOCATED IN ON GITHUB.

As this is my first experience using GitHub for Education the team-based project management was still a little fuzzy in my mind as I put this project together.
You can ignore that part -- the TAs and I know where to find the projects! :)
