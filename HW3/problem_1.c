#include <stdio.h>

// Different stages of the gate system
typedef enum {
    STANDBY,
    CARD_TAPPED,
    GATE_OPEN,
    GATE_LOCKED
} GateState;

// Possible user actions
typedef enum {
    ARRIVES,
    VALID,
    INVALID,
    WALKED_THROUGH,
    TRY_AGAIN,
    EXIT
} Action;

GateState updateState(GateState state, Action act) {
    switch (state) {
        case STANDBY:
            if (act == ARRIVES) {
                printf("Person showed up. Waiting for card tap...\n");
                return CARD_TAPPED;
            }
            break;
        case CARD_TAPPED:
            if (act == VALID) {
                printf("Card is valid. Gate opening.\n");
                return GATE_OPEN;
            } else if (act == INVALID) {
                printf("Invalid card. Try again or exit.\n");
                return GATE_LOCKED;
            }
            break;
        case GATE_OPEN:
            if (act == WALKED_THROUGH) {
                printf("Person passed. Gate closing.\n");
                return STANDBY;
            }
            break;
        case GATE_LOCKED:
            if (act == TRY_AGAIN) {
                printf("Trying again. Please tap card.\n");
                return CARD_TAPPED;
            } else if (act == EXIT) {
                printf("User left. Back to standby.\n");
                return STANDBY;
            }
            break;
    }
    printf("Error.\n");
    return state;
}

int main() {
    GateState currentState = STANDBY;
    int choice;

    printf("Subway Gate System Simulation\n");
    printf("Pick an action:\n");
    printf("1 - Person Arrives\n");
    printf("2 - Valid Card\n");
    printf("3 - Invalid Card\n");
    printf("4 - Walked Through\n");
    printf("5 - Try Again\n");
    printf("6 - Exit\n");

    while (1) {
        printf("\nEnter your choice (or 0 to exit): ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Shutting down simulation.\n");
            break;
        }

        Action action;
        switch (choice) {
            case 1: action = ARRIVES; break;
            case 2: action = VALID; break;
            case 3: action = INVALID; break;
            case 4: action = WALKED_THROUGH; break;
            case 5: action = TRY_AGAIN; break;
            case 6: action = GIVE_UP; break;
            default:
                printf("Not a valid action. Try again.\n");
                continue;
        }

        currentState = updateState(currentState, action);
    }

    return 0;
}
