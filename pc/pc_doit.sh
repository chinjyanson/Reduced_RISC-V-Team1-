#!/bin/sh

# cleanup
rm -rf obj_dir
rm -f pc_top.vcd

#run Verilator to translate Verilog into C++, including C++ testbench
verilator -Wall --cc --trace pc_top.sv --exe top_pc_tb.cpp

#build C++ project via make automatically generated by Verilator
make -j -C obj_dir/ -f Vpc_top.mk Vpc_top

# run executable simulation file
obj_dir/Vpc_top