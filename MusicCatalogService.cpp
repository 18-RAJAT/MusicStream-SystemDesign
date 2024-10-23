
#include "MusicService.h"
#include<bits/stdc++.h>
using namespace std;

// Example of extending services
void displayCatalog(MusicService& service)
{
    vector<string> catalog=service.getMusicCatalog();
    cout<<"Music Catalog:" <<endl;
    for(const auto& song:catalog)
    {
        cout<<" - "<<song<<endl;
    }
}