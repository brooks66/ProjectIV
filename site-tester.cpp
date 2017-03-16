#include <iostream>
#include <string>
#include <curl/curl.h>

using namespace std;

void openConfigFile(string configFileName, int &PERIOD_FETCH, int &NUM_FETCH, int &NUM_PARSE, string &SEARCH_FILE, string &SITE_FILE) {
	cout << configFileName << endl;
}

void checkArgs(int argc, char* argv[], int &PERIOD_FETCH, int &NUM_FETCH, int &NUM_PARSE, string &SEARCH_FILE, string &SITE_FILE) {
	if (argv[1] != NULL) {
		string configFileName = argv[1];
		openConfigFile(configFileName, PERIOD_FETCH, NUM_FETCH, NUM_PARSE, SEARCH_FILE, SITE_FILE);
	}
	else {
		cout << "USAGE ERROR: Please provide a configuration file!" << endl;
		exit(1);
	}
}

int main(int argc, char* argv[]) {
	// Initialize req'd variables
	int	PERIOD_FETCH = 180;
	int	NUM_FETCH = 1;
	int	NUM_PARSE = 1;
	string SEARCH_FILE = "Search.txt";
	string SITE_FILE = "Sites.txt";

	// Check for config file
	checkArgs(argc, argv, PERIOD_FETCH, NUM_FETCH, NUM_PARSE, SEARCH_FILE, SITE_FILE);

/*	cout << PERIOD_FETCH << endl;
	cout << NUM_FETCH << endl;
	cout << NUM_PARSE << endl;
	cout << SEARCH_FILE << endl;
	cout << SITE_FILE << endl;
*/
	// Return if all is successful
	return 0;
}
