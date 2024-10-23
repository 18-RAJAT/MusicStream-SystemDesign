#include "PaymentService.h"
#include <bits/stdc++.h>
using namespace std;

// Process payment through Stripe
bool PaymentService::processStripePayment(const string& userID, double amount)
{
    cout<<"Processing Stripe payment for user: "<<userID<<endl;
    cout<<"Stripe Payment of $"<<amount<<" was successful!"<<endl;
    return true;
}
// Process payment through PayPal
bool PaymentService::processPayPalPayment(const string& userID, double amount)
{
    cout<<"Processing PayPal payment for user: "<<userID<<endl;
    cout<<"PayPal Payment of $"<<amount<<" was successful!"<<endl;
    return true;
}