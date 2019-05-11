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

#### Example #1 count() - array()
_________________

```php
$array = array( 1, 2, 3, 4, 5 );
count( $array );
```

**PHP Tested versions:** 7.3.5, 7.2.18, 7.1.29, 7.0.14, 5.6.29, 5.5.34, 5.4.34, 5.3.29, 5.2.17, 5.1.6, 5.0.5, 4.4.9

```php
5
```

#### Example #2 count() - [ ]
_________________

```php
$array = [1,2,3,4,5];
count($array)
```

**PHP Tested versions:** 7.3.5, 7.2.18, 7.1.29, 7.0.14, 5.6.29, 5.5.34, 5.4.34
```php
5
```

**PHP Tested version:** 5.3.29, 5.2.17, 5.1.6, 5.0.5, 4.4.9
```php
Parse error: syntax error, unexpected '[' in [...][...] on line 1
```

#### Example #3 count() - Datatypes
_________________

```php
// Boolean 
$arrayBoolean = array(true, false);
echo 'Boolean: '.count($arrayBoolean);
echo PHP_EOL;

// Number
$arrayNum = array(1,-2,0,4);
echo 'Number: '.count($arrayNum);
echo PHP_EOL;

// Float
$arrayFloat = array(1.234, 1.2e3, 7E-10);
echo 'Float: '.count($arrayFloat);
echo PHP_EOL;

// String
$arrayString = array("one", "");
echo 'String: '.count($arrayString);
echo PHP_EOL;

// Null
$arrayNull = array(NULL, null);
echo 'Null: '.count($arrayNull);
echo PHP_EOL;

// Array
$arrayArray = array(array());
echo 'Array: '.count($arrayArray);
echo PHP_EOL;

// Object
$arrayObject = array( new stdClass() );
echo 'Object: '.count($arrayObject);
echo PHP_EOL;

// Callable
$fun1 = function(){};
$arrayObject = array( $fun1, function($x){return $x*$x;} );
echo 'Callable: '.count($arrayObject);
echo PHP_EOL;

// Mixed
$arrayMixed = array( 0, null, "one", array(), array(0), 1.2e3, array(1,"one",1.01,""), new stdClass() );
echo 'Mixed: '.count($arrayMixed);
echo PHP_EOL;
    
```

**PHP Tested versions:** 7.3.5, 7.2.18, 7.1.29, 7.0.14, 5.6.29, 5.5.34, 5.4.34, 5.3.29
```php
Boolean: 2
Number: 4
Float: 3
String: 2
Null: 2
Array: 1
Object: 1
Callable: 2
Mixed: 8
```

**PHP Tested version:** 5.2.17, 5.1.6, 5.0.5, 4.4.9
```php
Parse error: syntax error, unexpected T_FUNCTION in [...][...] on line 38
```