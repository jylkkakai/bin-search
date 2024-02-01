package main

import(
	"fmt"

)

func binSearch(s []int, v int) {
	left := 0
	right := len(s) - 1
	for left <= right {
		middle := left + (right - left)/2
		fmt.Println(left, middle, right, s[middle])
		if s[middle] == v {
			fmt.Printf("Found value %d\n", s[middle])
			break
		}
		if left == right {
			fmt.Printf("Value not found\n")
			break
		}
		if v < s[middle] {
			right = middle - 1	
		} else {
			left = middle + 1
		}
	}
}

func main()  {

	fmt.Println("Hello World!")
	s_size := 10
	s_arr := make([]int, s_size)
	for i := range s_arr{
		s_arr[i] = i + 1
	}
	fmt.Println(s_arr)
	for i := -1; i < s_size + 2; i++ {
		fmt.Printf("------ %d\n", i)
		binSearch(s_arr, i)
	}
	return
}
