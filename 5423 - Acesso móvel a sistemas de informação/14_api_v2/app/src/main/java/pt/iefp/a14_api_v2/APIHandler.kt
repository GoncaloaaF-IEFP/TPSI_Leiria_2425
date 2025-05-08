package pt.iefp.a14_api_v2

import retrofit2.http.GET
import retrofit2.http.POST
import retrofit2.Call
import retrofit2.Retrofit
import retrofit2.converter.gson.GsonConverterFactory
import retrofit2.http.Body
import retrofit2.http.Path

interface APIHandler {

    @GET("comments")
    fun getComments(): Call<List<Comment>>

    @GET("comments/{id}")
    fun getComment(@Path("id") id: Int): Call<Comment>

    @POST("comments/")
    fun postComment(@Body cmt: Comment): Call<Comment>

}