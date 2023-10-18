function secLar(arr, arr_size) {

    arr.sort((a,b) => a-b);

    return arr[1]
    
}

const arr = [12, 35, 1 ,10 , 34 ,1];
const n = arr.length;

console.log(secLar(arr, n))