add_library(encoders_pio INTERFACE)

target_sources(encoders_pio INTERFACE
  ${CMAKE_CURRENT_LIST_DIR}/encoders.cpp
)

pico_generate_pio_header(encoders_pio ${CMAKE_CURRENT_LIST_DIR}/encoders.pio)

target_include_directories(encoders_pio INTERFACE ${CMAKE_CURRENT_LIST_DIR})