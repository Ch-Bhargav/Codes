/**
 * @brief This program demonstrates the implementation of the Floyd-Warshall algorithm on an undirected graph.
 *
 * The program takes input for the number of vertices (nv) and the number of edges (ne) in the graph.
 * It then takes input for each edge, along with its weight, and constructs an adjacency matrix representation of the graph.
 * The program then applies the Floyd-Warshall algorithm to find the shortest path between all pairs of vertices.
 * Finally, it prints the distance matrix and the parent matrix, which stores the intermediate vertices in the shortest path.
 */
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int nv, ne;
    std::cin >> nv >> ne;

    std::vector<std::vector<int>> mat(nv, std::vector<int>(nv, 0));

    for (int i = 0; i < ne; i++)
    {
        int u, v, w;
        std::cin >> u >> v >> w;
        mat[u][v] = w;
        mat[v][u] = w;
    }

    for (int i = 0; i < nv; i++)
    {
        for (int j = 0; j < nv; j++)
        {
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }
    cout << endl;

    // Floyd Marshal Algorihtm
    vector<vector<int>> dist(nv, vector<int>(nv));
    vector<vector<int>> parent(nv, vector<int>(nv));
    for (int i = 0; i < nv; i++)
    {
        for (int j = 0; j < nv; j++)
        {
            parent[i][j] = -1;
            if (i == j)
                dist[i][j] = 0;
            else if (mat[i][j] != 0)
            {
                dist[i][j] = mat[i][j];
                parent[i][j] = i;
            }
            else
                dist[i][j] = 999;
        }
    }

    for (int i = 0; i < nv; i++)
    {
        for (int j = 0; j < nv; j++)
        {
            cout << dist[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int mid = 0; mid < nv; mid++)
    {
        for (int start = 0; start < nv; start++)
        {
            for (int end = 0; end < nv; end++)
            {
                if (dist[start][end] > dist[start][mid] + dist[mid][end])
                {
                    dist[start][end] = dist[start][mid] + dist[mid][end];
                    parent[start][end] = mid;
                }
            }
        }
    }

    for (int i = 0; i < nv; i++)
    {
        for (int j = 0; j < nv; j++)
        {
            cout << dist[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < nv; i++)
    {
        for (int j = 0; j < nv; j++)
        {
            cout << parent[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
