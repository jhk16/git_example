How to use git, bash?
=====================

## Bash commands ###


* cd (change directory)
```bash
$ cd ..     # change directory to upper directory
$ cd ~      # go to user's home directory
$ cd /home/user/directory
```

* ls (list directory contents)
```bash
$ ls        # print directory where you are currently 
$ ls -a     # print all files include hidden files
$ ls -al    # use a long listing format, also show hidden files
$ ls ~/
$ ls /home/user/directory
```

### git commands
* git clone
```bash
$ git clone http://~~~.git # clone the project to local 
```  

* git add
```bash
$ git add <file or directory>
$ git add foo bar boo
$ git add *.c
```  

* git commit
```bash
$ git commit -m "message what you want" # Record changes to the repository with message
# git commit    # if you commit without '-m' option, editor will be opened and you write message to that.
```
* git push
```bash
$ git push 
$ git push origin master
```

* git pull
```bash
$ git pull
```

* git checkout
```bash
$ git checkout branch       # move to branch
$ git checkout <some file>  # reset file to last state

