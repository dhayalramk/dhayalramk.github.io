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

### Examples

<details>
    <summary>1. count() Example</summary>

        ```php
        $array = array( 1, 2, 3, 4, 5 );
        count( $array );
        ```

        **PHP 7.3.5**

        ```php
        5
        ```

</details>
