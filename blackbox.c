//write a c program for selection sort?
 unsigned minIndex;
 for (int i = 0; i < 5; ++i) {
     minIndex = i;
    for (int j = i + 1; j < 5; ++j) {
        if(numbers[j] < numbers[minIndex]){
            minIndex = j;
        }
    }
    if (minIndex != i) {  //  Do swapping
        temp = numbers[i];
        numbers[i] = numbers[minIndex];
        numbers[minIndex] = temp;
    }
}




//Source: https://stackoverflow.com/questions/47224918


