[PHP](../../../../index.md) > Function Reference > Variable and Type Related Extensions > Arrays  > Array Functions > [count](count.md)

## count

(PHP 4, PHP 5, PHP 7)

count — Count all elements in an array, or something in an object

### Description 

```php 
count ( mixed $array_or_countable [, int $mode = COUNT_NORMAL ] ) : int 
```

Counts all elements in an array, or something in an object.

For objects, if you have SPL installed, you can hook into count() by implementing interface Countable. The interface has exactly one method, Countable::count(), which returns the return value for the count() function.

### Parameters

**array_or_countable**

An array or Countable object.

**mode**
If the optional mode parameter is set to COUNT_RECURSIVE (or 1), count() will recursively count the array. This is particularly useful for counting all the elements of a multidimensional array.


