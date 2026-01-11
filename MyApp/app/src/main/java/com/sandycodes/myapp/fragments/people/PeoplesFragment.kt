package com.sandycodes.myapp.fragments.people

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ProgressBar
import androidx.core.view.isVisible
import androidx.fragment.app.Fragment
import androidx.recyclerview.widget.RecyclerView
import androidx.room.Room
import com.google.android.material.floatingactionbutton.FloatingActionButton
import com.sandycodes.myapp.R
import com.sandycodes.myapp.adapter.PersonAdapter
import com.sandycodes.myapp.models.Gender
import com.sandycodes.myapp.models.Person
import com.sandycodes.myapp.room.LocalDatabase
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch
import kotlinx.coroutines.withContext

class PeoplesFragment : Fragment(), Contract.View {

    private lateinit var presenter: Contract.Presenter
    private lateinit var progressbar : ProgressBar
    private lateinit var recyclerView : RecyclerView
    private lateinit var addPerson: FloatingActionButton

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        val view = inflater.inflate(R.layout.fragment_peoples, container, false)
        addPerson = view.findViewById(R.id.addperson)
        progressbar = view.findViewById(R.id.progressbar)

        recyclerView = view.findViewById(R.id.peoplerecyclerView)
//        updatePersonList(recyclerView)
        presenter = PeoplesPresenter(this@PeoplesFragment, PeoplesModel())

//        addPerson.setOnClickListener {
//            createPerson(Person("Sandesh", "Pune", Gender.MALE.type)) {
//                updatePersonList(recyclerView)
//            }
//        }

        presenter.getPersonList()

        return view
    }

    private fun updatePersonList(recyclerView: RecyclerView) {
        CoroutineScope(Dispatchers.IO).launch {
            val roomDB = Room.databaseBuilder(requireActivity().applicationContext, LocalDatabase::class.java, "local-db").build()
            val personDao = roomDB.personDao()
            var persons = personDao.getPersonList()

            withContext(Dispatchers.Main) {
                recyclerView.adapter = PersonAdapter(ArrayList(persons))
            }
        }

    }
    private fun createPerson(person: Person, onSuccess: () -> Unit) {
        CoroutineScope(Dispatchers.IO).launch {
            val roomDB = Room.databaseBuilder(requireActivity().applicationContext, LocalDatabase::class.java, "local-db").build()
            val personDao = roomDB.personDao()
            personDao.createPerson(person)

            onSuccess.invoke()
        }

    }

    override fun handleProgressBarVisibility(visible: Boolean) {
        progressbar.isVisible = visible
    }

    override fun renderPeoplesList(persons: ArrayList<Person>) {
        recyclerView.adapter = PersonAdapter(ArrayList(persons))
    }

}