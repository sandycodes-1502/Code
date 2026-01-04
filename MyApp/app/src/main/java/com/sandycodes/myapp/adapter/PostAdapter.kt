package com.sandycodes.myapp.adapter

import android.view.LayoutInflater
import android.view.ViewGroup
import androidx.recyclerview.widget.RecyclerView
import com.sandycodes.myapp.databinding.LayoutPostBinding
import com.sandycodes.myapp.models.Post

class PostAdapter(val posts : List<Post>) : RecyclerView.Adapter<PostAdapter.ViewHolder>() {

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): ViewHolder {
        return ViewHolder(LayoutPostBinding.inflate(LayoutInflater.from(parent.context), parent, false))
    }

    override fun getItemCount(): Int = posts.size

    override fun onBindViewHolder(holder: ViewHolder, position: Int) {
        holder.bind(post = posts.get(position))
    }

    inner class ViewHolder(val layoutPostBinding: LayoutPostBinding) : RecyclerView.ViewHolder(layoutPostBinding.root) {
        fun bind(post: Post){
            layoutPostBinding.post = post
        }
    }
}