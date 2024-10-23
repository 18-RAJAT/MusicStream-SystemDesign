#ifndef AUTHENTICATION_SERVICE_H
#define AUTHENTICATION_SERVICE_H
#include<bits/stdc++.h>
using namespace std;

class AuthenticationService
{
public:
    // Constructor for the AuthenticationService
    AuthenticationService();
    
    //Authenticate
    bool googleAuth(const string& token);
    bool facebookAuth(const string& token);
    bool emailAuth(const string& email, const string& password);

private:
    bool validateToken(const string& token);
    bool validateEmailCredentials(const string& email, const string& password);
};

#endif // AUTHENTICATION_SERVICE_H