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
