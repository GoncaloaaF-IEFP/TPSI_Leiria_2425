import kotlin.random.Random

fun main() {
    var i = 0

    while (i < 10) {

        println("$i - while Ola") // print sem \n no final -> printf() do C


        i += Random.nextInt(5)
    } // fim do while

    println("\n")
    println(i) // <- 10 - 14?

    /*


    0 - Ola
    1 - Ola
    3 - Ola
    4 - Ola
    5 - Ola
    5 - Ola
    6 - Ola
    7 - Ola
     */
    println("-----------------------------")


    var j = 0

    do {
        println("$j - do while - Ola")

        j++
    }while (j < 10)


    println("-----------------------------")

    i = 0

    while (i < 20) {
        break

        print("Nome: ")
        var nome = readlnOrNull()
        println("$nome")

        println("$i - while 2 Ola")

        if (Random.nextInt(20) == 3){
            println("Gerou o 3")
            break
        }

        i++
    }


    println("-----------------------------")


    var cont = 0
    while (true) {
        cont++

        print("Nome(min 3 letras): ")
        var nome = readlnOrNull()
        println("$nome")

        if (nome!!.length < 3){
            println("o nome tem de ter 3 letras")
            continue
        }

        break

    }

    println("num Tentativas: $cont")


}








