int rand() {
    /* Seeeeeds */
    int seeds[] = { 8, 8, 7, 9, 23, 74 };

    /* Inc & value */

    static int i = 0;

    return seeds[i++];
}
