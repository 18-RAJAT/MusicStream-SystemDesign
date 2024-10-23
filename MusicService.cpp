#include "MusicService.h"
#include<bits/stdc++.h>
using namespace std;

// Retrieve the entire music catalog
vector<string> MusicService::getMusicCatalog()
{
    return musicCatalog;
}

// Add a song to a user's playlist
bool MusicService::addSongToPlaylist(const string& playlistName, const string& song)
{
    if(find(musicCatalog.begin(),musicCatalog.end(),song)!=musicCatalog.end())
    {
        playlist.push_back(song);
        return true;
    }
    return false;
}

vector<string> MusicService::getPlaylist(const string& playlistName)
{
    //current playlist
    return playlist;
}

// Get personalized song recommendations
vector<string> MusicService::getRecommendations()
{
    return recommendations;
}