// range(1, 10, 2)

fun main() {

    println(0..10) // -> 0 a 10
    println('a'..'z')

    println(0..10 step 2) // -> 0 a 10 de 2 em 2

    println("a" in "abc".."abd")
    println("abc" in "abc".."abe")
    println("abd" in "abc".."ace")
    println("aaa" in "abc".."ace")
}