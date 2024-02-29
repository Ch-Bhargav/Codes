/**
 * @brief This file contains the implementation of the Solution class, which provides a method to determine if it is possible to finish all the courses given the prerequisites.
 */

#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;

class SolutionSS
{
public:
    /**
     * @brief Determines if it is possible to finish all the courses given the prerequisites.
     * @param numCourses The total number of courses.
     * @param prerequisites A vector of prerequisite courses, where each prerequisite is represented by a pair of integers [u, v], which means to take course u you have to first take course v.
     * @return True if it is possible to finish all the courses, false otherwise.
     */
    bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
    {
        // Implementation details...
    }
};

int main()
{
    // You can use this section for testing if needed.
    return 0;
}
#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;

class Solution
{
public:
    bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
    {
        vector<int> indegree(numCourses, 0);
        unordered_map<int, vector<int>> graph;

        for (int u = 0; u < numCourses; ++u)
        {
            graph[u] = vector<int>();
        }

        for (const vector<int> &prerequisite : prerequisites)
        {
            int u = prerequisite[0], v = prerequisite[1];
            graph[u].push_back(v);
            indegree[v]++;
        }

        queue<int> q;
        for (int i = 0; i < indegree.size(); ++i)
        {
            if (indegree[i] == 0)
            {
                q.push(i);
                indegree[i] = -1;
            }
        }

        vector<int> finalList;
        while (!q.empty())
        {
            int u = q.front();
            q.pop();
            finalList.push_back(u);

            for (int neighOf : graph[u])
            {
                if (indegree[neighOf] != -1)
                {
                    indegree[neighOf]--;
                    if (indegree[neighOf] == 0)
                    {
                        q.push(neighOf);
                        indegree[neighOf] = -1;
                    }
                }
            }
        }

        return finalList.size() == numCourses;
    }
};

int main()
{
    // You can use this section for testing if needed.
    return 0;
}
