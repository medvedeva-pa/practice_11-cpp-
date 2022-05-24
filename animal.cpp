
#include <iostream>
using namespace std;
class Animal //1

{
public:
    string name;
    string feature;
    string sound;
    Animal(string name, string feature = "", string sound = "")
    {
        this->name=name;
        this->feature=feature;
        this->sound=sound;
    };
    Animal& get_sound (string sound)
    {
        sound;
    }
    Animal& get_action(string feature)
    {
        feature;
    }

};

class Farm_Animal: public Animal //2
{
public:
    string resource;
    Farm_Animal(string name,string feature,string sound,string resource): Animal(name,feature,sound)
    {
        this->resource= resource;
    }
    Farm_Animal& get_source(string res)
    {
        int find = false;
        for (int i = 0; i < resource.size(); i++)
        {
            if(res == resource[i]) find++;
        }
        if(find) cout << "Got "<< res << " from "<< name << endl;
        else cout<< name << " no has " << res<< endl;
    }
};

class Cow: public Farm_Animal //3
{
public:
    Cow(string name,string feature,string sound,string resource): Farm_Animal(name,feature,sound, resource){

    };
    Cow& get_action(string object)
    {
        cout << name <<' '<< feature<< ' '<< object << endl;
    }
};
class Pig: public Farm_Animal
{
public:
    Pig(string name,string feature,string sound,string resource): Farm_Animal(name,feature,sound, resource){

    };
    Pig& get_action(string object)
    {
        cout << name<< ' '<< feature<< ' '<< object << endl;
    }
};
class Goat: public Farm_Animal
{
public:
    Goat(string name,string feature,string sound, string resource): Farm_Animal(name,feature,sound, resource){

    };
    Goat& get_action(string object)
    {
        cout << name << ' ' << feature<< ' ' << object << endl;
    }
};
class Sheep: public Farm_Animal
{
public:
    Sheep(string name,string feature,string sound, string resource): Farm_Animal(name,feature,sound, resource){

    };
    Sheep& get_action(string object)
    {
        cout << name << ' ' << feature<< ' '<< object << endl;
    }
};

class Fox : public Animal //4
        {
public:
    Fox(string _name, string _feature, string _sound) : Animal(_name){
        feature = _feature;
        sound = _sound;
    };
    void get_action(string object) {
        cout << name << " jumped at " << object << endl;
    }
};

class Bear : public Animal {
public:
    Bear(string _name, string _feature, string _sound) : Animal(_name) {
        feature = _feature;
        sound = _sound;
    };
    void get_action(string object) {
        cout << name << " sleeping " << object << endl;
    }
};

class Wolf : public Animal {
public:
    Wolf(string _name, string _feature, string _sound) : Animal(_name) {
        feature = _feature;
        sound = _sound;
    };
    void get_action(string object) {
        cout << name << "looking for:" << object << endl;
    }
};

class Crocodile : public Animal {
public:
    Crocodile(string _name, string _feature, string _sound) : Animal(_name) {
        feature = _feature;
        sound = _sound;
    };
    void get_action(string object) {
        cout << name << "chilling" << object << endl;
    }
};
int main() {
    Fox foxy("1", "2", "3");
    cout  << ' ' << foxy.get_sound() << ' '<< foxy.name;
    Crocodile c("edawdwa", "dsadad", "sheeeesh");
    cout << c.name << ' ' << c.feature;

    return 0;
}