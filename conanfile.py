#!/usr/bin/env python
# -*- coding: utf-8 -*-

from conan import ConanFile
from conan.tools.build import check_min_cppstd
from conan.tools.cmake import CMake, CMakeDeps, CMakeToolchain, cmake_layout

required_conan_version = ">=2.9.3"


class SersiConan(ConanFile):
    name = "sersi"
    version = "0.2.0"

    settings = "os", "arch", "compiler", "build_type"
    generators = "CMakeToolchain", "CMakeDeps"

    def validate(self):
        if self.info.settings.get_safe("compiler.cppstd"):
            check_min_cppstd(self, 17)

    def build(self):
        cmake = CMake(self)
        cmake.configure(
            variables={"PROJECT_NAME": self.name, "PROJECT_VERSION": self.version}
        )
        cmake.build()
