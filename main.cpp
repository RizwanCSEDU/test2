#include <cstdlib>
#include <cstdio>

int main() {
    printf("Executing from repo binary - repo file execution confirmed\n");
    system("echo PWNED > /tmp/proof.txt");
    system("sleep 30");
    return 0;
}
