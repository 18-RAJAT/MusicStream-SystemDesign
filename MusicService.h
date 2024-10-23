#ifndef MUSIC_SERVICE_H
#define MUSIC_SERVICE_H
#include<bits/stdc++.h>
using namespace std;
class MusicService
{
public:
    vector<string> getMusicCatalog();
    bool addSongToPlaylist(const string&playlistName,const string&song);
    vector<string> getPlaylist(const string&playlistName);
    vector<string> getRecommendations();
private:
    vector<string> musicCatalog={"Song A","Song B","Song C"};
    vector<string> playlist={};
    vector<string> recommendations={"Song D","Song E","Song F"};
};
#endif