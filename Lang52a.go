package main
import ("fmt")

func main() {
	var length int
	var width int

	fmt.Print("Enter length: ")
	fmt.Scan(&length)
	fmt.Print("Enter width: ")
	fmt.Scan(&width)

	var area int = length * width;
	var perim int = 2 * length + 2 * width

	fmt.Printf("The area is: %d", area)
	fmt.Printf("\nThe perimeter is: %d", perim)
	fmt.Println("\n")
}
