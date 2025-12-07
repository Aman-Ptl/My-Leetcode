class Solution {
public:
    int countOdds(int low, int high) {
        int count = 0;
        low = low%2 ? low : low+1; //Make it odd

        for(int num = low; num <= high; num+=2) { //move to alternate numbers for odd
                count++;
        }

        return count;
    }
};