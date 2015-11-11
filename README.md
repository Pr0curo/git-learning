# Git-Learning

##  Basic initalization
1. ```git init``` in the directory of the project you want to "cvs"
2. add files to staging via ```git add .```
3. do your initial commit ```git commit -m "initial commit"```  
4. add your local repository to your remote repository via ```git remote add <name> <git repository>```  
	e.g. ```git remote add git-learning https://github.com/Pr0curo/git-learning.git```
5. ```git push origin master```

## Working with Branches
- show all local branches ```git branch``` lists all branches  
- create a new branch ```git branch <branch-name>```  
- to change to the new branch ```git checkout <branch-name>```  
- to create a new branch and check it out in one step use ```git checkout -b <branch-name>```  
- to add the new local branch to the remote repository use ```git push -u origin <branch-name>```  

make the changes and do whatever you want

- to merge the branch change to the destination branch via ```git checkout <destination-branch>``` and then ```git merge <source-branch>```  
after this you can delete the local branch via ```git branch -d <branch-name>``` and to remove the remote branch use ```git push origin :<source-branch>```  

## Show Log
 ```git log``` for commit history  
 ```git log --pretty=oneline --abbrev-commit``` for short (oneliner) commit history  
 ```git log --oneline``` einfacher  

