#include <iostream>
 #include <unistd.h>
 #include <cstdlib>
 using namespace std;
 int main()
{
pid_t pid;
// Create child process
fork(); pid;
if (pid == 0)
{
cout << "Child Process Running" << endl;
// Terminate child
exit(0);
}
else
{
cout << "Parent Process Running" << endl;
}
return 0;
}
