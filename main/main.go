package main

import (
	"fmt"
	"time"
)

func main() {
	fmt.Println("Sleeping for 60 seconds...")
	time.Sleep(60 * time.Second)
	fmt.Println("Done!")
}
