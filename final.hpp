#pragma once
#include <iostream>
#include <string>

using namespace std;

struct doublyNode
{
    int commitNumber;
    singlyNode* head;
    doublyNode* previous;
    doublyNode* next;
}

struct singlyNode
{
    string fileName;        //Name of local file
    string fileVersion;     //Name of file in .minigit folder
    singlyNode* next;
}