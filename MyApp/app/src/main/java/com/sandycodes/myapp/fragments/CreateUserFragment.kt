package com.sandycodes.myapp.fragments

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.Button
import android.widget.EditText
import android.widget.RadioGroup
import android.widget.Toast
import androidx.cardview.widget.CardView
import androidx.core.os.bundleOf
import androidx.fragment.app.DialogFragment
import androidx.interpolator.view.animation.FastOutSlowInInterpolator
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.RecyclerView
import androidx.room.Room
import com.sandycodes.myapp.R
import com.sandycodes.myapp.adapter.PersonAdapter
import com.sandycodes.myapp.models.Gender
import com.sandycodes.myapp.models.Person
import com.sandycodes.myapp.room.LocalDatabase
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch
import kotlinx.coroutines.withContext

class CreateUserFragment : DialogFragment() {
    // VERSION 1 DOWN
    private val roomDB by lazy {
        Room.databaseBuilder(
            requireActivity().applicationContext,
            LocalDatabase::class.java,
            "local-db"
        ).build()
    }

    override fun onStart() {
        super.onStart()

        val card = dialog?.findViewById<CardView>(R.id.createpersoncard) ?: return

        card.scaleX = 0.9f
        card.scaleY = 0.9f
        card.alpha = 0f

        card.animate()
            .scaleX(1f)
            .scaleY(1f)
            .alpha(1f)
            .setDuration(250)
            .setInterpolator(FastOutSlowInInterpolator())
            .start()
    }

    override fun onCreateView(
        inflater: LayoutInflater,
        container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View {
        val view = inflater.inflate(R.layout.person_add, container, false)
        val submit = view.findViewById<Button>(R.id.submituserdetails)

        val recyclerView = view.findViewById<RecyclerView>(R.id.peoplerecyclerView)
//        updatePersonList(recyclerView)

        submit.setOnClickListener {
            val username = view.findViewById<EditText>(R.id.user_name)
            val usercity = view.findViewById<EditText>(R.id.user_city)
            val gendergroup = view.findViewById<RadioGroup>(R.id.genderGroup)

            if (username.text.toString().trim().isEmpty() || usercity.text.toString().trim()
                    .isEmpty()
            ) {
                Toast.makeText(requireContext(), "Please Fill All Details", Toast.LENGTH_SHORT)
                    .show()
                return@setOnClickListener
            } else {
                val gender = when (gendergroup.checkedRadioButtonId) {
                    R.id.radioMale -> Gender.MALE.type
                    R.id.radioFemale -> Gender.FEMALE.type
                    else -> Gender.MALE.type
                }

                if (gendergroup.checkedRadioButtonId == -1) {
                    Toast.makeText(requireContext(), "Please select gender", Toast.LENGTH_SHORT)
                        .show()
                    return@setOnClickListener
                }
                createPerson(Person(username.text.toString(), usercity.text.toString(), gender)) {
                    Toast.makeText(requireContext(), "Person Added", Toast.LENGTH_SHORT).show()
                    updatePersonList(recyclerView)
//                    setFragmentResult("person_added", bundleOf("success" to true))
                    dismiss()
                }
            }
        }

        return view
    }

    private fun updatePersonList(recyclerView: RecyclerView) {
        CoroutineScope(Dispatchers.IO).launch {
            val roomDB = roomDB.personDao()
            val persons = roomDB.getPersonList()

            withContext(Dispatchers.Main) {
                recyclerView.layoutManager = LinearLayoutManager(requireContext())
                recyclerView.adapter = PersonAdapter(ArrayList(persons))
            }
        }

    }

    private fun createPerson(person: Person, onSuccess: () -> Unit) {
        CoroutineScope(Dispatchers.IO).launch {
            val roomDB = roomDB.personDao()
            roomDB.createPerson(person)

            withContext(Dispatchers.Main) {
                onSuccess.invoke()
            }
        }

    }
}


    // VERSION 2 DOWN
//
//    private val roomDB by lazy {
//        Room.databaseBuilder(
//            requireContext().applicationContext,
//            LocalDatabase::class.java,
//            "local-db"
//        ).build()
//    }
//
//    override fun onStart() {
//        super.onStart()
//
//        val card = dialog?.findViewById<CardView>(R.id.createpersoncard) ?: return
//
//        card.scaleX = 0.9f
//        card.scaleY = 0.9f
//        card.alpha = 0f
//
//        card.animate()
//            .scaleX(1f)
//            .scaleY(1f)
//            .alpha(1f)
//            .setDuration(250)
//            .setInterpolator(FastOutSlowInInterpolator())
//            .start()
//    }
//
//    override fun onCreateView(
//        inflater: LayoutInflater,
//        container: ViewGroup?,
//        savedInstanceState: Bundle?
//    ): View {
//        val view = inflater.inflate(R.layout.person_add, container, false)
//
//        val submit = view.findViewById<Button>(R.id.submituserdetails)
//        val username = view.findViewById<EditText>(R.id.user_name)
//        val usercity = view.findViewById<EditText>(R.id.user_city)
//        val genderGroup = view.findViewById<RadioGroup>(R.id.genderGroup)
//
//        submit.setOnClickListener {
//
//            // 1️⃣ Validate text fields
//            if (
//                username.text.toString().trim().isEmpty() ||
//                usercity.text.toString().trim().isEmpty()
//            ) {
//                Toast.makeText(requireContext(), "Please fill all details", Toast.LENGTH_SHORT).show()
//                return@setOnClickListener
//            }
//
//            // 2️⃣ Validate gender selection
//            if (genderGroup.checkedRadioButtonId == -1) {
//                Toast.makeText(requireContext(), "Please select gender", Toast.LENGTH_SHORT).show()
//                return@setOnClickListener
//            }
//
//            val gender = when (genderGroup.checkedRadioButtonId) {
//                R.id.radioMale -> Gender.MALE.type
//                R.id.radioFemale -> Gender.FEMALE.type
//                else -> Gender.MALE.type
//            }
//
//            val person = Person(
//                username.text.toString().trim(),
//                usercity.text.toString().trim(),
//                gender
//            )
//
//            createPerson(person)
//        }
//
//        return view
//    }
//
//    private fun createPerson(person: Person) {
//        CoroutineScope(Dispatchers.IO).launch {
//            roomDB.personDao().createPerson(person)
//
//            withContext(Dispatchers.Main) {
//                // 🔥 SEND RESULT TO PARENT
//                setFragmentResult(
//                    "person_added",
//                    bundleOf("success" to true)
//                )
//
//                Toast.makeText(requireContext(), "Person Added", Toast.LENGTH_SHORT).show()
//                dismiss()
//            }
//        }
//    }
//
//}