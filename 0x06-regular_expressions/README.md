Concepts
For this project, we expect you to look at this concept:

Regular Expression
Background Context
For this project, you have to build your regular expression using Oniguruma, a regular expression library that which is used by Ruby by default. Note that other regular expression libraries sometimes have different properties.

Because the focus of this exercise is to play with regular expressions (regex), here is the Ruby code that you should use, just replace the regexp part, meaning the code in between the //:

sylvain@ubuntu$ cat example.rb
#!/usr/bin/env ruby
puts ARGV[0].scan(/127.0.0.[0-9]/).join
sylvain@ubuntu$
sylvain@ubuntu$ ./example.rb 127.0.0.2
127.0.0.2
sylvain@ubuntu$ ./example.rb 127.0.0.1
127.0.0.1
sylvain@ubuntu$ ./example.rb 127.0.0.a

Tasks 📃
Note: Each Ruby script in the project matches regular expressions based on an argument passed to it via the command line.

0. Simply matching Holberton

0-simply_match_holberton.rb: Ruby script that matches the regular expression School.
1. Repetition Token #0

1-repetition_token_0.rb: Ruby script that matches the regular expression hbn with between 2-5 t's in between hb and n.
2. Repetition Token #1

2-repetition_token_1.rb: Ruby script that matches the regular expression hn with 0 or 1 occurrences of b and 0 or 1 occurrences of t in between h and n.
3. Repetition Token #2

3-repetition_token_2.rb: Ruby script that matches the regular expression hbn with 1 or more t's in between hb and n.
4. Repetition Token #3

4-repetition_token_3.rb: Ruby script that matches the regular expression hbn with 0 or more t's in between hb and n.
5. Not quite HBTN yet

5-beginning_and_end.rb: Ruby script that matches a regular expression starting with h and ending with n with any single character in between.
6. Call me maybe

6-phone_number.rb: Ruby script that matches a regular expression representing a 10-digit phone number.
7. OMG WHY ARE YOU SHOUTING?

7-OMG_WHY_ARE_YOU_SHOUTING.rb: Ruby script that matches regular expressions of uppercase letters.
8. Textme

100-textme.rb: Ruby script that runs statistics on TextMe app text message transcations.
Output: [SENDER],[RECEIVER],[FLAGS] where
[SENDER] is the sender phone number or name (including country code if present).
[RECEIVER] is the receiver phone number or name (including country code if present).
[FLAGS] is the flags that were used.
