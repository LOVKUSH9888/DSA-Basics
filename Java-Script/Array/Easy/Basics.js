const array = [1, 2, 3, 10, 5, 6, 7];

console.log(array.length);

console.log(array[0]);

//sorting in the assending order
array.sort((a, b) => a-b)

console.log(array);

//finding the max element
const array1 = Math.max(...array)

console.log(array1);


