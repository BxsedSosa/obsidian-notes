# Static Arrays

`Static arrays` are arrays that are in lower level of programming languages such as Java, C, C++, & C#. A `Static Array` is an array that once it is created it can not me expanded or shrink it. So if I decided to create an array for a size of 10, It will forever be the size of 10. Arrays in general are indexed based data type, meaning that each element in an array is assigned a address number which starts from 0 and increments to the max size minus 1 of that array.


## Reading from an Array

When reading a from an array, there are 2 requirements. You need to have a initialized array and you need a number that is less than the size of that array to read from it. This operation is called `O(1)`, because we have the array we are searching through and we have the direct address of the element we want to see. This would be like getting 2 directions to the mall and also having the direct directions to the store you wanted to go to.

```javascript
let myArr = [1, 3, 5]

console.log(myArr[2])
// 5
```

```
A common misconception, is that a `O(1)` operation is always fast. This is not True... This is because if you are doing 1000+ operations with a `O(1)` time complexity. that doesn't mean it is faster than `o(n)` is all cases.
```

## Traversing through an Array

If we wanted to check through an array from start to finish we can also do that. This operation requires just the array that was created and a for/while loop to iterate through the array. This operation has a time complexity of `O(n)`, where the `n` represents the number of elements in that array. Signifying that these operations are dynamic in which every array has a different size but it will go through each element.

```javascript
for (let i = 0; i < myArr.length; i++) {
  console.log(myArr[i])
}
```

## Deleting from an Array

There are to time complexities for deleting from an array. We have `O(1)`, this operation happens when you are deleting the very last element of that array. This is because deleteing the last element of an array only requires the single iteration of deleteing the item and replacing it with a `null` data to tell the array that this is a empty element.

```javascript
let removeEnd = (arr, length) {
  if (length > 0) {
    arr[length - 1] = null;
    length--;
  }
}
```

When deleting from an array at any location besides the very last, this operation then takes a `O(n)` time complexity. This is due to having to first delete the element that you want out of the array. Then having to move all the elements that are to the right of the one you just deleted, you must move them over to the left because you don't want any gaps in your array.

```javascript
let removeIth = (arr, i, length) {
  for (let idx = i + 1; idx < length; idx++) {
    arr[idx - 1] = arr[index];
  }
}
```

## Inserting into an Array

In the same way that deleteing works, insertion works the same as well when it comes to time complexities. When inserting to the end of an array it only takes `O(1)` time complexity. While inserting anywhere else would take `O(n)`.

```javascript
let insertEnd = (arr, n, length, capacity) {
  if (length < capacity) {
    arr[length] = n;
  }
}
```

```javascript
let insertIth = (arr, i, n, length) {
  for (let idx = length - 1; idx > i - 1; index--) {
    arr[idx + 1] = arr[idx];
  }

  arr[i] = n;
}
```

| Operation | Big-O Time | Notes |
| --------------- | --------------- | --------------- |
| Reading | O(1) |  |
| Insertion | O(n)* | If inserting at the end of the array, O(1) |
| Deletion | 0(n)* | If deleting at the end of the array, O(1) |
