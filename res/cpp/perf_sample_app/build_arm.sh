#! /bin/sh


build_and_strip()
{
    source_file=$1
    binary_file=$2
    debug_file=${binary_file}.debug_info
    tools=/app/rbs/wrtools/tools-sdk-20160517/usr/bin/arm-wrs-linux-gnueabi
    

    "${tools}"/arm-wrs-linux-gnueabi-gcc -xc++ -lstdc++ -std=c++11 -fno-omit-frame-pointer -fasynchronous-unwind-tables --sysroot /proj/rbsNodeIfStorage/nodeif/DISTRO_CXA11448/R18G13/arm-wr6/ -I . -g -Wall -lrt -lpthread $source_file -o ${builddir}${binary_file}
    "${tools}"/arm-wrs-linux-gnueabi-objcopy --only-keep-debug "${binary_file}" "${debug_file}"
    "${tools}"/arm-wrs-linux-gnueabi-strip --strip-debug --strip-unneeded "${binary_file}"
    "${tools}"/arm-wrs-linux-gnueabi-objcopy --add-gnu-debuglink="${debug_file}" "${binary_file}"

}

build_and_strip sample_app.cc build/lratSampleAppArmLm

tar zcf build/lratSampleAppArmLm_source.tar.gz *


