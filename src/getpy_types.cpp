#include "getpy.cpp"

#include <pybind11/pybind11.h>

using bytearray2 = bytearray<uint8_t, 2>;
using bytearray3 = bytearray<uint8_t, 3>;
using bytearray4 = bytearray<uint8_t, 4>;
using bytearray5 = bytearray<uint8_t, 5>;
using bytearray6 = bytearray<uint8_t, 6>;
using bytearray7 = bytearray<uint8_t, 7>;
using bytearray8 = bytearray<uint8_t, 8>;
using bytearray9 = bytearray<uint8_t, 9>;
using bytearray10 = bytearray<uint8_t, 10>;
using bytearray11 = bytearray<uint8_t, 11>;
using bytearray12 = bytearray<uint8_t, 12>;
using bytearray13 = bytearray<uint8_t, 13>;
using bytearray14 = bytearray<uint8_t, 14>;
using bytearray15 = bytearray<uint8_t, 15>;
using bytearray16 = bytearray<uint8_t, 16>;
using byte8array2 = bytearray<uint64_t, 2>;
using byte8array3 = bytearray<uint64_t, 3>;
using byte8array4 = bytearray<uint64_t, 4>;
using byte8array5 = bytearray<uint64_t, 5>;
using byte8array6 = bytearray<uint64_t, 6>;
using byte8array7 = bytearray<uint64_t, 7>;
using byte8array8 = bytearray<uint64_t, 8>;
using byte8array9 = bytearray<uint64_t, 9>;
using byte8array10 = bytearray<uint64_t, 10>;
using byte8array11 = bytearray<uint64_t, 11>;
using byte8array12 = bytearray<uint64_t, 12>;
using byte8array13 = bytearray<uint64_t, 13>;
using byte8array14 = bytearray<uint64_t, 14>;
using byte8array15 = bytearray<uint64_t, 15>;
using byte8array16 = bytearray<uint64_t, 16>;

