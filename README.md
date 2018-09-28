# tinyshell
A tiny, bare-bones shell simulator. 

This shell has a simple prompt, with no keyboard shortcuts.
It has built in commands for quit, fg, bg, jobs, and help.
It can run programs like any shell by forking and execing. 
It is not a very elegant shell, instead of handling SIGCHLD, it blocks it and reaps manually at the end.

Created for IIT's CS351 (please do not plagiarize this work for your classes)
