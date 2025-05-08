package com.example.a13_api

import retrofit2.Call
import retrofit2.http.GET
import retrofit2.http.POST
import retrofit2.http.Path

// https://jsonplaceholder.typicode.com
interface APIHandler {

    @GET("comments")
    fun getComments(): Call<List<Comment>>

    @GET("comments/{id}")
    fun getComment(@Path("id") id:Int): Call<Comment>

}