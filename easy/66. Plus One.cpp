class Solution {
public:
    vector<int> plusOne(vector<int>& a) {
        int b = a.size(); // 獲取陣列的長度
        for(int i = b-1; i >= 0; i--){ // 從陣列的最後一個元素開始迴圈
            if(i == b-1) // 如果是最後一個元素
                a[i]++; // 將最後一個元素加一
            if(a[i] == 10){ // 如果當前元素等於 10，表示需要進位
                a[i] = 0; // 將當前元素設為 0
                if(i != 0){ // 如果不是陣列的第一個元素
                    a[i-1]++; // 將前一個元素加一
                }
                else{ // 如果是陣列的第一個元素
                    a.push_back(0); // 在陣列的末尾增加一個 0
                    a[i] = 1; // 並將第一個元素設為 1
                }
            }
        }
        return a; // 返回更新後的陣列
    }
};
