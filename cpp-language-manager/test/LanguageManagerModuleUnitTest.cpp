#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include <ILanguageManager.hpp>
#include <ModuleLoader.hpp>
#include <catch.hpp>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/**@todo probar si esto es posible, sino va dentro del test:*/
import languageManagerModule = "../lib/LanguageManagerModule";
 
TEST_CASE( "LanguageManager create instance", "[LanguageManager new]" ) 
{
    // Arrange
    ILanguageManager* lm = languageManagerModule.getInstanceAs<ILanguageManager*>();
    
    // Act
    bool isILanguageManager = ( dynamic_cast<ILanguageManager*> (lm) != nullptr );

    // Assert
    REQUIRE( isILanguageManager == true );
}

TEST_CASE( "Correct translation into default language", "[LanguageManager getTranslation]" )
{
    // Arrange
    ILanguageManager* lm = languageManagerModule.getInstanceAs<ILanguageManager*>();
 
    // Act
    string translation = lm->translate("HELLO_WORLD");
        
    // Assert
    REQUIRE( translation == "¡Hola Mundo!" );
}

TEST_CASE( "Correct translation into Spanish", "[LanguageManager getTranslation]" )
{
    // Arrange
    ILanguageManager* lm = languageManagerModule.getInstanceAs<ILanguageManager*>();
 
    // Act
    lm->setLanguage("esAR");
    string translation = lm->translate("HELLO_WORLD");
        
    // Assert
    REQUIRE( translation == "¡Hola Mundo!" );
}

TEST_CASE("Correct translation into Spanish. Another string", "[LanguageManager getTranslation]")
{
    // Arrange
    ILanguageManager* lm = languageManagerModule.getInstanceAs<ILanguageManager*>();
 
    // Act
    lm->setLanguage("esAR");
    string translation = lm->translate("HELLO_TODO");
        
    // Assert
    REQUIRE( translation == "¡Hola Todo!" );
}

TEST_CASE("Correct translation into Spanish. Another string 2", "[LanguageManager getTranslation]")
{
    // Arrange
    ILanguageManager* lm = languageManagerModule.getInstanceAs<ILanguageManager*>();
    

    // Act
    lm->setLanguage("esAR");
    string translation = lm->translate("HELLO_NADA");
        
    // Assert
    REQUIRE( translation == "NULL TRANSLATION OF KEY: HELLO_NADA!" );
}

TEST_CASE( "Correct translation into English", "[LanguageManager getTranslation]" )
{
    // Arrange
    ILanguageManager* lm = languageManagerModule.getInstanceAs<ILanguageManager*>();
 
    // Act
    lm->setLanguage("enUS");
    string translation = lm->translate("HELLO_WORLD");
        
    // Assert
    REQUIRE( translation == "¡Hello World!" );
}

TEST_CASE( "Correct translation into French", "[LanguageManager getTranslation]" )
{
    // Arrange
    ILanguageManager* lm = languageManagerModule.getInstanceAs<ILanguageManager*>();

    // Act
    lm->setLanguage("frFR");
    string translation = lm->translate("HELLO_WORLD");
        
    // Assert
    REQUIRE( translation == "¡Salut monde!" );
}

TEST_CASE( "Correct translation into French with Semicolon", "[LanguageManager getTranslation]" )
{
    // Arrange
    ILanguageManager* lm = languageManagerModule.getInstanceAs<ILanguageManager*>();
    
    // Act
    lm->setLanguage("frFR");
    string translation = lm->translate("HELLO_WORLD1");
        
    // Assert
    REQUIRE( translation == "¡Salut monde!" );
}

/*TEST_CASE( "Setting null language", "[LanguageManager setLanguage]" )
{
    // Arrange
    ILanguageManager* lm = languageManagerModule.getInstanceAs<ILanguageManager*>();
 
    // Act
    lm->setLanguage("rusRUS");
    string translation = lm->translate("HELLO_WORLD");
        
    // Assert
    REQUIRE( translation == "Error opening lang file" );
}*/
