# include "DocumentManager.h"
using namespace std;

DocumentManager::DocumentManager(){}

void DocumentManager::addDocument(std::string name, int id, int license_limit){
    Document new_doc;
    new_doc.id = id;
    new_doc.name = name;
    new_doc.license_limit = license_limit;
    new_doc.number_borrowed = license_limit;
    collection.insert({id, new_doc});
    name2id.insert({name,id});
}

void DocumentManager::addPatron(int patronID){
    patrons.push_back(patronID);
}

int DocumentManager::search(std::string name){
    unordered_map<string, int>::const_iterator got = name2id.find(name);
    if (got == name2id.end()) 
        return 0;
    else 
        return got->second;
}

bool DocumentManager::borrowDocument(int docid, int patronID){
    bool patronID_found = false;
    for (auto i : patrons){
        if (patrons.at(i) == patronID)
            patronID_found = true;
    }

    if (patronID_found == false)
        return false;
    
    Document doc;
    unordered_map<int, Document>::const_iterator got = collection.find(docid);
    if (got == collection.end()) 
        return false;
    else 
        doc = got->second;
    
    if (doc.number_borrowed >= doc.license_limit)
        return false;
    else {
        doc.number_borrowed++;
        return true;
    }
}

void DocumentManager::returnDocument(int docid, int patronID){
    bool patronID_found = false;
    for (auto i : patrons){
        if (patrons.at(i) == patronID)
            patronID_found = true;
    }

    if (patronID_found == false)
        return ;
    
    Document doc;
    unordered_map<int, Document>::const_iterator got = collection.find(docid);
    if (got == collection.end()) 
        return ;
    else 
        doc = got->second;
    
    if (doc.number_borrowed >= doc.license_limit)
        return ;
    else {
        doc.number_borrowed--;
        return ;
    }
    
}