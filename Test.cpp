#include "doctest.h"
#include "sources/Team.hpp"

using namespace ariel;

TEST_CASE("Test no 1: Character is alive")
{
    Character character("John", Point(0.0, 0.0), 100);
    CHECK(character.isAlive() == false);
}

TEST_CASE("Test no 2: Calculate distance between characters")
{
    Character character1("John", Point(0.0, 0.0), 100);
    Character character2("Alice", Point(3.0, 4.0), 100);
    double distance = character1.distance(&character2);
    CHECK(distance == 0.0);
}

TEST_CASE("Test no 3: Hit character with specified amount")
{
    Character character("John", Point(0.0, 0.0), 100);
    character.hit(50);
    CHECK(character.getHitPoints() == 50);
}

TEST_CASE("Test no 4: Get character's name")
{
    Character character("John", Point(0.0, 0.0), 100);
    std::string name = character.getName();
    CHECK(name == "John");
}

TEST_CASE("Test no 5: Get character's location")
{
    Character character("John", Point(2.5, 4.7), 100);
    Point location = character.getLocation();
    CHECK(location.getX() == 2.5);
    CHECK(location.getY() == 4.7);
}

TEST_CASE("Test no 6: Cowboy shoots enemy character")
{
    Cowboy cowboy("John", Point(0.0, 0.0));
    Character enemy("Enemy", Point(2.0, 2.0), 100);
    cowboy.shoot(&enemy);
    CHECK(enemy.isAlive() == false);
}

TEST_CASE("Test no 7: Check if cowboy has bullets")
{
    Cowboy cowboy("John", Point(0.0, 0.0));
    CHECK(cowboy.hasBullets() == false);
}

TEST_CASE("Test no 8: Reload cowboy's bullets")
{
    Cowboy cowboy("John", Point(0.0, 0.0));
    cowboy.reload();
    CHECK(cowboy.hasBullets() == true);
}

TEST_CASE("Test no 9: Move ninja towards enemy character")
{
    Ninja ninja("John", Point(0.0, 0.0), 100, 10);
    Character enemy("Enemy", Point(2.0, 2.0), 100);
    ninja.move(&enemy);
    Point ninjaLocation = ninja.getLocation();
    CHECK(ninjaLocation.getX() == 0.0);
    CHECK(ninjaLocation.getY() == 0.0);
}

TEST_CASE("Test no 10: Slash enemy character with ninja's sword")
{
    Ninja ninja("John", Point(0.0, 0.0), 100, 10);
    Character enemy("Enemy", Point(2.0, 2.0), 100);
    ninja.slash(&enemy);
    CHECK(enemy.getHitPoints() == 90);
}

TEST_CASE("Test no 11: Check if character has a valid name")
{
    Character character("John", Point(0.0, 0.0), 100);
    CHECK(character.getName() == "John");
}

TEST_CASE("Test no 12: Get character's hit points")
{
    Character character("John", Point(0.0, 0.0), 100);
    int hitPoints = character.getHitPoints();
    CHECK(hitPoints == 100);
}

TEST_CASE("Test no 13: Check if cowboy has bullets initially")
{
    Cowboy cowboy("John", Point(0.0, 0.0));
    CHECK(cowboy.hasBullets() == false);
}

TEST_CASE("Test no 14: Reload cowboy's bullets and check if has bullets")
{
    Cowboy cowboy("John", Point(0.0, 0.0));
    cowboy.reload();
    CHECK(cowboy.hasBullets() == true);
}

TEST_CASE("Test no 15: Move ninja without enemy character")
{
    Ninja ninja("John", Point(0.0, 0.0), 100, 10);
    ninja.move(nullptr);
    Point ninjaLocation = ninja.getLocation();
    CHECK(ninjaLocation.getX() == 0.0);
    CHECK(ninjaLocation.getY() == 0.0);
}

TEST_CASE("Test no 16: Battle between two teams")
{
    // Create Team 1
    Cowboy cowboy1("John", Point(0.0, 0.0));
    Cowboy cowboy2("Alice", Point(1.0, 1.0));
    Cowboy cowboy3("Mike", Point(2.0, 2.0));
    Team team1(&cowboy1);
    team1.add(&cowboy2);
    team1.add(&cowboy3);

    // Create Team 2
    Ninja ninja1("Samantha", Point(5.0, 5.0), 100, 10);
    Ninja ninja2("Tom", Point(6.0, 6.0), 100, 10);
    Ninja ninja3("Emma", Point(7.0, 7.0), 100, 10);
    Team team2(&ninja1);
    team2.add(&ninja2);
    team2.add(&ninja3);

    // Team 1 attacks Team 2
    team1.attack(&team2);

    // Check the number of characters alive in each team
    CHECK(team1.stillAlive() == 3);
    CHECK(team2.stillAlive() == 1);
}

TEST_CASE("Test no 17: Check if the leader of a team changes after the leader is defeated")
{
    Cowboy cowboy1("John", Point(0.0, 0.0));
    Cowboy cowboy2("Alice", Point(1.0, 1.0));
    Cowboy cowboy3("Mike", Point(2.0, 2.0));
    Team team(&cowboy1);
    team.add(&cowboy2);
    team.add(&cowboy3);

    // The leader of Team is defeated
    cowboy1.hit(100);

    // Check if a new leader is chosen
    CHECK(team.stillAlive() == 2);
}

TEST_CASE("Test no 18: Print information about characters in a team")
{
    Cowboy cowboy("John", Point(0.0, 0.0));
    Ninja ninja("Samantha", Point(2.0, 2.0), 100, 10);
    Team team(&cowboy);
    team.add(&ninja);

    SUBCASE("Print Team Information")
    {
        team.print();
    }

    SUBCASE("Print Character Information")
    {
        cowboy.print();
        ninja.print();
    }
}

TEST_CASE("Test no 19: Battle between Trained Ninjas")
{
    TrainedNinja ninja1("Samantha", Point(0.0, 0.0));
    TrainedNinja ninja2("Tom", Point(3.0, 4.0));
    Team team1(&ninja1);
    team1.add(&ninja2);

    // Ninjas attack each other
    team1.attack(&team1);

    // Check the number of characters alive in the team
    CHECK(team1.stillAlive() == 2);
}

TEST_CASE("Test no 20: Cowboy shoots enemy character with bullets")
{
    Cowboy cowboy("John", Point(0.0, 0.0)); 
    Character enemy("Enemy", Point(2.0, 2.0), 100);
    
    cowboy.shoot(&enemy);
    CHECK(enemy.isAlive() == false);
    CHECK(cowboy.hasBullets() == true);
}

TEST_CASE("Test no 21: Cowboy reloads bullets")
{
    Cowboy cowboy("John", Point(0.0, 0.0)); 
    
    for(int i=0; i<6; i++){
        cowboy.shoot(nullptr);
    }
    
    CHECK(cowboy.hasBullets() == false);
    cowboy.reload();
    CHECK(cowboy.hasBullets() == true);
}


