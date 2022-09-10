// #include <stdio.h>

//--defintions---------------------------
//typedef unsigned char bool;   // not currently used

const char class_array[6][50] = {
   "Swimmer",        //sd
   "Mechanic",       //si
   "Bouncer",        //sc
   "Brain Surgeon",  //di
   "Magician",       //dc
   "Lawyer"          //ic
};

struct character_info {
   char  character_name[50];
   int  character_class;
   short  strength;
   short  dexterity;
   short  intelligence;
   short  charisma;

} user;

//--custom-functions---------------------
void ask_character_name() {

   printf("Please type your character name: ");
   fgets(user.character_name, sizeof(user.character_name), stdin);

   printf("Your name is: ");
   printf("%s\n", user.character_name);
   return;
}

void generate_stats() {

   char temp[50];
   
   printf("Press ENTER to roll for your Stength Stat...");
   fgets(temp, sizeof(temp), stdin);
   user.strength = rand() % 20 + 1;
   printf("Your Strength is: %d\n\n", user.strength);

   printf("Press ENTER to roll for your Dexterity Stat...");
   fgets(temp, sizeof(temp), stdin);
   user.dexterity = rand() % 20 + 1;
   printf("Your Dexterity is: %d\n\n", user.dexterity);

   printf("Press ENTER to roll for your Intelligence Stat...");
   fgets(temp, sizeof(temp), stdin);
   user.intelligence = rand() % 20 + 1;
   printf("Your Intelligence is: %d\n\n", user.intelligence);

   printf("Press ENTER to roll for your Charisma Stat...");
   fgets(temp, sizeof(temp), stdin);
   user.charisma = rand() % 20 + 1;
   printf("Your Charisma is: %d\n\n", user.charisma);

   return;
}

void choose_class() {

   printf("CLASS SELECTION...\n\n");

   printf("1: %s (best for high strength and dexterity)\n", class_array[0]);
   printf("2: %s (best for high strength and intelligence)\n", class_array[1]);
   printf("3: %s (best for high strength and charisma)\n", class_array[2]);
   printf("4: %s (best for high dexterity and intelligence)\n", class_array[3]);
   printf("5: %s (best for high dexterity and charisma)\n", class_array[4]);
   printf("6: %s (best for high intelligence and charisma)\n", class_array[5]);



   printf("Enter the number of the class you want: ");
   scanf("%d", &user.character_class);

   user.character_class = user.character_class - 1;

   printf("\nYou are now a %s\nPrepare for an adventure!\n\n", class_array[user.character_class]);

   return;

}

void create_character() {

   ask_character_name();
   generate_stats();
   choose_class();

   return;
}