[PHP](../../../../index.md) > Function Reference > Variable and Type Related Extensions > Arrays  > Array Functions > [count](count.md)

## count
_________________

(PHP 4, PHP 5, PHP 7)

count — Count all elements in an array, or something in an object

### Description 
_________________

```php 
count ( mixed $array_or_countable [, int $mode = COUNT_NORMAL ] ) : int 
```

Counts all elements in an array, or something in an object.

For objects, if you have SPL installed, you can hook into count() by implementing interface Countable. The interface has exactly one method, Countable::count(), which returns the return value for the count() function.

### Parameters
_________________

**array_or_countable**

An array or Countable object.

**mode**
If the optional mode parameter is set to COUNT_RECURSIVE (or 1), count() will recursively count the array. This is particularly useful for counting all the elements of a multidimensional array.

### Return Values
_________________

Returns the number of elements in array_or_countable. When the parameter is neither an array nor an object with implemented Countable interface, 1 will be returned. There is one exception, if array_or_countable is NULL, 0 will be returned.

#### Example #1 count() example
_________________

```php
$array = array( 1, 2, 3, 4, 5 );
count( $array );
```

**PHP Tested versions:** 7.3.5, 7.2.18, 7.1.0, 7.0.14, 5.6.29, 5.5.34, 5.4.34, 5.3.29, 5.2.17, 5.1.6, 5.0.5, 4.4.9

```php
5
```
