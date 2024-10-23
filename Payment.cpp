#include <bits/stdc++.h>
using namespace std;
#include "PaymentService.h"
int main()
{
    PaymentService paymentService;
    string stripeUserID="StripUser1";
    double stripeAmount=50.0;
    if(paymentService.processStripePayment(stripeUserID,stripeAmount))
    {
        cout<<"Stripe Payment was successful!"<<endl;
    }
    else
    {
        cout << "Stripe Payment failed!" << endl;
    }
    string paypalUserID="PaypalUser1";
    double paypalAmount=100.0;
    if(paymentService.processPayPalPayment(paypalUserID,paypalAmount))
    {
        cout<<"PayPal Payment was successful!"<<endl;
    }
    else
    {
        cout<<"PayPal Payment failed!"<<endl;
    }
    return 0;
}