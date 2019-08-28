#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <chrono>
using namespace std;

vector<int> BubbleSort(vector<int>& nums)
{
     for(int i = 0;i < nums.size();i++)
    {
        for(int j = 0;j<nums.size()-1-i;j++)
        {
            if(nums[j]>nums[j+1])
            {
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
    return nums;
}

vector<int>  SelectSort(vector<int>& nums)
{
    for(int i = 0; i < nums.size(); i++)
    {
        int curMin = i;
        for(int j = i; j < nums.size(); j++)
        {
            //找到最小的数，并将其索引保存
            if(nums[j] < nums[curMin])
                curMin = j;
        }
        int temp = nums[curMin];
        nums[curMin] = nums[i];
        nums[i] = temp;
    }
    return nums;
}

//插入排序
vector<int> InsertSort(vector<int> &nums)
{
    for(int i = 1; i < nums.size(); i++)
    {
        int temp = nums[i];
        int j = i - 1;
        while(j > -1 && temp < nums[j])
        {
            nums[j+1] = nums[j];
            j--;
        }
        nums[j+1] = temp;
    }
    return nums;
}

//希尔排序
vector<int> ShellSort(vector<int>& nums)
{
    int gap = nums.size()/2;
    while(gap > 0)
    {
        for(int i = gap; i < nums.size(); i++)
        {
            int temp = nums[i];
            int preIndex = i - gap;
            while(preIndex >= 0 && nums[preIndex] > temp)
            {
                //用preIndex+gap而非i，是因为用i就固定死了，但是这里while每执行一次pre是移动的
                nums[preIndex + gap] = nums[preIndex];
                preIndex -= gap;
            }
            nums[preIndex + gap] = temp;
        }
        gap = gap / 2;
    }
    return nums;
}

//归并排序
vector<int> Merge(vector<int>& left,vector<int>& right)
{
    int len = left.size() + right.size();
    vector<int> result(len);
    for(int index = 0, i = 0, j = 0; index < len; index++)
    {
        if(i > left.size())
            result.push_back(right[j++]);
        else if(j > right.size())
            result.push_back(right[i++]);
        else if (left[i] < right[j])
            result.push_back(right[i++]);
        else
            result.push_back(right[j++]);
    }
    return result;
}
vector<int> MergeSort(vector<int> nums)
{
    if(nums.size()<2)
        return nums;
    else
    {
        int mid = nums.size()/2;
    //将序列分成左右两段
        vector<int> left;
        left.assign(nums.begin(),nums.begin()+mid);
        vector<int> right;
        right.assign(nums.begin()+mid,nums.end());
        left = MergeSort(left);
        right = MergeSort(right);
        return Merge(left,right);
    }

}

int main()
{
    vector<int> nums;
    vector<int> result;

    srand(time(0));
    for(int i = 0;i<20;i++)
        nums.push_back(rand()%100);

    //result = BubbleSort(nums);
    //result = SelectSort(nums);
    //result = InsertSort(nums);
    //result = ShellSort(nums);
    result = MergeSort(nums);
    for(int i = 0;i<nums.size();i++)
        cout<<nums[i]<<" ";
    cout<<endl;

    return 0;
}
