package com.sandycodes.myapp.fragments.people

import com.sandycodes.myapp.models.Gender
import com.sandycodes.myapp.models.Person
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.delay
import kotlinx.coroutines.launch
import kotlinx.coroutines.withContext

class PeoplesModel : Contract.Model {

    val personsList = arrayListOf(
        Person("Sandesh", "Pune", Gender.MALE.type, 1),
        Person("Piyush", "Mumbai", Gender.FEMALE.type, 2),
        Person("Parth", "Shirdi", Gender.FEMALE.type, 3),
        Person("Viraj", "Kolkata", Gender.MALE.type, 4)
    )

//    override suspend fun getPersonListFromDB(listener: Contract.Model.onPersonFetchedListener) {
//        delay(5000)
//        listener.updatedPersonList(personsList)
//    }

    override fun getPersonListFromDB(onSuccess: (ArrayList<Person>) -> Unit) {
        CoroutineScope(Dispatchers.IO).launch {
            delay(5000)
            withContext(Dispatchers.Main){
                onSuccess(personsList)
            }
        }
    }

}