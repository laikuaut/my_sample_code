#include<map>
#include<string>
#include<iostream>
#include<sstream>

class Executor {
public:

    Executor() {
        // ROOT
        NextKeyMap* root = keyMapping.next;
        // 1文字目
        // s
        KeyMap* sKeyMap = new KeyMap(new Param("s", 1));
        root->insert(NextKeyMap::value_type("s", sKeyMap));
        // t
        KeyMap* estKeyMap = new KeyMap(new Param("est", 3));
        root->insert(NextKeyMap::value_type("t", new KeyMap("s", new KeyMap("e", estKeyMap))));
        // es
        KeyMap* esKeyMap = new KeyMap(new Param("es", 2));
        sKeyMap->next = new NextKeyMap();
        sKeyMap->next->insert(NextKeyMap::value_type("e", esKeyMap));
    }

    virtual ~Executor() {}

    void run(std::string& str) const {
        std::string::reverse_iterator rite = str.rbegin();

        const KeyMap* pos = &keyMapping;
        for (; rite != str.rend(); ++rite) {
            std::string key;
            {
                std::stringstream ss;
                ss << *rite;
                key = ss.str();
            }
            NextKeyMap* next_map = pos->next;
            if (next_map != NULL) {
                if (next_map->find(key) == next_map->end()) {
                    std::cerr << "[DEBUG] Not Match " << key << std::endl;
                    break;
                } else {
                    pos = next_map->at(key);
                    std::cerr << "[DEBUG] Match " << key << std::endl;
                }
            }
        }

        std::cout << pos->value->key << " : " << pos->value->len << std::endl;
        str = str.substr(0, str.length() - pos->value->len);
    }

private:

    typedef struct Param {
        std::string key;
        size_t len;

        Param(std::string key, size_t len) : key(key), len(len) {}
    } Param;

    // 前方宣言
    struct KeyMap;
    typedef std::map<std::string, KeyMap*> NextKeyMap;
    typedef struct KeyMap {
        NextKeyMap* next;
        Param* value;

        KeyMap() : value(NULL) {
            next = new NextKeyMap();
        }
        KeyMap(std::string key) : value(NULL) {
            next = new NextKeyMap();
            next->insert(NextKeyMap::value_type(key, new KeyMap()));
        }
        KeyMap(std::string key, KeyMap* keyMap) : value(NULL) {
            next = new NextKeyMap();
            next->insert(NextKeyMap::value_type(key, keyMap));
        }
        KeyMap(Param* value) : value(value) {
             next = NULL;
        }
    } KeyMap;

    KeyMap keyMapping;
};

int main(int argc, char const* argv[])
{
    Executor exe;
    std::string str = "startest";

    std::cout << "[IN] " << str << std::endl;
    exe.run(str);
    std::cout << "[OUT] " << str << std::endl;

    return 0;
}
