// Input: n=7 , array[]={1, 2, 3, 6, 3, 6, 1}
// Output: 1, 3, 6

// Ye Basically jo bhe first me duplicate elements milege use return kr dega buss

//Brute Force Solution =  O(n log n)
// Brute Force Solution = O(n log n)

function findDuplicate(arr) {
  // Sorting the array in ascending order
  arr.sort((a, b) => a - b);

  for (let i = 0; i < arr.length - 1; i++) {
    if (arr[i] === arr[i + 1]) {
      return arr[i];
    }
  }
  return -1; //it means false
}

let arr = [1, 8, 2, 8, 7];

console.log(findDuplicate(arr));

//2nd = Using Two-Pointer Technique =  O(n^2)
function findDuplicate(arr) {
  for (let i = 0; i < arr.length; i++) {
    for (let j = i + 1; j < arr.length; j++) {
      if (arr[i] === arr[j]) {
        return arr[i];
      }
    }
  }
  return -1; // No duplicate found.
}

const arr = [1, 8, 9, 8, 7, 3, 2, 5, 5, 7];
const duplicateValue = findDuplicate(arr);
console.log(duplicateValue);

//Another good method of writing two pointer technique = Floyd's Tortoise and Hare algorithm to achieve a linear time complexity of O(n) for this problem
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
