from conan import ConanFile
from conan.tools.files import copy

class LibSersiConan(ConanFile):
    name = "libsersi"
    version = "0.1.0"
    license = "MIT"
    author = "Cameron Howell <me@crhowell.com>"
    no_copy_source = True

    def package(self):
        copy(self, pattern="*.hpp", dst="include/libsersi", src="include/libsersi")
        copy(self, pattern="LICENSE", dst="licenses", src=".")

    def package_id(self):
        self.info.clear()

    def package_info(self):
        self.cpp_info.includedirs = ["include"]
        self.cpp_info.libdirs = []
        self.cpp_info.bindirs = []
