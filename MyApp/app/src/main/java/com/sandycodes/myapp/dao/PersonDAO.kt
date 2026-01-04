package com.sandycodes.myapp.dao

import androidx.room.Dao
import androidx.room.Insert
import androidx.room.Query
import com.sandycodes.myapp.models.Person

@Dao
interface PersonDAO {
    @Query("SELECT * FROM person")
    fun getPersonList(): List<Person>

    @Insert
    fun createPerson(vararg person: Person)

}