include (ExternalProject)

# set (EXTERNAL_LIBRARIES uv PARENT_SCOPE)
# set (EXTERNAL_PROJECTS spdlog_project libuv_project PARENT_SCOPE)

set (EXTERNAL_TEST_LIBRARIES gtest PARENT_SCOPE)
set (EXTERNAL_TEST_PROJECTS gtest_project PARENT_SCOPE)

# externalproject_add (spdlog_project
#   GIT_REPOSITORY https://github.com/gabime/spdlog.git
#   GIT_TAG v0.11.0
#   BUILD_IN_SOURCE 1
#   UPDATE_COMMAND ""
#   CONFIGURE_COMMAND ""
#   BUILD_COMMAND ""
#   INSTALL_COMMAND pwd && cp -R include/spdlog ${CMAKE_BINARY_DIR}/ext/include
# )

# externalproject_add(asio_project
#   GIT_REPOSITORY https://github.com/chriskohlhoff/asio.git
#   GIT_TAG asio-1-18-1  # Use a specific version if you need one
#   CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/ext/asio
#   UPDATE_COMMAND ""
# )

# externalproject_add (gtest_project
#   GIT_REPOSITORY https://github.com/google/googletest.git
#   GIT_TAG release-1.11.0
#   UPDATE_COMMAND ""
#   CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/ext -Dgtest_disable_pthreads=ON
# )

# externalproject_add (libuv_project
#   GIT_REPOSITORY https://github.com/libuv/libuv.git
#   GIT_TAG v1.x
#   BUILD_IN_SOURCE 1
#   UPDATE_COMMAND ""
#   CONFIGURE_COMMAND ./autogen.sh COMMAND ./configure --prefix=${CMAKE_BINARY_DIR}/ext
#   BUILD_COMMAND make
#   INSTALL_COMMAND make install
# )

# Add Crow as an external project
externalproject_add(crow_project
  GIT_REPOSITORY https://github.com/CrowCpp/Crow.git
  GIT_TAG v1.2.0
  UPDATE_COMMAND ""
  CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/ext
             -DCROW_BUILD_EXAMPLES=OFF
             -DCROW_BUILD_TESTS=OFF
             -DASIO_INCLUDE_DIR=${CMAKE_BINARY_DIR}/ext/asio/include
)
