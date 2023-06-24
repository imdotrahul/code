#include <iostream>
#include <vector>
#include <string>
#include <utility>
using namespace std;

bool isHarshad(int num) {
    int digitSum = 0;
    std::string numStr = std::to_string(num);

    for (char digit : numStr) {
        digitSum += digit - '0';
    }

    return (num % digitSum == 0);
}

int countSubarraysWithHarshadNumbers(const std::vector<int>& A, const std::vector<std::pair<int,int>>& queries) {
    int N = A.size();
    std::vector<int> prefix(N + 1, 0);

    for (int i = 1; i <= N; i++) {
        prefix[i] = prefix[i - 1] + isHarshad(A[i - 1]);
    }

    int result = 0;
    for (const auto& query : queries) {
        int L = query.first;
        int R = query.second;
        int count = prefix[R] - prefix[L - 1];
        result += count;
    }

    return result;
}

int main()
{
    int testcases;
    cin>>testcases;
    
    while(testcases--)
    {
        int number,query,x;
        cin>> number>>query;
        std::vector<int> arr[number];
        
        for(int i = 0;i<number;i++)
        {
            cin>>arr[i];
        }
        while(query--)
        {
            int left,right;
            cin>>left>>right; 
            
            int result = countSubarraysWithHarshadNumbers(arr, query);
            cout<<result;
            
        }
    }
}