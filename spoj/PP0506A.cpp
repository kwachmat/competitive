#include <set>
#include <cstdio>
#include <cstring>

struct Point
{
    int x, y;
    char letter[11];

    bool operator < (const Point& p) const { return (x*x+y*y < p.x*p.x+p.y*p.y); }
};

int main(int argc, char *argv[])
{
    unsigned t, n;
    
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        std::set<Point> points;
        std::set<Point>::iterator it;
        
        while(n--)
        {
            Point p;
            scanf("%s %d %d", p.letter, &p.x, &p.y);
            points.insert(p);
        }

        for (it = points.begin(); it != points.end(); it++)
        {
            printf("%s %d %d\n", (*it).letter, (*it).x, (*it).y);
        }
        
        printf("\n");
    }
    
    return 0;
}