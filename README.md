# Strict Instructions on Uploading your solutions:
* **You Must Follow the File structure Provided**
*  Upload the Classes code in main.h
*  Upload the main logic in main.hpp

*Due Date: Friday 10th of November, end of day*<br>

# Homework Exercise 1: Implementing additional Monsters<br>

**Objective:** *Extend your knowledge of inheritance and polymorphism by implementing specific "Monster" derivatives with unique behaviors.*<br>

1. **Dragon Class:**<br>
• Create a "Dragon" class that inherits from the "Monster" class.<br>
• The constructor should only take the name parameter and call the base class constructor with initial values for health, strength, and defense ("200", "40", "15" respectively).<br>
• Override the "performAction" method to print out the dragon’s unique action: breathing fire, and return the damage based on the dragon's strength.<br>

3. **Goblin Class:**<br>
• Create a "Goblin" class that inherits from the "Monster" class.<br>
• The constructor should only take the name parameter and call the base class constructor with initial values for health, strength, and defense ("50", "5", "0" respectively).<br>
• Override the "performAction" method to allow the goblin to attempt to flee if its health is below "20". If fleeing, print a message and return "0" damage. Otherwise, print a message indicating a club swing and return the damage based on the goblin’s strength.<br>

3. **Ogre Class:**<br>
• Create an "Ogre" class that inherits from the "Monster" class.<br>
• The constructor should only take the name parameter and call the base class constructor with initial values for health, strength, and defense ("100", "20", "10" respectively).<br>
• Override the "performAction" method to print out the ogre’s unique action: throwing a boulder, and return the damage based on the ogre’s strength.<br>

*Additional Remarks:*<br>

• Pay attention to the reuse of the "Monster" class constructor for initializing member variables in derived classes.<br>
• Consider how overriding the "performAction" method allows each monster to exhibit unique behavior despite being instantiated as the same base type ("Monster").<br>

# Homework Exercise 2: Implementing the Mage Class<br>

**Objective:** *Build on your understanding of class inheritance and virtual functions by creating a "Mage" class derived from "PlayerCharacter".*<br>

1. **Mage Class:**<br>
• Develop a "Mage" class that is a subclass of the "PlayerCharacter".<br>
• The constructor should initialize the "Mage" with a name, health, strength (used as a magic power source), and defense.<br>
• Override the "printOptions" method to display the Mage’s unique combat options: Fireball, Magic Shield, and Heal.<br>
• Override the "performAction" method to execute an action based on the input action index:<br>
(a) If "1" is chosen, the Mage casts a Fireball, a powerful spell that deals damage equal to ten times the Mage’s strength.<br>
(b) If "2" is chosen, the Mage casts a Magic Shield, which increases their defense by "20". This action does not deal damage.<br>
(c) If "3" is chosen, the Mage performs a Heal, restoring "30" points to their health. This action does not deal damage.<br>
(d) Any other input should be considered invalid and output an error message without performing any action.<br>

**Additional Remarks:**<br>

• Reflect on the use of private methods within the class to perform actions, which keeps the action implementations encapsulated within the Mage class.<br>
• Consider the implications of using strength as a measure for magical ability and how this might affect the design of your character classes.<br>

# Bonus Exercise: Advanced Mage Class Mechanics

The BattleMage is an advanced practitioner of magic, capable of powerful offensive and defensive spells. Unlike a regular Mage, a BattleMage must manage a mana resource, which depletes with each spell and regenerates over time. Additionally, some spells have cooldown periods to prevent them from being used consecutively without pause.<br>

**Objective:** Enhance your knowledge of class inheritance, encapsulation, and polymorphism by developing a "BattleMage" class derived from the "Mage" class, which incorporates mana management and cooldowns for casting spells.<br>

1. **BattleMage Class:**<br>
• Create a "BattleMage" class that inherits from the "Mage" class.<br>
• The constructor should initialize the ‘BattleMage‘ with a name, health, magic power, defense, and a new attribute, double mana.<br>
• Implement the void regenerateMana() and void updateCooldowns() private methods to handle mana regeneration and spell cooldowns at the beginning of each action. the regenerateMana function
should increase the mana by a specific amount (say 20) and the updateCooldowns function should decrease all cooldowns by 1;<br>
• Override the "printOptions" method to display the BattleMage's combat options, which include the cost and cooldown for each spell.<br>
• Override the "performAction" method to execute an action based on the input action index and manage the cooldowns and mana costs:<br>
  (a) If "1" is chosen, the BattleMage attempts to cast a Fireball spell, which has a mana cost and a cooldown period before it can be used again.<br>
  (b) If "2" is chosen, the BattleMage casts a Magic Shield, which has a mana cost but no cooldown.<br>
  (c) If "3" is chosen, the BattleMage performs a Heal spell, which has a higher mana cost and a cooldown period.<br>
  (d) Invalid inputs should prompt an error message without performing any action.<br>
• Override the "fireball", "magicShield", and "heal" methods to include checks for sufficient mana and to implement cooldowns where appropriate.<br>

**Additional Remarks:**<br>

• Reflect on the strategy behind mana and cooldown management. How do these new gameplay mechanics influence the decisions made during combat?<br>
• Consider how the introduction of mana as a resource and cooldowns as a limitation create a more dynamic and challenging combat experience.<br>
