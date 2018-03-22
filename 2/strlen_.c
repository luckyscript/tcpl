int
strlen_(char s[])
{
    int i;
    while(s[i] != '\0') {
        i++;
    }
    return i;
}

int main(){return 0;}

enum boolean {NO, YES};