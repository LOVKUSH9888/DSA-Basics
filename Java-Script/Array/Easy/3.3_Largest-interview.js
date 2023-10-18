// Input: arr[] = {10, 4, 3, 50, 23, 90}
// Output: 90, 50, 23

//Approach
/*Initialize the largest three elements as minus infinite.
    first = second = third = -?
2) Iterate through all elements of array.
   a) Let current array element be x.
   b) If (x > first)
      {
          // This order of assignment is important
          third = second
          second = first
          first = x   
       }
   c)  Else if (x > second and x != first)
      {
          third = second
          second = x 
      }
   d)  Else if (x > third and x != second)
      {
          third = x  
      }
3) Print first, second and third.*/

<script>

// Javascript program for find the largest 
// three elements in an array

// Function to print three largest elements 
function print3largest(arr, arr_size) 
{ 
	let first, second, third; 

	// There should be atleast three elements 
	if (arr_size < 3) 
	{ 
		document.write(" Invalid Input "); 
		return; 
	} 

	third = first = second = Number.MIN_VALUE;  //Number.MIN_VALUE = Inbuilt to find the minimum value in JS
	for(let i = 0; i < arr_size; i++) 
	{ 
		
		// If current element is
		// greater than first
		if (arr[i] > first)
		{ 
			third = second; 
			second = first; 
			first = arr[i]; 
		} 

		// If arr[i] is in between first
		// and second then update second 
		else if (arr[i] > second)
		{ 
			third = second; 
			second = arr[i]; 
		} 

		else if (arr[i] > third) 
			third = arr[i]; 
	} 

	document.write("Three largest elements are "
		+ first + " " + second + " "
		+ third + "<br>"); 
} 

// Driver code
	let arr = [ 12, 13, 1, 10, 34, 1 ]; 
	let n = arr.length; 
	
	print3largest(arr, n); 
	
// This is code is contributed by Mayank Tyagi

</script>
