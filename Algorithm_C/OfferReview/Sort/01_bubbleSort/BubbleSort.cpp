//
//  BubbleSort.cpp
//  OfferReview
//
//  Created by CHM on 2020/8/4.
//  Copyright © 2020 CHM. All rights reserved.
//

#include "BubbleSort.hpp"

void BubbleSort::bubbleSort(int nums[], int count) {
    if (nums == nullptr || count <= 0) {
        return;
    }
    
    int k = count - 1;
    for (int i = 0; i < count - 1; ++i) {
        bool noExchange = true;
        int n = 0;
        for (int j = 0; j < k; ++j) {
            if (nums[j] > nums[j + 1]) {
                swap(&nums[j], &nums[j + 1]);
                noExchange = false;
                n = j;
            }
        }
        
        if (noExchange) {
            break;
        }
        k = n;
    }
}

// 测试代码
void BubbleSort::test(char* testName, int nums[], int count) {
    printf("%s begins: \n", testName);
    printArray("", nums, count);
    bubbleSort(nums, count);
    printArray("", nums, count);
}

void BubbleSort::test1() {
    int nums[9] = {4, 6, 1, 2, 9, 10, 20, 1, 1};
    test("test1", nums, 9);
}

void BubbleSort::test2() {
    int nums[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    test("test2", nums, 8);
}

void BubbleSort::test3() {
    int nums[5] = {5, 4, 3, 2, 1};
    test("test3", nums, 5);
}

void BubbleSort::test4() {
    int nums[8] = {-4, 6, -2, 9, 10, -20, 1, -1};
    test("test4", nums, 8);
}

void BubbleSort::test5() {
    int nums[2] = {4, 2};
    test("test5", nums, 2);
}

void BubbleSort::test6() {
    int nums[] = {};
    test("test5", nums, 0);
}


void BubbleSort::Test() {
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
}

//if (nums == nullptr || count <= 0) {
//    return;
//}
//
//int k = count - 1;
//for (int i = 0; i < count - 1; ++i) {
//    bool noExchange = true;
//    int n = 0;
//    for (int j = 0; j < k; ++j) {
//        if (nums[j] > nums[j + 1]) {
//            swap(&nums[j], &nums[j + 1]);
//            noExchange = false;
//            n = j;
//        }
//    }
//
//    if (noExchange) {
//        break;
//    }
//
//    k = n;
//}
