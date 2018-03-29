# 0x15. C - Simple Shell

Write a simple UNIX command interpreter.

## Requirements

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 14.04 LTS
* Your C programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* No more than 5 functions per file
* All your header files should be include guarded
* Use system calls only when you need to (why?)

## Allowed functions and system calls

* access (man 2 access)
* chdir (man 2 chdir)
* close (man 2 close)
* closedir (man 3 closedir)
* execve (man 2 execve)
* exit (man 3 exit)
* fork (man 2 fork)
* free (man 3 free)
* stat (__xstat) (man 2 stat)
* lstat (__lxstat) (man 2 lstat)
* fstat (__fxstat) (man 2 fstat)
* getcwd (man 3 getcwd)
* getline (man 3 getline)
* kill (man 2 kill)
* malloc (man 3 malloc)
* open (man 2 open)
* opendir (man 3 opendir)
* perror (man 3 perror)
* read (man 2 read)
* readdir (man 3 readdir)
* signal (man 2 signal)
* strtok (man 3 strtok)
* wait (man 2 wait)
* waitpid (man 2 waitpid)
* wait3 (man 2 wait3)
* wait4 (man 2 wait4)
* write (man 2 write)
* _exit (man 2 _exit)
* isatty (man 3 isatty)
* fflush (man 3 fflush)

## Testing
Interactive
![](https://mail-attachment.googleusercontent.com/attachment/u/0/?ui=2&ik=ceed93629a&view=att&th=1626fc9cb5b60407&attid=0.1&disp=safe&zw&saddbat=ANGjdJ8aL7O-qR39b_Bq2BoZzFmS48qsAzyV9uNPXa1ufs0seEToFNGIeO9uIZo8XtPYtu19Mt6F0I57L0OcPfSkHRnNO-IzmGJbmTyx2pvlF602WV7JcrV_qgF4x10brnq43RKa-9Su8nAnLBFqWfORLcvpLuFlMaL7BaePCV4SalCFrxuadM2OVTCq8cx1xEx7H1082qzS01z79lVCEcv-KddI3zRbow2vNvnkWCxScb6ZTmSDmXUljId-K9ywc6R5xvN6SVv5srHXCL2rmLKADaHVkfwdffiVQN_DiHJNirwYdkrZ-Jd7j0bAmxXO0MCUQGfuZ9Vuo0vWPHk9aJuXVTfDP04vFwoQXVQGxER57AOfv-kLFk8XKPLqtiQ4ddwXqIpjjjBbyil8B6OePrv7LW3QNXZX3z9a2WbXHDsY68JGc5ujvbcHbpV5SuYduvsVNuu1GMQXU4SbOT1hV-W6kWZNTu6eyLsMNI7bcYQVsT9rD6jgTXEh5vbKKBCQl2vIzeyaOWpp8zzebuHkxyAGcKR747f_LydWMcp1T73Nx39sJh1VyEAbkV8pyOdrkWOI6-aBo0Ygtwlw764g1VVMPeyiCeHNWBPJEGnqYA, https://mail.google.com/mail/u/0/)

Non-interactive
![](https://mail-attachment.googleusercontent.com/attachment/u/0/?ui=2&ik=ceed93629a&view=att&th=1626fc9cb5b60407&attid=0.2&disp=safe&zw&saddbat=ANGjdJ8GvH4dQKLeTp1SKLh3OyLXx6zZThrEOv9sokNIUL07b6cjic-8pJzHirAtLvQyJIHQPPfooThDABvZ_ovvfopMp_kNT3LQSlVZwzH6KRW4TTPOpDo8HRDawjFRGBw0X16FLrxB499Ez-s8q9_OIp9p5fzi_THIXhUqAyyDKV0CPSWoOKk5dz2TBZhHGDpC9HOuVgsATYijkuSIAJMHWtGTnv3mTyJrES0x5N6iz_P0nimnU_zR2Z5WSSgmg8cjLsA-St9SnJ9Jmp74bQrAnGxSQMuoJ2hMwWfCzmJJm8vHdqCLGCAtgWevQeZ4DwnizGggwCxYFeWhaxxCwvRptaYNNs2WMFluZzlrH1azzlYRsAFW_ENcupTWjhzRNtVRqSxSlVAS4BdbxoBYio5au3isVQC8FMrT_p0tOrpTn01pHl8vgLcYKmIxTvpbKpa6i2DARhzXbo1BkU-7GXczvW8jDqIi0mOyXzUfP3kli0UnT4negXtmBbpYC-1IWkTY193uvenHJNB0gAaCW5hUCBJjUidj-S7UuNmEC9zYBu6fY5SDnmX7i96z53ppXion9GBUblNo7Zas_tXYFg1pPzsBR06-AAJbOxh6cQ, https://mail.google.com/mail/u/0/)