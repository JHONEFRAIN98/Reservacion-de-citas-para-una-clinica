cmake_minimum_required(VERSION 3.17)
project(ProyectoJhonCabumCabum)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ProyectoJhonCabumCabum
        ccita.cpp
        ccita.h
        cdoctor.cpp
        cdoctor.h
        cespecialidad.cpp
        cespecialidad.h
        citaform.cpp
        citaform.h
        cpaciente.cpp
        cpaciente.h
        cpersona.cpp
        cpersona.h
        cprograma.cpp
        cprograma.h
        doctorform.cpp
        doctorform.h
        especialidadform.cpp
        especialidadform.h
        main.cpp
        pacienteform.cpp
        pacienteform.h
        persona.cpp
        persona.h
        widget.cpp
        widget.h)
