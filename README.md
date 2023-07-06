# Push_Swap
This project aims to sort data on a stack, with a limited set of instructions, using
the lowest possible number of actions. I am using Radix algorithm for an
optimized data sorting.</br>

Here are the allowed actions : </br>
&nbsp;<b>sa</b> (swap a): Swap the first 2 elements at the top of stack a.</br>
&nbsp;<b>sb</b> (swap b): Swap the first 2 elements at the top of stack b.</br>
&nbsp;<b>ss</b> : sa and sb at the same time.</br>
&nbsp;<b>pa</b> (push a): Take the first element at the top of b and put it at the top of a.</br>
&nbsp;<b>pb</b> (push b): Take the first element at the top of a and put it at the top of b.</br>
&nbsp;<b>ra</b> (rotate a): Shift up all elements of stack a by 1.</br>
&nbsp;The first element becomes the last one.</br>
&nbsp;<b>rb</b> (rotate b): Shift up all elements of stack b by 1.</br>
&nbsp;The first element becomes the last one.</br>
&nbsp;<b>rr</b> : ra and rb at the same time.</br>
&nbsp;<b>rra</b> (reverse rotate a): Shift down all elements of stack a by 1.</br>
&nbsp;The last element becomes the first one.</br>
&nbsp;<b>rrb</b> (reverse rotate b): Shift down all elements of stack b by 1.</br>
&nbsp;The last element becomes the first one.</br>
&nbsp;<b>rrr</b> : rra and rrb at the same time.</br>
</br>

## To launch the project from your terminal :
$make</br>
### To get the details of all the actions used
$./push_swap 2 4 5 7 1</br>
### To get the numbers of actions needed
$./push_swap "2 1 3 4 5 " | wc -l</br>
