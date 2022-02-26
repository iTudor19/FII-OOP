#include <iostream>
using namespace std;
char a[1001];
long long s;
int conversion(char x[])
{
    int i = 0, s = 0;
    while (x[i] != '\0' && x[i] != '\n')
    {
        s = s * 10 + (x[i] - '0');
        i++;
    }

    return s;
}
int main()
{
    FILE *f = fopen("in.txt", "r");
    while (fgets(a, 1001, f) != NULL)
        s = s + conversion(a);
    fclose(f);
    std::cout << s;
    return 0;
}