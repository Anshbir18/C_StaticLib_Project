#include <stdio.h>
#include <string.h>

int areAnagrams(char *str1, char *str2) {
    int count1[26] = {0};
    int count2[26] = {0};

    int length1 = strlen(str1);
    int length2 = strlen(str2);

    if (length1 != length2) {
        return 0;
    }

    for (int i = 0; i < length1; i++) {
        count1[str1[i] - 'a']++;
        count2[str2[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            return 0;
        }
    }

    return 1;
}
