#ifndef PAYMENT_SERVICE_H
#define PAYMENT_SERVICE_H
#include <bits/stdc++.h>
using namespace std;

class PaymentService
{
public:
    // payment through Stripe
    bool processStripePayment(const std::string& userID, double amount);
    // payment through PayPal
    bool processPayPalPayment(const std::string& userID, double amount);
};
#endif