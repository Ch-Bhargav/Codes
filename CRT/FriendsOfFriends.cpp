#include <iostream>
#include <set>
#include <vector>

using namespace std;

int calculateFriendsOfFriends(int N, vector<vector<int>> &friendData)
{
    set<int> lakshFriends;
    set<int> friendsOfFriends;

    for (int i = 0; i < N; i++)
    {
        int friendId, M;
        cin >> friendId >> M;
        lakshFriends.insert(friendId);

        for (int j = 0; j < M; j++)
        {
            int friendOfFriend;
            cin >> friendOfFriend;
            friendsOfFriends.insert(friendOfFriend);
        }
    }

    // Remove Laksh and his direct friends from the set of friends of friends
    for (int friendId : lakshFriends)
    {
        friendsOfFriends.erase(friendId);
    }

    return friendsOfFriends.size();
}

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N;

        vector<vector<int>> friendData;
        for (int j = 0; j < N; j++)
        {
            int friendId, M;
            cin >> friendId >> M;

            vector<int> friends;
            for (int k = 0; k < M; k++)
            {
                int friendOfFriend;
                cin >> friendOfFriend;
                friends.push_back(friendOfFriend);
            }

            friendData.push_back({friendId, M});
            friendData.back().insert(friendData.back().end(), friends.begin(), friends.end());
        }

        int result = calculateFriendsOfFriends(N, friendData);
        cout << result << endl;
    }

    return 0;
}
