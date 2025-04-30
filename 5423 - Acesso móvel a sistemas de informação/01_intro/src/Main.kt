
fun main() {

    var nome = "Gonçalo"
    var ano = 2025

    // idade:int
    var idade:Int

    // nome = 12 <- Erro

    println("Ola Mundo! " + nome + " ano " + ano)

    // println("Ola Mundo! $nome ano $ano")
    println("Ola Mundo! $nome ano $ano")

    idade = 12

    println("a idade é: $idade")

    var nome2: String
    nome2 = "teste"




    var s: String
    var i: Int
    var f: Float
    var d: Double
    var b: Boolean
    var c: Char


    s = "1111" // <- str
   //  s = 'sdsada' // <- Erro

    c = 'D' // <- char
    // c = "d" // <- Erro
    i = 300

    var by = i.toByte()
    println(by)
    println(Byte.MIN_VALUE)
    println(Byte.MAX_VALUE)


    println(Int.MAX_VALUE)  //  2 147 483 647
    println(Long.MAX_VALUE) //  9 223 372 036 854 775 807
    println(UInt.MAX_VALUE) //  4 294 967 295
    println(ULong.MAX_VALUE)// 18 446 744 073 709 551 615



    println(i)


    i++


    println(i)
}