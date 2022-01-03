# push_swap

This project involves sorting data on a stack, with a limited set of instructions, and the smallest number of moves. To make this happen, you will have to manipulate various sorting algorithms and choose the most appropriate solution(s) for optimized data sorting.










## The logic

### How I manage and store the data ?

```c
 typedef struct s_data
{
// [ a ] & [ b ]
    int  *stack;
// store data set convert to int
    int  *set;
// solved set
    int  *solve;
// Total length
    int  len;
// index of the first element in [ b ] 
    int  sep;
}               t_data;
```

1. Store input
    1. alloc `struct.set` sizeof(int) * av
    2. char to int
    3. check if av[x] ≥ `INT_MAX` || ≤ `INT_MIN`
    4. check if there is no repetition
2. Solve `struct.set`
    1. copy `struct.set` in `struct.solve`
    2. use sort algorithms depend the case
    3. solve `struct.solve`
3. Init stack `a` `b`
    1. `struct.stack` alloc sizeof(int) * (av * 2)
    2. use `struct.solve` index to hash `struct.set` in `a`
    3. `struct.sep` = first index of `b`
    4. `struct.len` = `av`
    
    ```jsx
    struct.set    [12][4][-4][12312][-44444]
    
    struct.solve  [-44444][-4][4][12][12312]
           index  [0]     [1] [2][3] [4]
    
    struct.stack  [3][2][1][4][0] [ ][ ][ ][ ][ ]
                   ^-----------^   ^-----------^
                       [ a ]       |     [ b ]
                                [ Sep ]
    ```
    
    ### How  I sort data ?
    
    ### How  I find instruction ?





This work is published under the terms of **[42 Unlicense](https://github.com/gcamerli/42unlicense)**.
