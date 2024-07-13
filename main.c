int main()
{
  int count = 0;
loop:
  if (count < 32) 
{
  printf("Hello School\n");
  count++;
  goto loop;
}
  return 0;
}
