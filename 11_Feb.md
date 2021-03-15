# AppSec TA Hours 11 Feb 2021

## Common Questions

* debug with gdb and compile with `gcc -g` flag to get better debugging. use
  gef: https://github.com/hugsy/gef
* the char datatype in C does not have to be a printable character
* how to know what types of files to throw at the program...
  sldkjflsdkjsdkfjslkdfjskdjf
  only way to know how the bytes affect the program is to look at the program
  itself, and the way it parses and uses the data given.

* how to make giftcard files???
  python, printf, echo...

* how different do the two crashes need to be??
  must SEGFAULT or crash on different lines of C code

* how to hang program?
  cant give much away
  use the timeout command (man timeout)
  look at the program record type

* **invite me to your github project**
  my username is evanrichter

* ./configure and getting CI to work
  make tests.sh script
  google shell scripting or bash scripting

* man pages (malloc, calloc, feof, etc)
  run `man malloc`
  "man" is short for "manual"

* intended functionality of program, crashes to expect (SEGFAULT??)
  start at main, work down, see how arguments are expected
  
  crashes to expect: mostly just SEGFAULTs (segmentation fault)
  memory is laid out in segments when running in memory:
  - heap
  - stack
  - text section (code)
  - other
  - whatever else
  - manual stuff from mmap

  All valid crashes for this assignment:
  segments have permissions: Read Write Execute
  NULL (0x000000000):  `int i = *0x0000000`
  wild pointer dereference: `int i = *0xbad_10ca1`

* how to submit the assignment
  newclasses, you will paste a link to your github repo.
  do as much as you can for the first turnin, so you get the most feedback
  submit your commit hash too, Wolfgang :)

we have a textbook?
[yes](https://bobcat.library.nyu.edu/primo-explore/fulldisplay?docid=COURSES000344691&context=L&vid=NYU&lang=en_US&search_scope=all&adaptor=Local%20Search%20Engine&tab=all&query=any,contains,The%20Art%20of%20Software%20Security%20Assessment:%20Identifying%20and%20Preventing%20Software%20Vulnerabilities%20&sortby=rank&mode=basic)


## Follow up

* provide some articles on code review?
* find out level of detail for the writeup sections




