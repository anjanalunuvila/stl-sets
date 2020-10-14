# stl-sets

 This is an example for how to use `stl::sets` with custome comparators.
 
 As you know stl::set is a container with ordering and then if you want to write a custome comparator
 it also support strict ordering.
 
 Otherwise it may cause dulpicated objects in the container that you created.
 

 **main.cpp**
 
 This file demonstrate how to declare `stl::set` with `info` type.
 For the decleration of Info type refer to `infor.h` file.
 
 Then it shows how to add objects and iterate through objects.
 
 You can change the used conparator to check the functionality of each.
 
 **infor.h**
	
 class Info : class contain string/string/int
 
 `InfoCmp0` - comparator with loose ordering, 
			this cause isseus in ordering and maintaining quique objects.
			
 `InfoCmp` - comparator with strict ordering, working fine.
 
 `InfoCmp1` - conparator written with only using `<` operators, this is good
			if we are overloading the `<` in the `Info` class.
			working fine.
			
 `InfoCmp2` - another example with use of `make_tuple`.
			working fine.
 