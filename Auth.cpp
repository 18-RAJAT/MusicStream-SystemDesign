#include<bits/stdc++.h>
using namespace std;
#include"AuthenticationService.h"
int main()
{
    AuthenticationService authService;
    string validGoogleToken="validGoogleToken";
    if(authService.googleAuth(validGoogleToken))
    {
        cout<<"Google Authentication with valid token: successful!"<<endl;
    }
    else
    {
        cout<<"Google Authentication with valid token: failed!"<<endl;
    }
    string invalidGoogleToken="invalidGoogleToken";
    if(authService.googleAuth(invalidGoogleToken))
    {
        cout<<"Google Authentication with invalid token: successful!"<<endl;
    }
    else
    {
        cout<<"Google Authentication with invalid token: failed!"<<endl;
    }
    string validFacebookToken="validFacebookToken";
    if(authService.facebookAuth(validFacebookToken))
    {
        cout<<"Facebook Authentication with valid token: successful!"<<endl;
    }
    else
    {
        cout<<"Facebook Authentication with valid token: failed!"<<endl;
    }
    string invalidFacebookToken="invalidFacebookToken";
    if(authService.facebookAuth(invalidFacebookToken))
    {
        cout<<"Facebook Authentication with invalid token: successful!"<<endl;
    }
    else
    {
        cout<<"Facebook Authentication with invalid token: failed!"<<endl;
    }
    string validEmail="valid@example.com",validPassword="correctPassword";
    if(authService.emailAuth(validEmail,validPassword))
    {
        cout<<"Email Authentication with valid credentials: successful!"<<endl;
    }
    else
    {
        cout<<"Email Authentication with valid credentials: failed!"<<endl;
    }
    string invalidEmail="invalid@example.com",invalidPassword="wrongPassword";
    if(authService.emailAuth(invalidEmail,invalidPassword))
    {
        cout<<"Email Authentication with invalid credentials: successful!"<<endl;
    }
    else
    {
        cout<<"Email Authentication with invalid credentials: failed!"<<endl;
    }
    return 0;
}