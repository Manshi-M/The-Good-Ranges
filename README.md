Consider you have a set A. 
A Good Range is the largest range that contains only one element from the set A.
Now you are provided with the number range 1 to N and M queries. 
In each query, an integer X is added to set  and for each query, you have to output the sum of left and right border indices of all the Good Ranges.
For example. N = 10, and in the first query 2 is added to set A. 
The Good Ranges contain the range [1,10] and the sum is 11. Here [2,2] is also a range containing only one element from the set but it isn't the largest one. 
Now suppose 5 is added to the set, then the largest range containing only 2 is [1,4] and largest containing only is [3,10], so the sum is 1+4+3+10=18.

Sample Input:
10 10
2 
7
5
9
6
1
8
10
3
4

Sample Output:
11
20
30
46
58
61
77
96
102
110
