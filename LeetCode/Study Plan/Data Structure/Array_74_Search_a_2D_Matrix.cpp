class Solution
{
public:
    int findRow(vector<vector<int>> &matrix, int *target)
    {
        int height = matrix.size(), width = matrix[0].size();

        int start = 0, end = height - 1, mid;

        while (start < end & start >= 0 & end < height)
        {
            mid = (start + end) / 2;

            if (*target < matrix[mid][0])
            {
                end = mid - 1;
            }
            else if (*target > matrix[mid][width - 1])
            {
                start = mid + 1;
            }
            else
                return mid;
        }
        return (start + end) / 2;
    }

    int findCol(vector<vector<int>> &matrix, int *target, int *r)
    {
        int height = matrix.size(), width = matrix[0].size();

        int start = 0, end = width - 1, mid;

        while (start < end & start >= 0 & end < width)
        {
            mid = (start + end) / 2;
            if (*target == matrix[*r][mid])
            {
                return mid;
            }

            if (*target < matrix[*r][mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }

        return (start + end) / 2;
    }

    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {

        int r, c;

        r = findRow(matrix, &target);

        c = findCol(matrix, &target, &r);

        if (matrix[r][c] == target)
            return true;

        return false;
    }
};