A solution I have written to solve the Palindrome Number programming challenge.
<br>
<br>
Some stats about my solution:
<ul>
	<li>11510 / 11510 test cases passed.</li>
	<li>Runtime: 30 ms <code>runtime beats 27.58 % of cpp submissions.</code></li>
	<li>Memory Usage: 5.7 MB <code>memory usage beats 99.23 % of cpp submissions.</code></li>
</ul>
<br>
<br>
The challenge is as follows (https://leetcode.com/problems/palindrome-number/):
<br>
<br>
<div><p>Given an integer <code>x</code>, return <code>true</code> if <code>x</code> is palindrome integer.</p>

<p>An integer is a <strong>palindrome</strong> when it reads the same backward as forward.</p>

<ul>
	<li>For example, <code>121</code> is a palindrome while <code>123</code> is not.</li>
</ul>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> x = 121
<strong>Output:</strong> true
<strong>Explanation:</strong> 121 reads as 121 from left to right and from right to left.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> x = -121
<strong>Output:</strong> false
<strong>Explanation:</strong> From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> x = 10
<strong>Output:</strong> false
<strong>Explanation:</strong> Reads 01 from right to left. Therefore it is not a palindrome.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>-2<sup>31</sup>&nbsp;&lt;= x &lt;= 2<sup>31</sup>&nbsp;- 1</code></li>
</ul>

<p>&nbsp;</p>
<strong>Follow up:</strong> Could you solve it without converting the integer to a string?</div>
