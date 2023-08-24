namespace cpp_location{
struct ThreeD{
    int x;
    int y;
    int z;
};

struct Location{
     cpp_location::ThreeD position; // middle
     cpp_location::ThreeD speed; //current
     cpp_location::ThreeD acceleration; //current
     cpp_location::ThreeD size;
}

}
