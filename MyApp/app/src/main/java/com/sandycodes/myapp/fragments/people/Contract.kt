package com.sandycodes.myapp.fragments.people

import com.sandycodes.myapp.models.Person

class Contract {

    interface View {
        fun handleProgressBarVisibility(visible : Boolean)
        fun renderPeoplesList(persons : ArrayList<Person>)
    }

    interface Presenter {
        fun getPersonList ()
    }

    interface Model {

        interface onPersonFetchedListener {
            fun updatedPersonList(persons : ArrayList<Person>)
        }
        fun getPersonListFromDB(onSuccess: (ArrayList<Person>) -> Unit)

    }

}