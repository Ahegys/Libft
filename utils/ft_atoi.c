int ft_atoi(const char *str) {
  int sng;
  int res;
  int check;

  sng = 1;
  res = 0;
  check = 0;

  while ((*str >= '\t' && *str <= '\r') || *str == ' ')
    str++;
  while (*str == '+' || *str == '-') {
    if (!check)
      check = 1;
    else
      return (0);
    if (*str == '-')
      sng *= -1;
    str++;
  }
  while (*str >= '0' && *str <= '9') {
    res = (*str - 48) + (res * 10);
    str++;
  }
  return (res * sng);
}
