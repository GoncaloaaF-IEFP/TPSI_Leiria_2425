//
//  main.swift
//  02_Swift_Collections
//
//  Created by Gonçalo Feliciano on 14/05/2025.
//

import Foundation

// arrays -> list


var arr: [Int] = [1, 2, 3, 4, 5]
var arr1 = [1, 2, 3, 4, 5]


print(arr)
print(arr[2])
print(arr[2...4])

// print(arr[5]) -> Fatal error: Index out of range

// print(arr[2...6]) -> Fatal error: Index out of range

arr.append(6)
print(arr)

/*
 [1, 2, ,3, 4, 5, 6]
 */
arr.insert(99, at: 2)
print(arr)


arr.remove(at: 2)
print(arr)


print("------------------------------------")
var arr3 = [1,2,3,4,5,66,7,8,9,10]
print(arr3.count)
print(arr3.capacity)

arr3.append(6)

print("----")
print(arr3.count)
print(arr3.capacity)

arr3.append(6)

print("----")
print(arr3.count)
print(arr3.capacity)


arr3.append(6)
print("----")
print(arr3.count) // 5
print(arr3.capacity)


arr3.append(6)
arr3.append(6)
arr3.append(6)

print("----")
print(arr3.count) // 8
print(arr3.capacity)

arr3.append(6)
print("----")
print(arr3.count) // 9
print(arr3.capacity)




print(arr3.count)
print(arr3.capacity)

arr3.sort(by: >)


print(arr3)


// set

print("-------------------- Set -----------------")


var set1:Set = [1,2,3,4,5,6,7,8]

print(type(of: set1))

print(set1)

var res = set1.insert(9)

print(set1)
print(res)

res = set1.insert(9)

print(set1)
print(res.inserted)



// nil -> null -> None

print(set1.remove(99))

print(set1.contains(9))
print(set1.contains(99))




var lista1:Set = ["a","b","c","d","e"]
var lista2:Set = ["d","e", "f", "g", "h"]

print("----")

print(lista1.union(lista2))

print(lista1.symmetricDifference(lista2))

print(lista1.intersection(lista2))


print(lista1.subtracting(lista2))

print(lista2.subtracting(lista1))



// tuplos
print("-------------------- tuplos -----------------")


var tp = ("Gonçalo", 1998, true)
print(tp)
print(tp.0)


var tp2 = (nome:"Gonçalo", ano:1998, estado:true)
print(tp2)
print(tp2.0)
print(tp2.nome)


var tp3:(String, Int, Bool) = (nome:"Gonçalo", ano:1998, estado:true)

print(tp3)


var tp4:(nome:String, ano:Int, estado:Bool) = ("Gonçalo", 1998, true)
print(tp4)


var tp5:(nome:String, ano:Int, estado:Bool) = ( estado:true,ano:1998,nome:"Gonçalo")
print(tp5)


// dicionarios
print("-------------------- dicionarios -----------------")

var dict1: [String: Int] = ["a":1, "b":2, "c":3]

var dict2 = ["a":1, "b":2, "c":3]


print(dict1)

print(dict1["a"]!)

print(dict1.count)

dict1["novaKey"] = 99

print(dict1)

dict1.removeValue(forKey: "novaKey")

print(dict1)

print(dict1.capacity)

dict1.removeAll(keepingCapacity: true)

print(dict1.capacity)

// func
/*

 [1,2] -> cap = 2
 
 [1,2, 4] -> cap = 4 <- 1s
 [1,2, 4, 5] -> cap = 4 <- 0.5s
 [1,2, 4, 5, 1] -> cap = 8 <- 1.5s
 [1,2, 4, 5, 1, 85] -> cap = 8 <- 0.5s
 
 */
dict1 = ["a":1, "b":2, "c":3]

print(dict1["outra Key"])


print("---------")

for elm in dict1 {
    
    print(elm)
    
}


print("---------")

for elm in dict1.keys {
    
    print(elm)
    
}

print("---------")

for elm in dict1.values {
    
    print(elm)
    
}

print("---------")


for (k, v) in dict1 {
    
    print("chave: \(k) - valor: \(v)")
    
}

print("---------")



print(arr3)

print("---------")
for elm in arr3 {
    
    print(elm)
        
}


print("---------")
arr3.forEach { elm in
    
    print(elm)
}


dict1.forEach { (k, v) in
    
}

set1.forEach { elm in
    
}

print("---------")


print(dict1.keys)
print(dict1.values)

print(type(of: arr3))


print(type(of: dict1.values))


print(dict1["a"]!)
var keys = Array(dict1.keys)
print(dict1.keys)
print(keys[0])
print(Int.random(in: 0..<3))


//selecionar um valor random de dicionario sem usar a função -> dict1.randomElement()
print("---------")

print(dict1[dict1.keys.randomElement()!]!)
print(dict1.randomElement()!.value)

print("---------")

var keys_2 = Array(dict1.keys)
var randKey = keys_2[Int.random(in: 0..<keys_2.count)]
print(dict1[randKey]!)


print("---------")
var val_list = Array(dict1.values)
val_list[Int.random(in: 0..<val_list.count)]





var dict3: [String: Int] = ["a":1, "b":2, "c":3]

var dict4 = ["a":5, "b":6, "d":9]

print("---------")
dict3 = dict4.merging(dict3) { (_, new) in
    return new
}

print(dict3)



print("---------")

/*
 
var foo = 20
 
lazy var foo = 20

 
 
 
 */
