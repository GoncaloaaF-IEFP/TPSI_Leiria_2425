fun main() {

     // for i in range(10):
    for (i in 1..9){
        print("$i ")
    }
    println()

    for (i in 1..20 step 4){
        print("$i ")
    }
    println()
    for (i in 'a'..'d'){
        print("$i ")
    }
    println()

   /*
    for (i in  "aa".."ad" ){
        print("$i ")
    }
    */

    println()
    for (i in 1 until 10){
        print("$i ")
    }

    println()

    for (i in 10 downTo 1){
        print("$i ")
    }
}