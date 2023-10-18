// Input: arr[] = {12, 35, 1, 10, 34, 1}
// Output: The second largest element is 34.

//1.Naive approach = sort the array in decending/Assending order and return the 2nd element
// t's not very efficient since the sorting algorithm has a time complexity of O(n log n) for
//  a typical sorting algorithm like quicksort or mergesort.

function secLar(arr, arr_size) {
    arr.sort((a, b) => a - b);
    return arr[1];
}

const arr = [12, 35, 1, 10, 34, 1];
const n = arr.length;

console.log(secLar(arr, n));








//2nd = O(n)
function findSecondLargest(arr) {
    let firstMax = -Infinity;
    let secondMax = -Infinity;

    for (const num of arr) {
        if (num > firstMax) {
            secondMax = firstMax;
            firstMax = num;
        } else if (num > secondMax && num !== firstMax) {
            secondMax = num;
        }
    }

    if (secondMax === -Infinity) {
        return "There is no second largest element.";
    }

    return secondMax;
}

const arr = [12, 35, 1, 10, 34, 1];
const secondLargest = findSecondLargest(arr);
console.log("The second largest element is:", secondLargest);















//3nd =  O(n) time, which is more efficient than sorting the array.
function findSecondLargest(arr) {
    if (arr.length < 2) {
        return "Array is too small to have a second largest element.";
    }

    let largest = arr[0];
    let secondLargest = -Infinity;

    for (let i = 1; i < arr.length; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] !== largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest === -Infinity) {
        return "There is no second largest element.";
    }

    return secondLargest;
}

const arr = [12, 35, 1, 10, 34, 1];
const secondLargest = findSecondLargest(arr);
console.log("The second largest element is:", secondLargest);

