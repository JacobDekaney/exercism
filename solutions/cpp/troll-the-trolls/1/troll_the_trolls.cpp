namespace hellmath {

// TODO: Task 1 - Define an `AccountStatus` enumeration to represent the four
// account types: `troll`, `guest`, `user`, and `mod`.
enum class AccountStatus {
    troll,
    guest,
    user,
    mod
};

// TODO: Task 1 - Define an `Action` enumeration to represent the three
// permission types: `read`, `write`, and `remove`.
enum class Action {
    read,
    write,
    remove
};

// TODO: Task 2 - Implement the `display_post` function, that gets two arguments
// of `AccountStatus` and returns a `bool`. The first argument is the status of
// the poster, the second one is the status of the viewer.
bool display_post (AccountStatus poster, AccountStatus viewer) {
    return !((poster == AccountStatus::troll) && (viewer != AccountStatus::troll));
}

// TODO: Task 3 - Implement the `permission_check` function, that takes an
// `Action` as a first argument and an `AccountStatus` to check against. It
// should return a `bool`.
bool permission_check(Action permission, AccountStatus user) {
    switch (user) {
        case AccountStatus::troll:
        case AccountStatus::user:
            return (permission == Action::read || permission == Action::write);
        case AccountStatus::guest:
            return (permission == Action::read);
        case AccountStatus::mod:
            return (permission == Action::read || permission == Action::write || permission == Action::remove);
        default:
            return false;
    }
}

// TODO: Task 4 - Implement the `valid_player_combination` function that
// checks if two players can join the same game. The function has two parameters
// of type `AccountStatus` and returns a `bool`.
bool valid_player_combination (AccountStatus player1, AccountStatus player2) {
    if (player1 == AccountStatus::guest || player2 == AccountStatus::guest) {
        return false;
    }
    else if ((player1 == AccountStatus::troll) != (player2 == AccountStatus::troll)) {
        return false;
    }
    else {
        return true;
    }
}

// TODO: Task 5 - Implement the `has_priority` function that takes two
// `AccountStatus` arguments and returns `true`, if and only if the first
// account has a strictly higher priority than the second.
bool has_priority (AccountStatus user1, AccountStatus user2) {
    switch(user1) {
        case AccountStatus::mod:
            return user2 != AccountStatus::mod;
        case AccountStatus::user:
            return user2 != AccountStatus::mod && user2 != AccountStatus::user;
        case AccountStatus::guest:
            return user2 == AccountStatus::troll;
        case AccountStatus::troll:
            return false;
        default:
            return false;
    }
}

}  // namespace hellmath
