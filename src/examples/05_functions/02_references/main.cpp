int main()
{
    auto value = 5;
    cout<<"Memoy address of value is: "<<$value<<"\n";
    cout<<"Value is: "<<value<<"\n";

    //reference variable
    auto &ref_value = value;//clone os value
    cout<<"Memory address of value is storing: ";
    cout<<"Value via ref_value: "<<ref_value<<"\n";

    //can you modify value via ref_value
    ref_value = 10
    cout<<"Value is: "<<value<<"\n";
    cout<<"Value via ref_value: "<<ref_value<<"\n";


    return 0;
}
