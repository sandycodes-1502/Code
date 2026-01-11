package com.sandycodes.myapp.fragments.people

import com.sandycodes.myapp.models.Person
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch

class PeoplesPresenter(
    val view : Contract.View,
    val model : Contract.Model,
) : Contract.Presenter, Contract.Model.onPersonFetchedListener {
    override fun getPersonList() {
        view.handleProgressBarVisibility(true)

        model.getPersonListFromDB{ personList ->
            view.handleProgressBarVisibility(false)
            view.renderPeoplesList(personList)
        }

    }

    override fun updatedPersonList(persons: ArrayList<Person>) {
        view.handleProgressBarVisibility(false)
        view.renderPeoplesList(persons)
    }
}