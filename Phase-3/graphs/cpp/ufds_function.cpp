/**
 * @brief This file contains the implementation of the Union-Find Disjoint Set (UFDS) data structure.
 *
 * The UFDS class provides methods to create and manipulate disjoint sets, where each set is represented by a leader element.
 * It supports finding the leader of a given element and merging two sets together.
 *
 * The Main class contains the main function that reads input, performs operations on the UFDS, and outputs the results.
 */
#include <iostream>
#include <vector>
using namespace std;

class UFDS
{
    int n;
    vector<int> parent;

public:
    /**
     * @brief Constructs a new UFDS object with the specified number of elements.
     *
     * @param n The number of elements in the UFDS.
     */
    UFDS(int n)
    {
        this->n = n;
        parent.resize(n + 1);
        for (int i = 1; i < n + 1; i++)
        {
            parent[i] = i;
        }
    }

    /**
     * @brief Finds the leader of the set that the given element belongs to.
     *
     * @param x The element to find the leader for.
     * @return The leader of the set that the element belongs to.
     */
    int findLeader(int x)
    {
        if (x == parent[x])
            return x;
        return parent[x] = findLeader(parent[x]);
    }

    /**
     * @brief Merges the sets that the given elements belong to.
     *
     * @param x The first element.
     * @param y The second element.
     */
    void merge(int x, int y)
    {
        int lx = findLeader(x);
        int ly = findLeader(y);
        if (lx == ly)
            return;
        parent[lx] = ly;
    }
};

class Main
{
public:
    /**
     * @brief The main function that reads input, performs operations on the UFDS, and outputs the results.
     *
     * @return 0 on successful execution.
     */
    static int main()
    {
        int n;
        cin >> n;
        int q;
        cin >> q;
        UFDS uf(n);
        while (q--)
        {
            int opt, u, v;
            cin >> opt >> u >> v;
            if (opt == 1)
            {
                uf.merge(u, v);
            }
            else
            {
                if (uf.findLeader(u) == uf.findLeader(v))
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
        return 0;
    }
};

int main()
{
    return Main::main();
}
