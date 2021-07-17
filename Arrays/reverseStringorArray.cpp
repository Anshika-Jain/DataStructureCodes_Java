string reverseWord(string str){
    
  int len = str.length();
  int start = 0; 
  int end = len - 1;
  while(start<end){
      char temp = str[start];
      str[start] = str[end];
      str[end] = temp;
      
      start++;
      end--;
  }
  return str;
}
