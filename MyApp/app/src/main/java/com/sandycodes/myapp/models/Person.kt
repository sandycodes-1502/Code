package com.sandycodes.myapp.models

import androidx.room.ColumnInfo
import androidx.room.Entity
import androidx.room.PrimaryKey

@Entity
data class Person(
    @ColumnInfo(name = "name") val name : String,
    @ColumnInfo(name = "city") val city : String,
    @ColumnInfo(name = "gender") val gender : Int,

    @PrimaryKey val uid : Int? = null
)

enum class Gender(val type: Int){
    MALE(0),
    FEMALE(1)
}
