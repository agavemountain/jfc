# Copyright 2015 Atria Dynamics LLC
#
# Written by Joe Turner <joe@atriadynamics.com>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#   http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
##############################################################################

ADD_LIBRARY(jfc SHARED 
	environment.cpp
	configurationfile.cpp
	string_utilities.cpp
	escape.cpp
	file_utilities.cpp
	date_time.cpp
)

install(TARGETS jfc DESTINATION bin)


