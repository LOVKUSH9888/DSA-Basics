//e.g - Hello World == reverse === dlrow olleh
//Arrays are passed by =Reference menas whatever 

//Logic we are using two pointer here s = start & e = end;

int length(char input[]){
    int count = 0;
    for(int i = 0; input[i]!= '\0'; i++){
        count++;
    }
    return count;
}


void reverse(char input[]){ 
    int s = 0;
    int e = length(input) - 1; //As compiler dont know the lenth so write abobe the function

    while(s<e){
        swap(input[s] , input[e]);
        s++;
        e--;
    }
}