PYBIND11_MODULE(_getpy, m) {
    m.doc() = "A Fast and Memory Efficient Hash Map for Python";

    PYBIND11_NUMPY_DTYPE( bytearray2, bytearray );
    PYBIND11_NUMPY_DTYPE( bytearray3, bytearray );
    PYBIND11_NUMPY_DTYPE( bytearray4, bytearray );
    PYBIND11_NUMPY_DTYPE( bytearray5, bytearray );
    PYBIND11_NUMPY_DTYPE( bytearray6, bytearray );
    PYBIND11_NUMPY_DTYPE( bytearray7, bytearray );
    PYBIND11_NUMPY_DTYPE( bytearray8, bytearray );
    PYBIND11_NUMPY_DTYPE( bytearray9, bytearray );
    PYBIND11_NUMPY_DTYPE( bytearray10, bytearray );
    PYBIND11_NUMPY_DTYPE( bytearray11, bytearray );
    PYBIND11_NUMPY_DTYPE( bytearray12, bytearray );
    PYBIND11_NUMPY_DTYPE( bytearray13, bytearray );
    PYBIND11_NUMPY_DTYPE( bytearray14, bytearray );
    PYBIND11_NUMPY_DTYPE( bytearray15, bytearray );
    PYBIND11_NUMPY_DTYPE( bytearray16, bytearray );
    PYBIND11_NUMPY_DTYPE( byte8array2, bytearray );
    PYBIND11_NUMPY_DTYPE( byte8array3, bytearray );
    PYBIND11_NUMPY_DTYPE( byte8array4, bytearray );
    PYBIND11_NUMPY_DTYPE( byte8array5, bytearray );
    PYBIND11_NUMPY_DTYPE( byte8array6, bytearray );
    PYBIND11_NUMPY_DTYPE( byte8array7, bytearray );
    PYBIND11_NUMPY_DTYPE( byte8array8, bytearray );
    PYBIND11_NUMPY_DTYPE( byte8array9, bytearray );
    PYBIND11_NUMPY_DTYPE( byte8array10, bytearray );
    PYBIND11_NUMPY_DTYPE( byte8array11, bytearray );
    PYBIND11_NUMPY_DTYPE( byte8array12, bytearray );
    PYBIND11_NUMPY_DTYPE( byte8array13, bytearray );
    PYBIND11_NUMPY_DTYPE( byte8array14, bytearray );
    PYBIND11_NUMPY_DTYPE( byte8array15, bytearray );
    PYBIND11_NUMPY_DTYPE( byte8array16, bytearray );

    declare_dict_default<uint32_t, uint8_t>(m, "Dict_uint32_uint8");
    declare_dict_default<uint32_t, uint16_t>(m, "Dict_uint32_uint16");
    declare_dict_default<uint32_t, uint32_t>(m, "Dict_uint32_uint32");
    declare_dict_default<uint32_t, uint64_t>(m, "Dict_uint32_uint64");
    declare_dict_default<uint32_t, int8_t>(m, "Dict_uint32_int8");
    declare_dict_default<uint32_t, int16_t>(m, "Dict_uint32_int16");
    declare_dict_default<uint32_t, int32_t>(m, "Dict_uint32_int32");
    declare_dict_default<uint32_t, int64_t>(m, "Dict_uint32_int64");
    declare_dict_default<uint32_t, float>(m, "Dict_uint32_float32");
    declare_dict_default<uint32_t, double>(m, "Dict_uint32_float64");
    declare_dict_bitwise<uint32_t, bytearray2>(m, "Dict_uint32_bytearray2");
    declare_dict_bitwise<uint32_t, bytearray3>(m, "Dict_uint32_bytearray3");
    declare_dict_bitwise<uint32_t, bytearray4>(m, "Dict_uint32_bytearray4");
    declare_dict_bitwise<uint32_t, bytearray5>(m, "Dict_uint32_bytearray5");
    declare_dict_bitwise<uint32_t, bytearray6>(m, "Dict_uint32_bytearray6");
    declare_dict_bitwise<uint32_t, bytearray7>(m, "Dict_uint32_bytearray7");
    declare_dict_bitwise<uint32_t, bytearray8>(m, "Dict_uint32_bytearray8");
    declare_dict_bitwise<uint32_t, bytearray9>(m, "Dict_uint32_bytearray9");
    declare_dict_bitwise<uint32_t, bytearray10>(m, "Dict_uint32_bytearray10");
    declare_dict_bitwise<uint32_t, bytearray11>(m, "Dict_uint32_bytearray11");
    declare_dict_bitwise<uint32_t, bytearray12>(m, "Dict_uint32_bytearray12");
    declare_dict_bitwise<uint32_t, bytearray13>(m, "Dict_uint32_bytearray13");
    declare_dict_bitwise<uint32_t, bytearray14>(m, "Dict_uint32_bytearray14");
    declare_dict_bitwise<uint32_t, bytearray15>(m, "Dict_uint32_bytearray15");
    declare_dict_bitwise<uint32_t, bytearray16>(m, "Dict_uint32_bytearray16");
    declare_dict_bitwise<uint32_t, byte8array2>(m, "Dict_uint32_byte8array2");
    declare_dict_bitwise<uint32_t, byte8array3>(m, "Dict_uint32_byte8array3");
    declare_dict_bitwise<uint32_t, byte8array4>(m, "Dict_uint32_byte8array4");
    declare_dict_bitwise<uint32_t, byte8array5>(m, "Dict_uint32_byte8array5");
    declare_dict_bitwise<uint32_t, byte8array6>(m, "Dict_uint32_byte8array6");
    declare_dict_bitwise<uint32_t, byte8array7>(m, "Dict_uint32_byte8array7");
    declare_dict_bitwise<uint32_t, byte8array8>(m, "Dict_uint32_byte8array8");
    declare_dict_bitwise<uint32_t, byte8array9>(m, "Dict_uint32_byte8array9");
    declare_dict_bitwise<uint32_t, byte8array10>(m, "Dict_uint32_byte8array10");
    declare_dict_bitwise<uint32_t, byte8array11>(m, "Dict_uint32_byte8array11");
    declare_dict_bitwise<uint32_t, byte8array12>(m, "Dict_uint32_byte8array12");
    declare_dict_bitwise<uint32_t, byte8array13>(m, "Dict_uint32_byte8array13");
    declare_dict_bitwise<uint32_t, byte8array14>(m, "Dict_uint32_byte8array14");
    declare_dict_bitwise<uint32_t, byte8array15>(m, "Dict_uint32_byte8array15");
    declare_dict_bitwise<uint32_t, byte8array16>(m, "Dict_uint32_byte8array16");
    declare_dict_default<uint64_t, uint8_t>(m, "Dict_uint64_uint8");
    declare_dict_default<uint64_t, uint16_t>(m, "Dict_uint64_uint16");
    declare_dict_default<uint64_t, uint32_t>(m, "Dict_uint64_uint32");
    declare_dict_default<uint64_t, uint64_t>(m, "Dict_uint64_uint64");
    declare_dict_default<uint64_t, int8_t>(m, "Dict_uint64_int8");
    declare_dict_default<uint64_t, int16_t>(m, "Dict_uint64_int16");
    declare_dict_default<uint64_t, int32_t>(m, "Dict_uint64_int32");
    declare_dict_default<uint64_t, int64_t>(m, "Dict_uint64_int64");
    declare_dict_default<uint64_t, float>(m, "Dict_uint64_float32");
    declare_dict_default<uint64_t, double>(m, "Dict_uint64_float64");
    declare_dict_bitwise<uint64_t, bytearray2>(m, "Dict_uint64_bytearray2");
    declare_dict_bitwise<uint64_t, bytearray3>(m, "Dict_uint64_bytearray3");
    declare_dict_bitwise<uint64_t, bytearray4>(m, "Dict_uint64_bytearray4");
    declare_dict_bitwise<uint64_t, bytearray5>(m, "Dict_uint64_bytearray5");
    declare_dict_bitwise<uint64_t, bytearray6>(m, "Dict_uint64_bytearray6");
    declare_dict_bitwise<uint64_t, bytearray7>(m, "Dict_uint64_bytearray7");
    declare_dict_bitwise<uint64_t, bytearray8>(m, "Dict_uint64_bytearray8");
    declare_dict_bitwise<uint64_t, bytearray9>(m, "Dict_uint64_bytearray9");
    declare_dict_bitwise<uint64_t, bytearray10>(m, "Dict_uint64_bytearray10");
    declare_dict_bitwise<uint64_t, bytearray11>(m, "Dict_uint64_bytearray11");
    declare_dict_bitwise<uint64_t, bytearray12>(m, "Dict_uint64_bytearray12");
    declare_dict_bitwise<uint64_t, bytearray13>(m, "Dict_uint64_bytearray13");
    declare_dict_bitwise<uint64_t, bytearray14>(m, "Dict_uint64_bytearray14");
    declare_dict_bitwise<uint64_t, bytearray15>(m, "Dict_uint64_bytearray15");
    declare_dict_bitwise<uint64_t, bytearray16>(m, "Dict_uint64_bytearray16");
    declare_dict_bitwise<uint64_t, byte8array2>(m, "Dict_uint64_byte8array2");
    declare_dict_bitwise<uint64_t, byte8array3>(m, "Dict_uint64_byte8array3");
    declare_dict_bitwise<uint64_t, byte8array4>(m, "Dict_uint64_byte8array4");
    declare_dict_bitwise<uint64_t, byte8array5>(m, "Dict_uint64_byte8array5");
    declare_dict_bitwise<uint64_t, byte8array6>(m, "Dict_uint64_byte8array6");
    declare_dict_bitwise<uint64_t, byte8array7>(m, "Dict_uint64_byte8array7");
    declare_dict_bitwise<uint64_t, byte8array8>(m, "Dict_uint64_byte8array8");
    declare_dict_bitwise<uint64_t, byte8array9>(m, "Dict_uint64_byte8array9");
    declare_dict_bitwise<uint64_t, byte8array10>(m, "Dict_uint64_byte8array10");
    declare_dict_bitwise<uint64_t, byte8array11>(m, "Dict_uint64_byte8array11");
    declare_dict_bitwise<uint64_t, byte8array12>(m, "Dict_uint64_byte8array12");
    declare_dict_bitwise<uint64_t, byte8array13>(m, "Dict_uint64_byte8array13");
    declare_dict_bitwise<uint64_t, byte8array14>(m, "Dict_uint64_byte8array14");
    declare_dict_bitwise<uint64_t, byte8array15>(m, "Dict_uint64_byte8array15");
    declare_dict_bitwise<uint64_t, byte8array16>(m, "Dict_uint64_byte8array16");
    declare_dict_default<int32_t, uint8_t>(m, "Dict_int32_uint8");
    declare_dict_default<int32_t, uint16_t>(m, "Dict_int32_uint16");
    declare_dict_default<int32_t, uint32_t>(m, "Dict_int32_uint32");
    declare_dict_default<int32_t, uint64_t>(m, "Dict_int32_uint64");
    declare_dict_default<int32_t, int8_t>(m, "Dict_int32_int8");
    declare_dict_default<int32_t, int16_t>(m, "Dict_int32_int16");
    declare_dict_default<int32_t, int32_t>(m, "Dict_int32_int32");
    declare_dict_default<int32_t, int64_t>(m, "Dict_int32_int64");
    declare_dict_default<int32_t, float>(m, "Dict_int32_float32");
    declare_dict_default<int32_t, double>(m, "Dict_int32_float64");
    declare_dict_bitwise<int32_t, bytearray2>(m, "Dict_int32_bytearray2");
    declare_dict_bitwise<int32_t, bytearray3>(m, "Dict_int32_bytearray3");
    declare_dict_bitwise<int32_t, bytearray4>(m, "Dict_int32_bytearray4");
    declare_dict_bitwise<int32_t, bytearray5>(m, "Dict_int32_bytearray5");
    declare_dict_bitwise<int32_t, bytearray6>(m, "Dict_int32_bytearray6");
    declare_dict_bitwise<int32_t, bytearray7>(m, "Dict_int32_bytearray7");
    declare_dict_bitwise<int32_t, bytearray8>(m, "Dict_int32_bytearray8");
    declare_dict_bitwise<int32_t, bytearray9>(m, "Dict_int32_bytearray9");
    declare_dict_bitwise<int32_t, bytearray10>(m, "Dict_int32_bytearray10");
    declare_dict_bitwise<int32_t, bytearray11>(m, "Dict_int32_bytearray11");
    declare_dict_bitwise<int32_t, bytearray12>(m, "Dict_int32_bytearray12");
    declare_dict_bitwise<int32_t, bytearray13>(m, "Dict_int32_bytearray13");
    declare_dict_bitwise<int32_t, bytearray14>(m, "Dict_int32_bytearray14");
    declare_dict_bitwise<int32_t, bytearray15>(m, "Dict_int32_bytearray15");
    declare_dict_bitwise<int32_t, bytearray16>(m, "Dict_int32_bytearray16");
    declare_dict_bitwise<int32_t, byte8array2>(m, "Dict_int32_byte8array2");
    declare_dict_bitwise<int32_t, byte8array3>(m, "Dict_int32_byte8array3");
    declare_dict_bitwise<int32_t, byte8array4>(m, "Dict_int32_byte8array4");
    declare_dict_bitwise<int32_t, byte8array5>(m, "Dict_int32_byte8array5");
    declare_dict_bitwise<int32_t, byte8array6>(m, "Dict_int32_byte8array6");
    declare_dict_bitwise<int32_t, byte8array7>(m, "Dict_int32_byte8array7");
    declare_dict_bitwise<int32_t, byte8array8>(m, "Dict_int32_byte8array8");
    declare_dict_bitwise<int32_t, byte8array9>(m, "Dict_int32_byte8array9");
    declare_dict_bitwise<int32_t, byte8array10>(m, "Dict_int32_byte8array10");
    declare_dict_bitwise<int32_t, byte8array11>(m, "Dict_int32_byte8array11");
    declare_dict_bitwise<int32_t, byte8array12>(m, "Dict_int32_byte8array12");
    declare_dict_bitwise<int32_t, byte8array13>(m, "Dict_int32_byte8array13");
    declare_dict_bitwise<int32_t, byte8array14>(m, "Dict_int32_byte8array14");
    declare_dict_bitwise<int32_t, byte8array15>(m, "Dict_int32_byte8array15");
    declare_dict_bitwise<int32_t, byte8array16>(m, "Dict_int32_byte8array16");
    declare_dict_default<int64_t, uint8_t>(m, "Dict_int64_uint8");
    declare_dict_default<int64_t, uint16_t>(m, "Dict_int64_uint16");
    declare_dict_default<int64_t, uint32_t>(m, "Dict_int64_uint32");
    declare_dict_default<int64_t, uint64_t>(m, "Dict_int64_uint64");
    declare_dict_default<int64_t, int8_t>(m, "Dict_int64_int8");
    declare_dict_default<int64_t, int16_t>(m, "Dict_int64_int16");
    declare_dict_default<int64_t, int32_t>(m, "Dict_int64_int32");
    declare_dict_default<int64_t, int64_t>(m, "Dict_int64_int64");
    declare_dict_default<int64_t, float>(m, "Dict_int64_float32");
    declare_dict_default<int64_t, double>(m, "Dict_int64_float64");
    declare_dict_bitwise<int64_t, bytearray2>(m, "Dict_int64_bytearray2");
    declare_dict_bitwise<int64_t, bytearray3>(m, "Dict_int64_bytearray3");
    declare_dict_bitwise<int64_t, bytearray4>(m, "Dict_int64_bytearray4");
    declare_dict_bitwise<int64_t, bytearray5>(m, "Dict_int64_bytearray5");
    declare_dict_bitwise<int64_t, bytearray6>(m, "Dict_int64_bytearray6");
    declare_dict_bitwise<int64_t, bytearray7>(m, "Dict_int64_bytearray7");
    declare_dict_bitwise<int64_t, bytearray8>(m, "Dict_int64_bytearray8");
    declare_dict_bitwise<int64_t, bytearray9>(m, "Dict_int64_bytearray9");
    declare_dict_bitwise<int64_t, bytearray10>(m, "Dict_int64_bytearray10");
    declare_dict_bitwise<int64_t, bytearray11>(m, "Dict_int64_bytearray11");
    declare_dict_bitwise<int64_t, bytearray12>(m, "Dict_int64_bytearray12");
    declare_dict_bitwise<int64_t, bytearray13>(m, "Dict_int64_bytearray13");
    declare_dict_bitwise<int64_t, bytearray14>(m, "Dict_int64_bytearray14");
    declare_dict_bitwise<int64_t, bytearray15>(m, "Dict_int64_bytearray15");
    declare_dict_bitwise<int64_t, bytearray16>(m, "Dict_int64_bytearray16");
    declare_dict_bitwise<int64_t, byte8array2>(m, "Dict_int64_byte8array2");
    declare_dict_bitwise<int64_t, byte8array3>(m, "Dict_int64_byte8array3");
    declare_dict_bitwise<int64_t, byte8array4>(m, "Dict_int64_byte8array4");
    declare_dict_bitwise<int64_t, byte8array5>(m, "Dict_int64_byte8array5");
    declare_dict_bitwise<int64_t, byte8array6>(m, "Dict_int64_byte8array6");
    declare_dict_bitwise<int64_t, byte8array7>(m, "Dict_int64_byte8array7");
    declare_dict_bitwise<int64_t, byte8array8>(m, "Dict_int64_byte8array8");
    declare_dict_bitwise<int64_t, byte8array9>(m, "Dict_int64_byte8array9");
    declare_dict_bitwise<int64_t, byte8array10>(m, "Dict_int64_byte8array10");
    declare_dict_bitwise<int64_t, byte8array11>(m, "Dict_int64_byte8array11");
    declare_dict_bitwise<int64_t, byte8array12>(m, "Dict_int64_byte8array12");
    declare_dict_bitwise<int64_t, byte8array13>(m, "Dict_int64_byte8array13");
    declare_dict_bitwise<int64_t, byte8array14>(m, "Dict_int64_byte8array14");
    declare_dict_bitwise<int64_t, byte8array15>(m, "Dict_int64_byte8array15");
    declare_dict_bitwise<int64_t, byte8array16>(m, "Dict_int64_byte8array16");

    declare_set<uint32_t>(m, "Set_uint32");
    declare_set<uint64_t>(m, "Set_uint64");
    declare_set<int32_t>(m, "Set_int32");
    declare_set<int64_t>(m, "Set_int64");
    declare_set<bytearray2>(m, "Set_bytearray2");
    declare_set<bytearray3>(m, "Set_bytearray3");
    declare_set<bytearray4>(m, "Set_bytearray4");
    declare_set<bytearray5>(m, "Set_bytearray5");
    declare_set<bytearray6>(m, "Set_bytearray6");
    declare_set<bytearray7>(m, "Set_bytearray7");
    declare_set<bytearray8>(m, "Set_bytearray8");
    declare_set<bytearray9>(m, "Set_bytearray9");
    declare_set<bytearray10>(m, "Set_bytearray10");
    declare_set<bytearray11>(m, "Set_bytearray11");
    declare_set<bytearray12>(m, "Set_bytearray12");
    declare_set<bytearray13>(m, "Set_bytearray13");
    declare_set<bytearray14>(m, "Set_bytearray14");
    declare_set<bytearray15>(m, "Set_bytearray15");
    declare_set<bytearray16>(m, "Set_bytearray16");
    declare_set<byte8array2>(m, "Set_byte8array2");
    declare_set<byte8array3>(m, "Set_byte8array3");
    declare_set<byte8array4>(m, "Set_byte8array4");
    declare_set<byte8array5>(m, "Set_byte8array5");
    declare_set<byte8array6>(m, "Set_byte8array6");
    declare_set<byte8array7>(m, "Set_byte8array7");
    declare_set<byte8array8>(m, "Set_byte8array8");
    declare_set<byte8array9>(m, "Set_byte8array9");
    declare_set<byte8array10>(m, "Set_byte8array10");
    declare_set<byte8array11>(m, "Set_byte8array11");
    declare_set<byte8array12>(m, "Set_byte8array12");
    declare_set<byte8array13>(m, "Set_byte8array13");
    declare_set<byte8array14>(m, "Set_byte8array14");
    declare_set<byte8array15>(m, "Set_byte8array15");
    declare_set<byte8array16>(m, "Set_byte8array16");
}
