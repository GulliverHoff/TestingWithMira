#include <iostream>
#include <unistd.h>
#include <sys/wait.h>
#include <pty.h>
#include <utmp.h>
#include <cstdlib>

void open_pty_terminal(const char* program) {
    int master;
    pid_t pid = forkpty(&master, nullptr, nullptr, nullptr);
    
    if (pid == -1) {
        perror("forkpty");
        exit(EXIT_FAILURE);
    } else if (pid == 0) {
        // Child process
        execlp(program, program, nullptr);
        perror("execlp");
        exit(EXIT_FAILURE);
    } else {
        // Parent process
        int status;
        waitpid(pid, &status, 0);
        
        if (WIFEXITED(status)) {
            std::cout << "Terminal exited with status: " 
                      << WEXITSTATUS(status) << std::endl;
        }
    }
}