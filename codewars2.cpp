bool zero_fuel(uint32_t distance_to_pump, uint32_t mpg, uint32_t fuel_left)
{
  // TODO
  if(mpg * fuel_left >= distance_to_pump){
    return true;
  }else
    return false;
}