package com.sandycodes.myapp.fragments

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.fragment.app.Fragment
import androidx.recyclerview.widget.RecyclerView
import com.sandycodes.myapp.R
import com.sandycodes.myapp.adapter.PostAdapter
import com.sandycodes.myapp.fragments.people.Contract
import com.sandycodes.myapp.models.Person
import com.sandycodes.myapp.services.PostService
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch
import kotlinx.coroutines.withContext
import retrofit2.Retrofit
import retrofit2.converter.gson.GsonConverterFactory

class DashboardFragment : Fragment(), Contract.View {
override fun onCreateView(
    inflater: LayoutInflater, container: ViewGroup?,
    savedInstanceState: Bundle?
): View? {
    val view = inflater.inflate(R.layout.fragment_dashboard, container, false)

    val recyclerView = view.findViewById<RecyclerView>(R.id.dashboardrecyclerView)

    val retrofit = Retrofit.Builder()
        .baseUrl("https://jsonplaceholder.typicode.com")
        .addConverterFactory(GsonConverterFactory.create())
        .build()

    val postService = retrofit.create(PostService::class.java)

    CoroutineScope(Dispatchers.IO).launch {
        val posts = postService.getPosts()
        withContext(Dispatchers.Main){
            recyclerView.adapter = PostAdapter(ArrayList(posts))
        }
    }


    return view
}

    override fun handleProgressBarVisibility(visible: Boolean) {
        TODO("Not yet implemented")
    }

    override fun renderPeoplesList(persons: ArrayList<Person>) {
        TODO("Not yet implemented")
    }
}