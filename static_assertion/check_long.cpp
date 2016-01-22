int main()
{
    static_assert(sizeof(long) <= 8, "32 bits not supported");
    return 0;
}
