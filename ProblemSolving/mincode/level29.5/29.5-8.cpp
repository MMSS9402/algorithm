#include <iostream>
#include <string>
#include <vector>
using namespace std;
char map[4][3];

int right(int x, int y)
{
        int dy = y + 1;

        if (dy >= 0 && dy < 3)
        {
                y = dy;
                return dy;
        }
        return y;
}
int down(int x, int y)
{
        int dx = x + 1;

        if (dx >= 0 && dx < 4)
        {
                x = dx;
                return dx;
        }
        return x;
}

int left(int x, int y)
{
        int dy = y - 1;

        if (dy >= 0 && dy < 3)
        {
                y = dy;
                return dy;
        }
        return y;
}

int up(int x, int y)
{
        int dx = x - 1;

        if (dx >= 0 && dx < 4)
        {
                x = dx;
                return dx;
        }
        return x;
}

int main()
{

        for (int i = 0; i < 4; i++)
        {
                for (int j = 0; j < 3; j++)
                {
                        cin >> map[i][j];
                }
        }
        for (int i = 0; i < 4; i++)
        {
                for (int j = 0; j < 3; j++)
                {
                        if (map[i][j] != '_' && map[i][j] != '#')
                        {
                                int dy = right(i, j);
                                if (map[i][dy] == '_')
                                {
                                        char temp = map[i][j];
                                        map[i][j] = '_';
                                        map[i][dy] = temp;
                                }
                        }
                }
        }

        for (int i = 0; i < 4; i++)
        {
                for (int j = 0; j < 3; j++)
                {
                        if (map[i][j] != '_' && map[i][j] != '#')
                        {
                                int dx = down(i, j);
                                if (map[dx][j] == '_')
                                {
                                        char temp = map[i][j];
                                        map[i][j] = '_';
                                        map[dx][j] = temp;
                                }
                        }
                }
        }

        for (int i = 0; i < 4; i++)
        {
                for (int j = 0; j < 3; j++)
                {
                        if (map[i][j] != '_' && map[i][j] != '#')
                        {
                                int dy = left(i, j);
                                if (map[i][dy] == '_')
                                {
                                        char temp = map[i][j];
                                        map[i][j] = '_';
                                        map[i][dy] = temp;
                                }
                        }
                }
        }

        for (int i = 0; i < 4; i++)
        {
                for (int j = 0; j < 3; j++)
                {
                        if (map[i][j] != '_' && map[i][j] != '#')
                        {
                                int dx = up(i, j);
                                if (map[dx][j] == '_')
                                {
                                        char temp = map[i][j];
                                        map[i][j] = '_';
                                        map[dx][j] = temp;
                                }
                        }
                }
        }

        for (int i = 0; i < 4; i++)
        {
                for (int j = 0; j < 3; j++)
                {
                        if (map[i][j] != '_' && map[i][j] != '#')
                        {
                                int dy = right(i, j);
                                if (map[i][dy] == '_')
                                {
                                        char temp = map[i][j];
                                        map[i][j] = '_';
                                        map[i][dy] = temp;
                                }
                        }
                }
        }

        for (int i = 0; i < 4; i++)
        {
                for (int j = 0; j < 3; j++)
                {
                        cout << map[i][j];
                }
                cout << endl;
        }

        return 0;
}