int main()
{
  int count = 32;
loop:
  if (count--) 
{
    printf("Hello School\n");
    goto loop;
}
  return 0;
}
