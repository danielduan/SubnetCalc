﻿

//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#include "pch.h"
#include "MainPage.xaml.h"




void ::SubnetCalc::MainPage::InitializeComponent()
{
    if (_contentLoaded)
        return;

    _contentLoaded = true;

    // Call LoadComponent on ms-appx:///MainPage.xaml
    ::Windows::UI::Xaml::Application::LoadComponent(this, ref new ::Windows::Foundation::Uri(L"ms-appx:///MainPage.xaml"), ::Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation::Application);

    // Get the TextBox named 'textboxIP1'
    textboxIP1 = safe_cast<::Windows::UI::Xaml::Controls::TextBox^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"textboxIP1"));
    // Get the TextBox named 'textboxIP2'
    textboxIP2 = safe_cast<::Windows::UI::Xaml::Controls::TextBox^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"textboxIP2"));
    // Get the TextBox named 'textboxIP3'
    textboxIP3 = safe_cast<::Windows::UI::Xaml::Controls::TextBox^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"textboxIP3"));
    // Get the TextBox named 'textboxIP4'
    textboxIP4 = safe_cast<::Windows::UI::Xaml::Controls::TextBox^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"textboxIP4"));
    // Get the TextBox named 'textboxSubnet1'
    textboxSubnet1 = safe_cast<::Windows::UI::Xaml::Controls::TextBox^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"textboxSubnet1"));
    // Get the TextBox named 'textboxSubnet2'
    textboxSubnet2 = safe_cast<::Windows::UI::Xaml::Controls::TextBox^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"textboxSubnet2"));
    // Get the TextBox named 'textboxSubnet3'
    textboxSubnet3 = safe_cast<::Windows::UI::Xaml::Controls::TextBox^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"textboxSubnet3"));
    // Get the TextBox named 'textboxSubnet4'
    textboxSubnet4 = safe_cast<::Windows::UI::Xaml::Controls::TextBox^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"textboxSubnet4"));
    // Get the Button named 'buttonCalculate'
    buttonCalculate = safe_cast<::Windows::UI::Xaml::Controls::Button^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"buttonCalculate"));
    // Get the TextBlock named 'textblockOutput'
    textblockOutput = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"textblockOutput"));
    // Get the TextBlock named 'textblockOutput1'
    textblockOutput1 = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"textblockOutput1"));
}

void ::SubnetCalc::MainPage::Connect(int connectionId, Platform::Object^ target)
{
    switch (connectionId)
    {
    case 1:
        (safe_cast<::Windows::UI::Xaml::Controls::Primitives::ButtonBase^>(target))->Click +=
            ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::SubnetCalc::MainPage::*)(Platform::Object^, Windows::UI::Xaml::RoutedEventArgs^))&MainPage::buttonCalculate_Click);
        break;
    }
    (void)connectionId; // Unused parameter
    (void)target; // Unused parameter
    _contentLoaded = true;
}

