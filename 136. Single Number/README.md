<h2>136. Single Number</h2>

<h3>Strategy</h3>

<h4>Python3</h4>

Initalize a variable `result`.

`XOR` all the number from the list `nums`.

We will find that only the answer won't be 'XOR' to be zero.

Other number in the list `nums` will turn into zero, since those appear twice.

<h4>C++</h4>

Similar with Python, but we store the number use vector `nums`

We can use variable type `auto`.

The statement down below means we can use `i` to take the element from vector `nums`.

```c++
for (auto i : nums)
```

<h4>Reference</h4>

[Leetcode link](https://leetcode.com/problems/single-number/)
