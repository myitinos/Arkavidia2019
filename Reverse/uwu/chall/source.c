__int64 __fastcall main(__int64 a1, char **a2, char **a3)
{
    int v4;               // [rsp+19h] [rbp-1B7h]
    __int16 v5;           // [rsp+1Dh] [rbp-1B3h]
    char v6;              // [rsp+1Fh] [rbp-1B1h]
    unsigned __int64 i;   // [rsp+20h] [rbp-1B0h]
    unsigned __int64 j;   // [rsp+28h] [rbp-1A8h]
    unsigned __int64 k;   // [rsp+30h] [rbp-1A0h]
    unsigned __int64 v10; // [rsp+38h] [rbp-198h]
    unsigned __int64 v11; // [rsp+40h] [rbp-190h]
    unsigned __int64 v12; // [rsp+48h] [rbp-188h]
    __int64 v13;          // [rsp+50h] [rbp-180h]
    __int64 v14;          // [rsp+58h] [rbp-178h]
    __int64 v15;          // [rsp+60h] [rbp-170h]
    __int64 v16;          // [rsp+6Ah] [rbp-166h]
    __int16 v17;          // [rsp+72h] [rbp-15Eh]
    char v18;             // [rsp+74h] [rbp-15Ch]
    __int64 v19;          // [rsp+75h] [rbp-15Bh]
    __int16 v20;          // [rsp+7Dh] [rbp-153h]
    char v21;             // [rsp+7Fh] [rbp-151h]
    char v22;             // [rsp+80h] [rbp-150h]
    char v23;             // [rsp+F0h] [rbp-E0h]
    char v24;             // [rsp+160h] [rbp-70h]
    unsigned __int64 v25; // [rsp+1C8h] [rbp-8h]

    v25 = __readfsqword(0x28u);
    v4 = 556478977;
    v5 = 30262;
    v6 = 59;
    v10 = 7LL;
    v16 = -7378492107147339883LL;
    v17 = 25471;
    v18 = -110;
    v11 = 11LL;
    v19 = 4985206873842725636LL;
    v20 = 9543;
    v21 = 77;
    v12 = 11LL;
    __isoc99_scanf("%s %s %s", &v22, &v23, &v24);
    v13 = sub_1175(&v22);
    v14 = sub_11D1(&v23);
    v15 = sub_122D(&v24);
    for (i = 0LL; i < v10; ++i)
    {
        if (*(_BYTE *)(v13 + i) != *((_BYTE *)&v4 + i))
        {
            puts("wrong one syre");
            exit(0);
        }
    }
    for (j = 0LL; j < v11; ++j)
    {
        if (*(_BYTE *)(v14 + j) != *((_BYTE *)&v16 + j))
        {
            puts("wrong one syre");
            exit(0);
        }
    }
    for (k = 0LL; k < v12; ++k)
    {
        if (*(_BYTE *)(v15 + k) != *((_BYTE *)&v19 + k))
        {
            puts("wrong one syre");
            exit(0);
        }
    }
    puts("you got it right mate");
    return 0LL;
}

const char *__fastcall sub_1175(const char *a1)
{
    size_t v2; // [rsp+10h] [rbp-10h]
    size_t v3; // [rsp+18h] [rbp-8h]

    v2 = 0LL;
    v3 = strlen(a1);
    while (v3 > v2)
        a1[v2++] ^= 0x40u;
    return a1;
}
const char *__fastcall sub_11D1(const char *a1)
{
    size_t v2; // [rsp+10h] [rbp-10h]
    size_t v3; // [rsp+18h] [rbp-8h]

    v2 = 0LL;
    v3 = strlen(a1);
    while (v3 > v2)
        a1[v2++] += 32;
    return a1;
}
const char *__fastcall sub_122D(const char *a1)
{
    size_t v2; // [rsp+10h] [rbp-10h]
    size_t v3; // [rsp+18h] [rbp-8h]

    v2 = 0LL;
    v3 = strlen(a1);
    while (v3 > v2)
        a1[v2++] -= 48;
    return a1;
}