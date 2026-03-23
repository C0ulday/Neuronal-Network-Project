# Options: NETWORK (1,2,3) et IMPL (0,1)
set(NETWORK "1" CACHE STRING "1=qat-occupancy, 2=qat-occupancy2, 3=qat-mnist-odd")
set(IMPL "0" CACHE STRING "0=reference, 1=hybrid")

# Sélection du fichier réseau
if(NETWORK STREQUAL "1")
    set(NET_DIR "qat-occupancy")
elseif(NETWORK STREQUAL "2")
    set(NET_DIR "qat-occupancy2")
elseif(NETWORK STREQUAL "3")
    set(NET_DIR "qat-mnist-odd")
endif()

if(IMPL STREQUAL "1")
    set(NET_FILE "${NET_DIR}/hybrid-simple.c")
else()
    set(NET_FILE "${NET_DIR}/ref-from-hybrid-simple.c")
endif()

add_executable(latency_test main.c ${NET_FILE})
target_link_libraries(latency_test common)
target_compile_options(latency_test PRIVATE -Os)
target_compile_definitions(latency_test PRIVATE NETWORK=${NETWORK} IMPL=${IMPL})
target_include_directories(latency_test PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/${NET_DIR})
