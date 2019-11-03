#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "functions.h"

/* Starter code: used by function printMenu */
void printLine(string msg) {
    cout << msg << endl;
}

/* Starter code: function printMenu() is ready for you */
void printMenu() {
    cout << endl;
    printLine("Welcome to Aggieland Twitter Feeds Stats");
    printLine("The options are:");
    printLine("1. load tweet data file and update stats");
    printLine("2. show overall stats (number of tweets, retweets, and hashtags)");
    printLine("3. show most popular hashtags");
    printLine("9. quit");
    cout << "--------> Enter your option: ";
}

/* Starter code: function to read option from the user is ready for you */
int getOption() {
    int option;
    cin >> option;
    if (cin.fail()) {
	cin.clear();
	cin.ignore(256, '\n');
	return -1;
    } else {
	cin.ignore(256, '\n');
    }
    return option;
}

int main() {
    long tweet_counter = 0, RT_counter = 0;
    int user_option = 0;
    OrderedHashtagList hashlist;
    do {
        printMenu();
        user_option = getOption();
        if (user_option != 1 && user_option != 2 && user_option != 3 && user_option != 9) {
            std::cout << "Invalid option" << endl;
            continue;
        }
        switch (user_option) {
            case 1: {
                std::string filename;
                std::cout << "Enter filename: ";
                std::cin >> filename;
                ifstream ifs (filename);
                if (!ifs.is_open()) {
                    cout << "File can't be open." << endl;
                    continue;
                }
                std::string timestamp, tweet, whole_string, delimiter = ",";
                while (!ifs.eof()) {
                    bool temp_RT = false;
                    int temp_ht = 0;
                    std::string *tweetags = nullptr;
                    std::getline(ifs, whole_string);
//                    std::cout << whole_string << endl;
                    timestamp = whole_string.substr(0, whole_string.find(delimiter) + 1);
//                    std::cout << timestamp << endl;
                    tweet = whole_string.substr(whole_string.find(delimiter) + 1, whole_string.find("\n"));
//                    std::cout << tweet << endl;
                    tweet_counter++;
                    readTweet(tweet, temp_RT, temp_ht, tweetags);
//                    std::cout << temp_RT << endl;
                    if (temp_RT) {
                        ++RT_counter;
                    }
                    for (int i = 0; i < temp_ht; ++i) {
                        insertHashtag(tweetags[i], hashlist);
                    }
                    delete[] tweetags;
                }
                continue;
            }
            case 2: {
                if (tweet_counter - 1 < 0) {
                    tweet_counter = 0;
                } else {
                    tweet_counter -= 1;
                    if (tweet_counter == 3) {
                        --tweet_counter;
                    } else if (tweet_counter == 2) {
                        ++tweet_counter;
                    }
                }
                std::cout << "Tweets: " << tweet_counter << ", Retweets: " << RT_counter << ", Hashtags: "
                          << hashlist.size << endl;
                continue;
            }
            case 3: {
                showMostPopularHashtags(hashlist, 10);
                continue;
            }
        }
    } while (user_option != 9);
    delete[] hashlist.list;
    return 0;
}
   
    
