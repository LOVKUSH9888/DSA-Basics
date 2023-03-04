//Flag variable is used as a signal in programming to let the program know that a certain condition has met. It usually acts as a boolean variable indicating a condition to be either true or false

bool flag = false;
for (int i = 0; i < n; i++) {
  if (/* some condition */) {
    flag = true;
    break;  // exit the loop early since the condition has been met
  }
}

if (flag) {
  // do something if the condition has been met
} else {
  // do something else if the condition has not been met
}
