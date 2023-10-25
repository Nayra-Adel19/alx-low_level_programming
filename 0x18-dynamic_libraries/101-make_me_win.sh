#!/bin/bash
wget -P /tmp_test/ https://github.com/Nayra-Adel19/alx-low_level_programming/blob/3ab8117b4cfd74c47aca3ae4628f6130507a0c9b/0x18-dynamic_libraries/librand_override.so
export LD_PRELOAD=/tmp_test/librand_override.so
