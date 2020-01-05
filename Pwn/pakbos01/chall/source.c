int __cdecl __noreturn main(int argc, const char **argv, const char **envp)
{
    intro(*(_QWORD *)&argc, argv, envp);
    vuln();
}

void __noreturn vuln()
{
    char s2;             // [rsp+0h] [rbp-30h]
    unsigned __int64 v1; // [rsp+28h] [rbp-8h]

    v1 = __readfsqword(0x28u);
    puts("username: PakBos");
    while (1)
    {
        printf("password: ");
        __isoc99_scanf("%31s", &s2);
        if (!strcmp(password, &s2))
        {
            puts("welcome PakBos!");
            win("welcome PakBos!", &s2);
        }
        else
        {
            printf(&s2, &s2);
            puts("? that is definitely not my password!");
        }
    }
}