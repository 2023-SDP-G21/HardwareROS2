#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "message::message__rosidl_generator_py" for configuration ""
set_property(TARGET message::message__rosidl_generator_py APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(message::message__rosidl_generator_py PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libmessage__rosidl_generator_py.so"
  IMPORTED_SONAME_NOCONFIG "libmessage__rosidl_generator_py.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS message::message__rosidl_generator_py )
list(APPEND _IMPORT_CHECK_FILES_FOR_message::message__rosidl_generator_py "${_IMPORT_PREFIX}/lib/libmessage__rosidl_generator_py.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
