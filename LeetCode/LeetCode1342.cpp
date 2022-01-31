int numberOfSteps(int num) {
    if (num == 0) return 0;
    else if (num & 1) {
        return numberOfSteps(num - 1) + 1;
    }
    else {
        return numberOfSteps(num / 2) + 1;
    }
}