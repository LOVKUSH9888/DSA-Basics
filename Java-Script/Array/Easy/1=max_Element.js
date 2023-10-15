//1 st = Iterative approach
function maxNum(arr) {
    let max = arr[0]

    //using for loop 
    for (let i = 0; i < arr.length; i++) {
        if (arr[i] > max) {
            max = arr[i]
        } 

        
    }
    return max;
}

//driver code
let arr = [1, 6, 9, 8, 15, 25, 30]
console.log(maxNum(arr));



//2nd = using es6 method 

let array1 = [1, 5, 6, 10, 15, 25, 30, 48]
const maxElements = Math.max(...array1)

console.log(maxElements);


//3rd approach = by sorting the array in Assending order and returning the last index
 function maxNumber(arrayName, n) { //n = array_size
    arrayName.sort((a, b) => a-b)
    return arrayName[n - 1]
 }

 //driver code
 let arr1 = [10, 324, 45, 90, 9808];
let n = arr1.length;
console.log(maxNumber(arr1, n));
