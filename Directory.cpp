#include <iostream>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/types.h>

using namespace std;

int main()
{
    cout << "\n===== DIRECTORY MANAGEMENT =====\n";

    // Create directory
    mkdir("MyDirectory", 0777);
    cout << "Directory created.\n";

    // Change directory
    chdir("MyDirectory");
    cout << "Changed to MyDirectory.\n";

    // Get current path
    char path[100];
    getcwd(path, sizeof(path));
    cout << "Current Directory Path: " << path << endl;

    // Go back to parent directory
    chdir("..");

    // Open current directory
    DIR *dir;
    struct dirent *entry;

    dir = opendir(".");   

    cout << "\nDirectory Contents:\n";

    while ((entry = readdir(dir)) != NULL)
    {
        cout << entry->d_name << endl;
    }

    closedir(dir);

    // Remove directory
    rmdir("MyDirectory");
    cout << "Directory removed.\n";

    return 0;
}
