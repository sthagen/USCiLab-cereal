/*
  Copyright (c) 2014, Randolph Voorhies, Shane Grant
  All rights reserved.

  Redistribution and use in source and binary forms, with or without
  modification, are permitted provided that the following conditions are met:
      * Redistributions of source code must retain the above copyright
        notice, this list of conditions and the following disclaimer.
      * Redistributions in binary form must reproduce the above copyright
        notice, this list of conditions and the following disclaimer in the
        documentation and/or other materials provided with the distribution.
      * Neither the name of the copyright holder nor the
        names of its contributors may be used to endorse or promote products
        derived from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
  ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY
  DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
  ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "array.hpp"

TEST_SUITE_BEGIN("array");

TEST_CASE("binary_array")
{
  test_array<cereal::BinaryInputArchive, cereal::BinaryOutputArchive, 0>();
  test_array<cereal::BinaryInputArchive, cereal::BinaryOutputArchive, 100>();
}

TEST_CASE("portable_binary_array")
{
  test_array<cereal::PortableBinaryInputArchive, cereal::PortableBinaryOutputArchive, 0>();
  test_array<cereal::PortableBinaryInputArchive, cereal::PortableBinaryOutputArchive, 100>();
}

TEST_CASE("xml_array")
{
  test_array<cereal::XMLInputArchive, cereal::XMLOutputArchive, 0>();
  test_array<cereal::XMLInputArchive, cereal::XMLOutputArchive, 100>();
}

TEST_CASE("json_array")
{
  test_array<cereal::JSONInputArchive, cereal::JSONOutputArchive, 0>();
  test_array<cereal::JSONInputArchive, cereal::JSONOutputArchive, 100>();
}

TEST_SUITE_END();
