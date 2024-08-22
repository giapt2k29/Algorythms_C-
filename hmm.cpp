#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CALLS 100000
#define MAX_QUERY_LENGTH 50

// Structure to store call information
struct Call {
    char from_number[11];
    char to_number[11];
    char date[11];
    char from_time[9];
    char to_time[9];
};

// Function prototypes
int is_valid_phone_number(const char *number);
int parse_call(char *line, struct Call *call);
int check_phone_number(struct Call *calls, int num_calls);
int number_calls_from(struct Call *calls, int num_calls, const char *phone_number);
int number_total_calls(int num_calls);
int count_time_calls_from(struct Call *calls, int num_calls, const char *phone_number);

int main() {
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    struct Call calls[MAX_CALLS];
    int num_calls = 0;
    char query[MAX_QUERY_LENGTH];

    // Read calls data
    while (fgets(query, MAX_QUERY_LENGTH, stdin) && query[0] != '#') {
        parse_call(query, &calls[num_calls++]);
    }

    // Process queries
    while (fgets(query, MAX_QUERY_LENGTH, stdin) && query[0] != '#') {
        if (query[0] == '?') {
            if (strncmp(query, "?check_phone_number", 19) == 0) {
                printf("%d\n", check_phone_number(calls, num_calls));
            } else if (strncmp(query, "?number_calls_from", 18) == 0) {
                char phone_number[11];
                sscanf(query, "?number_calls_from %s", phone_number);
                printf("%d\n", number_calls_from(calls, num_calls, phone_number));
            } else if (strncmp(query, "?number_total_calls", 19) == 0) {
                printf("%d\n", number_total_calls(num_calls));
            } else if (strncmp(query, "?count_time_calls_from", 22) == 0) {
                char phone_number[11];
                sscanf(query, "?count_time_calls_from %s", phone_number);
                printf("%d\n", count_time_calls_from(calls, num_calls, phone_number));
            }
        }
    }

    return 0;
}

// Check if a phone number is valid
int is_valid_phone_number(const char *number) {
    for (int i = 0; i < 10; i++) {
        if (number[i] < '0' || number[i] > '9') {
            return 0; // Not a digit
        }
    }
    return 1;
}

// Parse call information from a line
int parse_call(char *line, struct Call *call) {
    return sscanf(line, "call %10s %10s %10s %8s %8s", call->from_number, call->to_number, call->date, call->from_time, call->to_time) == 5;
}

// Check if all phone numbers are valid
int check_phone_number(struct Call *calls, int num_calls) {
    for (int i = 0; i < num_calls; i++) {
        if (!is_valid_phone_number(calls[i].from_number) || !is_valid_phone_number(calls[i].to_number)) {
            return 0; // At least one phone number is invalid
        }
    }
    return 1; // All phone numbers are valid
}

// Count the number of calls made from a specific phone number
int number_calls_from(struct Call *calls, int num_calls, const char *phone_number) {
    int count = 0;
    for (int i = 0; i < num_calls; i++) {
        if (strcmp(calls[i].from_number, phone_number) == 0) {
            count++;
        }
    }
    return count;
}

// Count the total number of calls
int number_total_calls(int num_calls) {
    return num_calls;
}

// Count the total time duration of calls made from a specific phone number
int count_time_calls_from(struct Call *calls, int num_calls, const char *phone_number) {
    int total_time = 0;
    for (int i = 0; i < num_calls; i++) {
        if (strcmp(calls[i].from_number, phone_number) == 0) {
            int from_hour, from_minute, from_second;
            int to_hour, to_minute, to_second;
            sscanf(calls[i].from_time, "%d:%d:%d", &from_hour, &from_minute, &from_second);
            sscanf(calls[i].to_time, "%d:%d:%d", &to_hour, &to_minute, &to_second);
            total_time += (to_hour - from_hour) * 3600 + (to_minute - from_minute) * 60 + (to_second - from_second);
        }
    }
    return total_time;
}
