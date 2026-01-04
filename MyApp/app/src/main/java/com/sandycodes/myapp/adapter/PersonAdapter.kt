package com.sandycodes.myapp.adapter

import android.view.LayoutInflater
import android.view.ViewGroup
import androidx.recyclerview.widget.RecyclerView
import com.sandycodes.myapp.databinding.PersonFemaleBinding
import com.sandycodes.myapp.databinding.PersonMaleBinding
import com.sandycodes.myapp.models.Gender
import com.sandycodes.myapp.models.Person

class PersonAdapter(val persons : List<Person>) : RecyclerView.Adapter<RecyclerView.ViewHolder>() {

    override fun getItemViewType(position: Int): Int {
        return persons.get(position).gender
    }

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): RecyclerView.ViewHolder {
       if (viewType == Gender.MALE.type){
           return PersonMaleViewHolder(PersonMaleBinding.inflate(LayoutInflater.from(parent.context), parent, false))
       }
        else if (viewType == Gender.FEMALE.type){
           return PersonFemaleViewHolder(PersonFemaleBinding.inflate(LayoutInflater.from(parent.context), parent, false))
       }
        else {
           return PersonMaleViewHolder(PersonMaleBinding.inflate(LayoutInflater.from(parent.context), parent, false))
       }
    }

    override fun getItemCount(): Int = persons.size

    override fun onBindViewHolder(holder: RecyclerView.ViewHolder, position: Int) {
        when (holder) {
            is PersonMaleViewHolder -> holder.bind(persons.get(position))
            is PersonFemaleViewHolder -> holder.bind(persons.get(position))
        }
    }

    inner class PersonMaleViewHolder(val personMaleBinding: PersonMaleBinding) : RecyclerView.ViewHolder(personMaleBinding.root) {
        fun bind(person : Person?){
            personMaleBinding.person = person
        }
    }

    inner class PersonFemaleViewHolder(val personFemaleBinding: PersonFemaleBinding) : RecyclerView.ViewHolder(personFemaleBinding.root) {
        fun bind(person : Person?){
            personFemaleBinding.person = person
        }
    }
}