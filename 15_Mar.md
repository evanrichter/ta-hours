# AppSec TA Hours 15 Mar 2021

Today we will cover things in General Topics, then move on to live Q&A.

Please keep questions to Assignments 1 and 2.

## General Topics

 * `printf` debugging
   * what happens when...
     - integer overflow?
 * What's a file? Python struct
 * Return values in C
   * How to avoid reading bad data? How to avoid crashing when data is
     completely messed up?
     - Just go for it, but check for errors! (Read the man pages)
 * Phishing

### Didn't cover
 * Root cause vs. place of crash (saved for thursday)

## Live Q&A

 * Repo setup for Assignment 2
   * `git init` (required for every new git repo), will create a new .git folder
 * Setting up git from scratch?
   * setup GPG signing again, make new key, add to github
   * make a new ssh key, add to github
   * setup the `git config global.email` type of config
 * How to get started with Assignment 2? Where to look? Tools?
   * [SQLite Browser](https://sqlitebrowser.org/) is handy for practicing sql
     injection
   * Burp Suite for manual/automatic
   * Manual poking around (run the server and use a browser)
 * Testing for Assignment 2
   * dynamic: actually running the full http server
     * shell scripting with curl, and checking responses with error codes in
       bash, or grepping through the response page, etc
     * python script using `requests` or `urllib`, etc
     * no Django specific documentation
   * static (ish): using Django tests
     * not really intended for security property testing
     * not as easy to "expect" what the test suite will do
     * decent documentation directly for Django
 * Version of Django?
   * 3.1.7 confirmed working, installed using `pip3 install django`

