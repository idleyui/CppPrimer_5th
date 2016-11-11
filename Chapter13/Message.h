#ifndef MESSAGE_H
#define MESSAGE_H

#include"Chapter13.h"

class Message{
	friend class Folder;
public:
	explicit Message(const string &str = "") :contents(str){}
	Message(const Message&);
	Message& operator=(const Message&);
	~Message();
	void save(Folder &);
	void remove(Folder &);
private:
	string contents;
	set<Folder*> folderSet;
	void add_to_Folders(const Message&);
	void remove_from_Folders();
};

Message::Message(const Message& copy)
{
	using std::swap;
	swap(*this, copy);
}

Message& Message::operator=(const Message &copy)
{
	remove_from_Folders();
	contents = copy.contents;
	folderSet = copy.folderSet;
	add_to_Folders(copy);
	return *this;
}

void swap(Message &lhs, Message &rhs)
{
	for (auto f : lhs.folders)
		f->remMsg(&lhs);
	for (auto f : rhs.folders)
		f->remMsg(&rhs);
	swap(lhs.folders, rhs.folders);
	swap(lhs.folders, rhs.folders);
	for (auto f : lhs.folders)
		f->addMsg(&lhs);
	for (auto f : rhs.folders)
		f->addMsg(&rhs);
}

#endif