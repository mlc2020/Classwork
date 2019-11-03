#include <iostream>
#include <string>
using namespace std;

#include "functions.h"



/* readTweet
 * Parameters:
 *      line: string containing the tweet information received by the function
 *      isRetweet: reference to bool; function will update it with true if retweet
 *      nb_htags: reference to int; function will update with number of hashtags
 *                in the tweet.
 *      array_of_htags: reference to an array of strings; function will allocate
 *                      the array and store the hashtag in it
 * Return value:
 *      none
 * Functionality:
 *     Processes the string in order to find out hashtags and identify if it is Retweet
 */
void readTweet(string line, bool& isRetweet, int& nb_htags, string*& array_of_htags) {
    size_t i = line.find_first_of("#");
    int capacity = 1;
    array_of_htags = new std::string[capacity];
    while (i != std::string::npos) {
        std::string hashtag;
        size_t max_loop = line.find_first_of(" ", i);
        if (max_loop == std::string::npos) {
            max_loop = line.size();
        }
        for (size_t j = i; j < max_loop; ++j) {
            hashtag += std::tolower(line.at(j));
        }
        if (nb_htags >= capacity) {
            capacity *= 2;
            auto *temp = new std::string[capacity];
            for (int j = 0; j < nb_htags; ++j) {
                temp[j] = array_of_htags[j];
            }
            delete[] array_of_htags;
            array_of_htags = temp;
        }
        array_of_htags[nb_htags] = hashtag;
        ++nb_htags;
        i = line.find_first_of("#", max_loop);
    }
//    std::cout << line << endl;
//    isRetweet = false;
//    std::cout << line.find_first_of("RT #") << endl;
    if (line.find_first_of("RT ") == 0) {
        isRetweet = true;
    } else if (line.find_first_of("R") == 1) {
        isRetweet = true;
    }
}

/* insertHashtag
 * Parameters:
 *      ht: string
 *      hashlist: reference to OrderedHashtagList struct
 * Return value:
 *      true if insertion succeeds, false if memory allocation
 *      fails.
 * Functionality:
 *      See prompt for specification and examples.
 */

bool insertHashtag(string ht, OrderedHashtagList& hashlist) {
    Hashtag HT;
    HT.name = ht;
    for (int i = 0; i < hashlist.size; ++i) {
        if (HT.name == (hashlist.list[i]).name) {
            ++(hashlist.list[i]).counter;
            int check_index = i;
            Hashtag check_temp;
            while (check_index - 1 >= 0 && (hashlist.list[check_index - 1]).counter < (hashlist.list[check_index]).counter) {
                check_temp = (hashlist.list[check_index - 1]);
                (hashlist.list[check_index - 1]) = (hashlist.list[check_index]);
                (hashlist.list[check_index]) = check_temp;
                --check_index;
            }
            return true;
        }
    }
    if (hashlist.size >= hashlist.capacity) {
        hashlist.capacity *= 2;
        auto *temp = new Hashtag[hashlist.capacity];
        for (int i = 0; i < hashlist.size; ++i) {
            temp[i] = hashlist.list[i];
        }
        delete[] hashlist.list;
        hashlist.list = temp;
    }
    if (hashlist.list != nullptr) {
        HT.counter = 1;
        hashlist.list[hashlist.size] = HT;
        ++hashlist.size;
        return true;
    } else {
        return false;
    }
}

/* showMostPopularHashtags
 * Parameters:
 *      hashlist: reference to OrderedHashtagList struct
 * Return value:
 *      none
 * Functionality:
 *      Prints the k most popular hashtags.
 *      See prompt for formatting details.
 */
void showMostPopularHashtags(OrderedHashtagList hashlist, int k) {
    if (hashlist.size < k) {
        k = hashlist.size;
    }
    if (k == 0) {
        std::cout << "No hashtags." << endl;
    }
    for (int i = 0; i < k; ++i) {
        if (i == k - 1) {
            std::cout << "Tag " << (hashlist.list[i]).name << " - " << (hashlist.list[i]).counter << " occurrence(s)";
        } else {
            std::cout << "Tag " << (hashlist.list[i]).name << " - " << (hashlist.list[i]).counter << " occurrence(s)" << std::endl;
        }
    }
}