# Important Notes from Deitel

* size_t == unsigned int

* Array size must be a constant usigned int which is const size_t

* If you got an error while compiling include the following library at top of code: <cstddef>

* Use empty curly braces ( {} ) to initialize the array to zero values. it only works *only* while defining an array

* For making every elements of the array to zero *everywhere* in the code, you should follow this method:
```c++
for ( size_t j = 0; j < s.size(); j++ )
	s[ j ] == 0;
```

* You can assign a value for every elements of the array in definition by using curly braces ( { ,,, } ).

* constant values cannot be expressions and should be initialized when they're defined



* To make unpredictable and strong random numbers use these functions from <random> library.
```c++
default_random_engine engine( static_cast< size_t >( time(0) ) );
uniform_int_distribution< size_t > randomInt( 1, 6 );
```

* First function creates object from standard class named  default_random_engine and the seed is time(0) which is the number of seconds from january 1, 1970.

* Second function set the range of random from 1 to 6 which is six faces of dice.

* We simply call the third function to make random number of what we desired

* If we don't need to access subscripts of an array, it's more common to use range-based for statement as follow.
like when we don't need the index number ( counter-control variable ).

* Using counter-controlled for statement to print out or modify every elements of an array is not recommended because it would be cumbersome. Use range-based for statement instead.

* Range-based for statement structure
```c++
for ( rangeVariableDecleration : expression )
	statement
```

* We can apply static array declaeration so that it's not created and initialized each time the program calls the function and not destroyed each time the function terminates.

* Static arrays are initialized to 0 ( zero ) by defualt but you can assign any values to it in definition

* Static storage duration variables and arrays contain the values stored during previous funtion call.

* Static storage duration is beneficial for perfotmance and large arrays.

* Automatic storage duration variables and arrays are recreated and reinitialized for each function call.

