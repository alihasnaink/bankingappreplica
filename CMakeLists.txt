cmake_minimum_required(VERSION 3.16)

project(BankingAppReplica VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets Sql)  # Added Sql component here
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets Sql)  # Added Sql component here

set(PROJECT_SOURCES
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    accountcreationbox.h accountcreationbox.cpp accountcreationbox.ui
    forgotpassword.h forgotpassword.cpp forgotpassword.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(BankingAppReplica
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        sendmoney.h sendmoney.cpp sendmoney.ui
        depositmoney.h depositmoney.cpp depositmoney.ui
        debitcard.h debitcard.cpp debitcard.ui
    )
else()
    if(ANDROID)
        add_library(BankingAppReplica SHARED
            ${PROJECT_SOURCES}
        )
    else()
        add_executable(BankingAppReplica
            ${PROJECT_SOURCES}
        )
    endif()
endif()

# Link the necessary Qt libraries, including Sql
target_link_libraries(BankingAppReplica PRIVATE Qt${QT_VERSION_MAJOR}::Widgets Qt${QT_VERSION_MAJOR}::Sql)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.BankingAppReplica)
endif()
set_target_properties(BankingAppReplica PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS BankingAppReplica
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(BankingAppReplica)
endif()
