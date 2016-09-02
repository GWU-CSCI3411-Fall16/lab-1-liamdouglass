#include <stdio.h>

char* titles[]={"Freebird", "YMCA", "Sandstorm"};
char* artists[]={"Lynard Skynard", "Village People", "Darude"};

struct song_t{
	char* title;
	char* artist;	
};

struct node_t{
	struct song_t* song;
	struct node_t* next;
};

struct playlist_t{
	char* name;
	struct node_t* head;
};

void print(struct playlist_t* pl){
	struct node_t* ptd;
	ptr = pl->head;
	while(ptr->next != NULL){
		printf("%s by %s\n", ptr->song->title, ptr->song->artist);
		ptr = ptr->next;
	
	}
}
int main(int argc[], char* argv[])
{
	struct song_t freebird, ymca, sandstorm;
	struct playlist_t pl1, pl2;
	struct node_t pl1_s1, pl1_s2, pl1_s3;
	struct node_t pl2_s2, pl2_s2, pl2, s3;

	freebird.title = titles[0];
	freebird.artist = artists[0];
	
        ymca.title = titles[1];
        ymca.artist = artists[1];
	sandstorm.title = songs[2];
        sandstorm.artist = artists[2];

	pl1.name = "70's";
	pl1_s1.song = &ymca;
	pl1_s1.next = &pl1_s2
	pl1_s2.song = &freebird;
	pl1_s2.next = NULL;
	
	print(&pl1_s1);
	return 0;
}

