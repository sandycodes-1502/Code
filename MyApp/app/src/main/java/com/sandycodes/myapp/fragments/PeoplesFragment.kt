package com.sandycodes.myapp.fragments

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
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

class PeoplesFragment : Fragment() {

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        val view = inflater.inflate(R.layout.fragment_peoples, container, false)
        val addPerson = view.findViewById<FloatingActionButton>(R.id.addperson)

        val recyclerView = view.findViewById<RecyclerView>(R.id.recyclerView)
        updatePersonList(recyclerView)

//        val gender = when (binding.genderGroup.checkedRadioButtonId) {
//            R.id.radioMale -> "Male"
//            R.id.radioFemale -> "Female"
//            else -> "Not selected"
//        }

        addPerson.setOnClickListener {
            createPerson(Person("Sandesh", "Pune", Gender.MALE.type)) {
                updatePersonList(recyclerView)
            }
        }

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

}