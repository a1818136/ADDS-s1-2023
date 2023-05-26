#include "DocumentManager.h"

using namespace std;

DocumentManager::DocumentManager() {}

void DocumentManager::addDocument(std::string name, int id, int license_limit) {
    Document new_doc;
    new_doc.id = id;
    new_doc.name = name;
    new_doc.license_limit = license_limit;
    new_doc.number_borrowed = license_limit;
    collection.insert({id, new_doc});
    name2id.insert({name, id});
}

void DocumentManager::addPatron(int patronID) {
    patrons.push_back(patronID);
}

int DocumentManager::search(string name) {
    auto got = name2id.find(name);
    if (got == name2id.end())
        return 0;
    else
        return got->second;
}

bool DocumentManager::borrowDocument(int docid, int patronID) {
    bool patronID_found = false;
    for (auto i : patrons) {
        if (patrons[i] == patronID)
            patronID_found = true;
    }

    if (!patronID_found)
        return false;

    auto got = collection.find(docid);
    if (got == collection.end())
        return false;

    Document doc = got->second;
    if (doc.number_borrowed >= doc.license_limit)
        return false;
    else {
        doc.number_borrowed++;
        return true;
    }
}

void DocumentManager::returnDocument(int docid, int patronID) {
    bool patronID_found = false;
    for (auto i : patrons) {
        if (patrons[i] == patronID)
            patronID_found = true;
    }

    if (!patronID_found)
        return;

    auto got = collection.find(docid);
    if (got == collection.end())
        return;

    Document doc = got->second;
    if (doc.number_borrowed <= 0)
        return;
    else {
        doc.number_borrowed--;
        return;
    }
}
