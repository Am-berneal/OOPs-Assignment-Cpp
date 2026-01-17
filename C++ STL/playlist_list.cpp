#include<iostream>
#include<list>
using namespace std;

int main(){
    list<string> songs;

    // push_front() and push_back()
    songs.push_back("Song A");
    songs.push_back("Song B");
    songs.push_front("Intro Song");

    // pop_front() and pop_back()
    songs.pop_front(); // removes Intro Song
    songs.pop_back();  // removes Song B

     // Add duplicates
    songs.push_back("Song C");
    songs.push_back("Song A");
    songs.push_back("Song C");

    // remove() all occurrences
    songs.remove("Song C");

    // insert() at specific position
    list<string>::iterator it = songs.begin();
    songs.insert(it, "New Song");
    
    // erase()
    it = songs.begin();
    songs.erase(it); // removes "New Song"

    // Display playlist
    cout << "Playlist songs:\n";
    for (list<string>::iterator itr = songs.begin(); itr != songs.end(); ++itr) {
        cout << *itr << endl;
    }
    return 0;
}