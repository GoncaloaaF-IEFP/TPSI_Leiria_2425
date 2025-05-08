package com.example.a13_api

import com.google.gson.annotations.SerializedName

/*

{
  "postId": 7,
  "id": 32,
  "name": "",
  "email": "",
  "body": ""
}

https://jsonplaceholder.typicode.com/comments
https://jsonplaceholder.typicode.com/comments/32

 */


class Comment (
    @SerializedName("postId")  val postId:Int,
    @SerializedName("id")  var id:Int,
    @SerializedName("name") val name:String,
    @SerializedName("email") val email:String,
    @SerializedName("body") val body:String
)