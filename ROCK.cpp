#include <cstdio>
#include <cstdlib>
#include <stdint.h>
#include <string>
#include <iostream>
#include <unistd.h>
#include <sys/time.h>
#include <stack>
#include <vector>
#include <set>
#include <list>
using namespace std;

typedef unsigned long long ull;

inline FILE& operator>>(FILE& f, char*& d)
{
    int s = 20;
    d = (char*)malloc(s);
    int chr;
    int i = 0;
    do
    {
        chr = fgetc(&f);
        if(chr == EOF)
            goto OPERATOR_RSHIFT_FILE_CHAR_PTR_end;
    }
    while(chr == '\n' || chr == '\r' || chr == '\t' || chr == ' ');
    do
    {
        if(i == s)
        {
            s *= 2;
            d = (char*)realloc(d, s);
        }
        d[i] = chr;
        chr = fgetc(&f);
        ++i;
    }
    while(chr != EOF && chr != '\n' && chr != '\r' && chr != '\t' && chr != ' ');
    OPERATOR_RSHIFT_FILE_CHAR_PTR_end:;
    d = (char*)realloc(d, i+1);
    d[i] = '\0';
    return f;
}
inline FILE& operator>>(FILE& f, char& chr)
{
    int x;
    do
    {
        x = fgetc(&f);
        if(x == EOF)
        {
            chr = '\0';
            return f;
        }
    }
    while(x == '\n' || x == '\r' || x == '\t' || x == ' ');
    chr = x;
    return f;
}
inline FILE& operator>>(FILE& f, int& x)
{
    char *d;
    f >> d;
    x = atoi(d);
    free(d);
    return f;
}
inline FILE& operator>>(FILE& f, ull& x)
{
    fscanf(&f, "%llu", &x);
    return f;
}
inline FILE& operator>>(FILE& f, double x)
{
    char *d;
    f >> d;
    x = atof(d);
    free(d);
    return f;
}
inline FILE& operator>>(FILE& f, long double& x)
{
    fscanf(&f, "%LE", &x);
    return f;
}
inline FILE& operator>>(FILE& f, string& str)
{
    char *d;
    f >> d;
    str.~string();
    new (&str) string(d);
    free(d);
    return f;
}
inline FILE& operator<<(FILE& f, const char *str)
{
    fputs(str, &f);
    return f;
}
inline FILE& operator<<(FILE& f, int x)
{
    fprintf(&f, "%d", x);
    return f;
}
inline FILE& operator<<(FILE& f, ull x)
{
    fprintf(&f, "%llu", x);
    return f;
}
inline FILE& operator<<(FILE& f, double x)
{
    fprintf(&f, "%E", x);
    return f;
}
inline FILE& operator<<(FILE& f, long double x)
{
    fprintf(&f, "%LE", x);
    return f;
}
inline FILE& operator<<(FILE& f, const string& str)
{
    f << str.c_str();
    return f;
}
inline FILE& operator<<(FILE& f, char c)
{
    fputc(c, &f);
    return f;
}
struct _endofline
{
} eol;
struct _flush
{
} clearbuff;
inline FILE& operator<<(FILE& f, const __typeof__(eol)&)
{
    fputc('\n', &f);
    fflush(&f);
    return f;
}
inline FILE& operator<<(FILE& f, const __typeof__(clearbuff)&)
{
    fflush(&f);
    return f;
}

FILE& lin(*stdin);  // low-level-in
FILE& lout(*stdout);    // low-level-out

typedef pair<int,int> PII;

set<PII> toDel;

template<typename T>
inline T pred(T t)
{
    --t;
    return t;
}
template<typename T>
inline T succ(T t)
{
    ++t;
    return t;
}

int main()
{
    int t;
    lin >> t;
    while(t--)
    {
        int n;
        lin >> n;
        string s;
        lin >> s;
        vector<int> res(2*n+1, -1000000000);
        res[n] = 0;
        int best = 0;
        for(int i = 0; i != n; ++i)
        {
            if(s[i] == '1')
            {
                int obest = best;
                for(int j = 2*n; j != 0; --j)
                {
                    res[j] = res[j-1] + 1;
                    if(j > n && res[j] > best)
                        best = res[j];
                }
                res[n] = max(res[n], obest);
            }
            else
            {
                int obest = best;
                for(int j = 0; j != 2*n; ++j)
                {
                    res[j] = res[j+1] + 1;
                    if(j > n && res[j] > best)
                        best = res[j];
                }
                res[n] = max(res[n], obest);
            }
        }
        lout << best << eol;
    }
}

