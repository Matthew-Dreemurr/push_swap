This project involves sorting data on a stack, with a limited set of instructions, and the smallest number of moves. To make this happen, you will have to manipulate various sorting algorithms and choose the most appropriate solution(s) for optimized data sorting.










# Push swap

## The logic

### How I manage and store the data ?

```c
typedef struct s_stack
{
	//stack a
	int		*a;
	//stack b
	int		*b;
	//actual used space
	int		len_a;
	int		len_b;
}				t_stack;

typedef struct s_data
{
	//stack struct
	t_stack	stack;
	//array with all arg
	int		*set;
	//array with all the arg sovle
	int		*solve;
	//tmp ptr for special case
	void	*tmp;
	//copy of `ac` arg of main
	int		ac;
}				t_data;
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
    
    ### The instructions :
    
    - NB
        
        How to read arrow.
        
        ```c
                   [Turn]-----:
                   v          v
        .----------:          :---> [End]
        ^          |          |
        [Start]    :----------:
        ```
        
    
    sa : swap a
    
    - intervertit les 2 premiers éléments au sommet de la pile a. Ne fait rien s’il n’y en a qu’un ou aucun.
    
    ```c
     [ A ]  | [ A ]
    :>[1].: |  [2]
    :.[2]<: |  [1]
      [3]   |  [3]
    ```
    
    sb : swap b
    
    - intervertit les 2 premiers éléments au sommet de la pile b. Ne fait rien s’il n’y en a qu’un ou aucun.
    
    ```c
     [ B ]  | [ B ]
    :>[A].: |  [B]
    :.[B]<: |  [A]
      [C]   |  [C]
    ```
    
    ss : sa et sb en même temps.
    
    ```c
     [ A ]   [ B ]  |  [ A ]  [ B ]
    :>[1].: :>[A].: |   [2]    [B]
    :.[2]<: :.[B]<: |   [1]    [A]
      [3]     [C]   |   [3]    [C]
    ```
    
    pa : push a
    
    - prend le premier élément au sommet de b et le met sur a. Ne fait rien si b est vide.
    
    ```c
     [ A ]   [ B ]  |  [ A ]  [ B ]
      [ ]<---.[A]   |   [A]    [B]
      [ ]     [B]   |   [ ]    [C]
      [ ]     [C]   |   [ ]    [ ]
    ```
    
    pb : push b
    
    - prend le premier élément au sommet de a et le met sur b. Ne fait rien si a est vide.
    
    ```c
     [ A ]   [ B ]  |  [ A ]  [ B ]
      [1].--->[ ]   |   [2]    [1]
      [2]     [ ]   |   [3]    [ ]
      [3]     [ ]   |   [ ]    [ ]
    ```
    
    ra : rotate a
    
    - décale d’une position vers le haut tous les élements de la pile a. Le premier élément devient le dernier.
    
    ```c
    [ A ]      |  [ A ]
    :--.[1]<:  |   [2]
    | :>[2].:  |   [3]
    | :.[3]<:  |   [4]
    | :>[4].:  |   [5]
    | :.[5]<:  |   [6]
    :-->[6].:  |   [1]
    ```
    
    rb : rotate b
    
    - décale d’une position vers le haut tous les élements de la pile b. Le premier élément devient le dernier.
    
    ```c
    [ B ]      |  [ B ]
    :--.[A]<:  |   [B]
    | :>[B].:  |   [C]
    | :.[C]    |   [D]
    :-->[D]    |   [A]
        [ ]    |   [ ]
        [ ]    |   [ ]
    ```
    
    rr : ra et rb en même temps.
    
    ```c
       [ A ]      [ B ]   |  [ A ] [ B ]
    :--.[1]<:  :--.[A]<:  |   [2]   [B]
    | :>[2].:  | :>[B].:  |   [3]   [C]
    | :.[3]<:  | :.[C]    |   [4]   [D]
    | :>[4].:  :-->[D]    |   [5]   [A]
    | :.[5]<:      [ ]    |   [6]   [ ]
    :-->[6].:      [ ]    |   [1]   [ ]
    ```
    
    rra : reverse rotate a
    
    - décale d’une position vers le bas tous les élements de la pile a. Le dernier élément devient le premier.
    
    ```c
       [ A ]   |  [ A ]
    :-->[1].:  |   [6]
    | :.[2]<:  |   [1]
    | :>[3].:  |   [2]
    | :.[4]<:  |   [3]
    | :>[5].:  |   [4]
    :--.[6]<:  |   [5]
    ```
    
    rrb : reverse rotate b
    
    - décale d’une position vers le bas tous les élements de la pile b. Le dernier élément devient le premier.
    
    ```c
       [ B ]   |  [ B ]
    :-->[A].:  |   [D]
    | :.[B]<:  |   [A]
    | :>[C]    |   [B]
    :--.[D]    |   [C]
        [ ]    |   [ ]
        [ ]    |   [ ]
    ```
    
    rrr : rra et rrb en même temps.
    
    ```c
       [ A ]      [ B ]   |  [ A ] [ B ]
    :-->[1].:  :-->[A].:  |   [6]   [D]
    | :.[2]<:  | :.[B]<:  |   [1]   [A]
    | :>[3].:  | :>[C]    |   [2]   [B]
    | :.[4]<:  :--.[D]    |   [3]   [C]
    | :>[5].:      [ ]    |   [4]   [ ]
    :--.[6]<:      [ ]    |   [5]   [ ]
    ```

### Sort methode 
I will use ardcode sort for the set that dont exceed 5 number.

For the biger set i will use [[Radix]] with [[Bitwise Operators]].

The way i manage the bitwise:
```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 2147483647;

    printf("Size of int: %ld bit\n", sizeof(int) * 8); // Size of int in bit
    for(int y = 0; y < (sizeof(int) * 8); y++)
        printf("%d", 1&(i>>y)); // Skip bit and compare with 1
                                // The `&` operator will be true only if the two
                                // bit compare is 1.
                                // 1 in binary is 0001
                                // So all the digit exept the last will be false
    return 0;
}

Output:
Size of int: 32 bit
11111111111111111111111111111110
```

### How I find instruction ?





This work is published under the terms of **[42 Unlicense](https://github.com/gcamerli/42unlicense)**.