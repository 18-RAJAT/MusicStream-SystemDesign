#include<bits/stdc++.h>
using namespace std;
#include"MusicService.h"
int main()
{
    MusicService musicService;
    cout<<"Retrieving Music Catalog..."<<endl;
    vector<string> musicCatalog=musicService.getMusicCatalog();
    if(!musicCatalog.empty())
    {
        cout<<"Music Catalog retrieved successfully!"<<endl;
        for(const auto&song:musicCatalog)
        {
            cout<<" - "<<song<<endl;
        }
    }
    else
    {
        cout<<"Music Catalog is empty!"<<endl;
    }
    string playlistName="MyPlaylist",songToAdd="Song A";
    cout<<"\nAdding "<<songToAdd<<" to playlist: "<<playlistName<<endl;
    if(musicService.addSongToPlaylist(playlistName,songToAdd))
    {
        cout<<songToAdd<<" added to "<<playlistName<<" successfully!"<<endl;
    }
    else
    {
        cout<<"Failed to add "<<songToAdd<<" to "<<playlistName<<endl;
    }
    cout<<"\nRetrieving playlist: "<<playlistName<<endl;
    vector<string> playlist=musicService.getPlaylist(playlistName);
    if(!playlist.empty())
    {
        cout<<"Playlist retrieved successfully!"<<endl;
        for(const auto&song:playlist)
        {
            cout<<" - "<<song<<endl;
        }
    }
    else
    {
        cout<<"Playlist is empty or doesn't exist!"<<endl;
    }
    cout<<"\nGetting song recommendations..."<<endl;
    vector<string> recommendations=musicService.getRecommendations();
    if(!recommendations.empty())
    {
        cout<<"Recommendations retrieved successfully!"<<endl;
        for(const auto&song:recommendations)
        {
            cout<<" - "<<song<<endl;
        }
    }
    else
    {
        cout<<"No recommendations available!"<<endl;
    }
    return 0;
}