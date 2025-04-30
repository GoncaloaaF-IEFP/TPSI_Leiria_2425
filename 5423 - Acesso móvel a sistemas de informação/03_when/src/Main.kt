fun main() {


    var num = 4

    var mes = when (num) {
        1-> "Jaeiro"
        2-> "Fev"
        3-> "Março"
        4-> "Abril"
        5-> "Maio"
        6-> "Junho"
        else -> "Erro"
    }

    println(mes)
    println("---------------------------")
    num = 12
    var mes2 = when (num) {
        1,2,3-> "Jaeiro, Fev ou Março"
        4-> "Abril"
        5-> "Maio"
        6-> "Junho"
        in 10..12 -> "Frio"
        else -> "Erro"
    }

    println(mes2)
    println("---------------------------")


    when (num) {
        1,2,3-> println("Jaeiro, Fev ou Março")
        4-> println("Abril")
        5-> println("Maio")
        6-> println("Junho")
        in 10..12 -> println("Frio")
        else -> println("Erro")
    }

    println("---------------------------")
    println("---------------------------")


    when (num) {
        1,2,3-> {
            println("Jaeiro, Fev ou Março")
            println("Linha 2")
        }
        4->{
            println("Abril")
        }
        5-> println("Maio")
        6-> println("Junho")
        in 10..12 -> println("Frio")
        else -> println("Erro")
    }



}