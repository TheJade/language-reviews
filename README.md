# review-language-projects

https://code.visualstudio.com/docs/remote/containers

https://www.wikihow.com/Compile-a-C-Program-Using-the-GNU-Compiler-(GCC)

# to summarize

to work in a new docker container

1. create desired Dockerfile in VS Code project folder
2. open VS Code Command Palette (F1) and use *Remote-Containers: Add Development Container Configuration Files...*. Then select from exsisting dockerfile. This will create a .devcontainer folder with the config file.
3. open VS Code Command Palette (F1) and use *Remote-Containers: Open Folder in Container*. If the build was successful you should now be in your docker container

to work with an exsisting docker image
1. open folder with dockerfile and .devcontainer folder
2. open VS Code Command Palette (F1) and use *Remote-Containers: Open Folder in Container*. If the build was successful you should now be in your docker container
3. if you make an edit to the docker file you'll have to *Remote-Containers: Rebuild Container*

to run a c program
1. cd into folder if ya want
2. run the below:
    
    *gcc [script name] -o [executable file name should end in .exe]*

# C programming differences

- strings are an array of chars. This makes it difficult to reassign it.
- create custom data types with [structs](https://www.w3schools.com/c/c_structs.php)
- use [pointers](https://www.tutorialspoint.com/cprogramming/c_pointer_arithmetic.htm) to save memory
- always pass pointers to functions or else it creates a whole new item in memory