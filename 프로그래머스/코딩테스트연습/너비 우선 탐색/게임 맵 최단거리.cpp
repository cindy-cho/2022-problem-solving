#include <vector>
#include <queue>
using namespace std;

class PATH
{
public:
    int y;
    int x;
    int steps;

    PATH(int y, int x, int steps)
    {
        this->y = y;
        this->x = x;
        this->steps = steps;
    }
};

int solution(vector<vector<int>> maps)
{
    int direction[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    int n = maps.size();
    int m = maps[0].size();
    int nextY, nextX;

    vector<vector<int>> history(n, vector<int>(m, 999999));

    queue<PATH> q;

    PATH current = PATH(n - 1, m - 1, 1);

    q.push(current);
    maps[current.y][current.x] = 0;

    while (!q.empty())
    {
        current = q.front();
        q.pop();

        history[current.y][current.x] = current.steps;

        for (int i = 0; i < 4; i++)
        {
            nextY = current.y + direction[i][0];
            nextX = current.x + direction[i][1];

            if (nextY >= 0 && nextY < n && nextX >= 0 && nextX < m && maps[nextY][nextX] == 1 && (current.steps + 1 < history[nextY][nextX]))
            {
                maps[nextY][nextX] = 0;
                q.push(PATH(nextY, nextX, current.steps + 1));
            }
        }
    }

    if (history[0][0] == 999999)
        return -1;

    return history[0][0];
}