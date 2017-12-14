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

