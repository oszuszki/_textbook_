#include <iostream>
#include <string>
#include <map>
#include <iomanip>
#include <fstream>

vector<pair<string, int>> sort_map ( map <string, int> &rank )
{
        vector<pair<string, int>> sorted;

        for ( auto & i : rank ) {
                if ( i.second ) {
                        pair<string, int> p {i.first, i.second};
                        ordered.push_back ( p );
                }
        }

        sort (
                begin ( ordered ), end ( ordered ),
        [ = ] ( auto && p1, auto && p2 ) {
                return p1.second > p2.second;
        }
        );

        return ordered;
}