# String Transformation

- You are porvided Two Strings S1 and S2. In S1, you can perform operations such as adding, remvoing or swapping letters.
- Each operation has a specific Cost value associated with it, as shown below

* If a letter is removed from S1, the cost is 0. 
* If a pair of letters are swapped in S1 the cost is 0.
* If a new letter is added to the end of S1 then cost is 1.

- Your task is to find and return an integer value representing the minimum cost required to transform string S1 to S2.


Note: The string s1 and s2 consist uppercase alphabets only.



INPUT1:
ABD
AABCCAD

OUTPUT1:
4


# Explaination.
- Here S1=ABD and S2= AABCCAD. We can perform the following steps to convert S1 into S2

1. Add a new element 'A' at the end of S1. This will make the composition ABDA. Now swap the last 'A' first with 'D' and then with 'B'. This will result in AABD and the cost will be 1.
2. Add two 'C's at the end. This will make the composition AABCCD. After this swap the 'D' with the last 'C'. This will result in AABCCD and the cost will be 2.
3. Add one 'A' to AABCCD to make the string AABCCDA and then swap the last 'A' with 'D'. This will finally make the string AABCCAD, and the cost will be 1.

The total cost will be 4(1+2+1), Hence, 4 is returned as the output.


