package com.sandycodes.myapp.services

import com.sandycodes.myapp.models.Post
import retrofit2.http.Body
import retrofit2.http.GET
import retrofit2.http.POST

interface PostService{

    @GET("/posts")
    suspend fun getPosts() : ArrayList<Post>

    @POST("/post")
    suspend fun createPost(@Body post: Post) : Post

}