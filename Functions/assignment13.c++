string s;
cin >> s;

int start = 0, end = s.size() - 1;
while (start < end)
{
    while (start < end && !(s[start] == 'a' || s[start] == 'A' || s[start] == 'e' || s[start] == 'E' || s[start] == 'i' || s[start] == 'I' || s[start] == 'o' || s[start] == 'O' || s[start] == 'u' || s[start] == 'U'))
    {
        start++;
    }

    while (start < end && !(s[end] == 'a' || s[end] == 'A' || s[end] == 'e' || s[end] == 'E' || s[end] == 'i' || s[end] == 'I' || s[end] == 'o' || s[end] == 'O' || s[end] == 'u' || s[end] == 'U'))
    {
        end--;
    }

    if (start < end)
    {
        swap(s[start], s[end]);
        start++;
        end--;
    }
}

cout << s << endl;