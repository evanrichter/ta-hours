# AppSec TA Hours 21 Feb 2021

Today we will cover things in General Topics, then move on to live Q&A. All
topics will be about Assignment 1 at this time.

## General Topics

* Code Coverage
  - Generating a visual report
    - `lcov` can generate a report in html format
    - How to run multiple test cases and get overall coverage?
  - Providing feedback for fuzzing
* Bug Hunting / What makes a crash?
  - Segmentation Faults: what a segfault is, how to cause them

  example:

     char myarray[100] = {0};
     char unimportant_char = 0;
     int return_ptr = 0;
     ...
     int i = user_input();
     ...
     myarray[i] = 12; // valid range for i is 0-99
     ...

     use gdb to look around for nearby "important variables"

     where is the array located?
     - in it's own memory page
     - stack
     - heap
     - global

  - Type Casting in C
    
    char c = 'c';
    unsigned char d = 'd';

    d = c;

  - Error handling: look in manual pages

    run `man malloc` in your shell

* How we will grade the signed commits
  - Github repo -> commits -> look for green "verified" marker -> and check it
    was NOT signed by GITHUB's key

    you have to:
    - create your own personal gpg key
    - copy + paste the public half of the key to your github profile
    - then github will associate your profile with your key

## Live Q&A

* How does a fuzzer create new files?
  - for AFL and friends: mutations

* is exiting gracefully a successful bug resolution?
  - depends.
