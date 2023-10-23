

function findDuplicate(nums) {
    let slow = nums[0];
    let fast = nums[0];

    do {
        slow = nums[slow];
        fast = nums[nums[fast]]; //By Floyd's Tortoise and Hare algorithm
    } while (slow !== fast);

    fast = nums[0];

    while (slow !== fast) {
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;
}

const arr = [1, 3, 4, 2, 3, 9, 9, 10, 9];
console.log("The duplicate element is " + findDuplicate(arr));
