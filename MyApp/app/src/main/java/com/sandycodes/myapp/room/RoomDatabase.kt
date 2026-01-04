package com.sandycodes.myapp.room

import androidx.room.Database
import androidx.room.RoomDatabase
import com.sandycodes.myapp.dao.PersonDAO
import com.sandycodes.myapp.models.Person

@Database(entities = [Person::class], version = 1)
abstract class LocalDatabase : RoomDatabase() {
    abstract fun personDao(): PersonDAO

}