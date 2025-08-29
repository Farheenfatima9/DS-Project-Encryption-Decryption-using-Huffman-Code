#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<list>
#include<queue>
#include<vector>
#include<algorithm>
#include<bitset>
#include<sstream>

//for storing numbers with respect to its character
struct enc
{
	std::string numbers;
	char mychar;
	enc() :numbers{ "0" }, mychar{ ' ' }{};
};

//used to construct huffman tree
struct qnode
{
	int frequency;
	char alphabet;
	qnode* left;
	qnode* right;
	qnode() : frequency{ 0 }, alphabet{ ' ' }, left{ NULL }, right{ NULL }{};
};
//operator overloading for sorting
bool operator>(qnode const& p1, qnode const& p2)
{
	return p1.frequency > p2.frequency;
}
bool operator<(qnode const& p1, qnode const& p2)
{
	return p1.frequency < p2.frequency;
}

bool is_empty(std::ifstream& pFile)
{
	return pFile.peek() == std::ifstream::traits_type::eof();
}
class Huffman
{
private:
	std::string mystring;
	std::vector<enc> storecode;
	std::queue<qnode> myqueue;
	std::queue<qnode> prioqueue;
	std::string data;  //string to store data from the file
	std::string encrypteddata;
	std::list<char> mylist;
	std::vector<qnode> myvector;
	// to store the file name
	std::string filename;
public:

	Huffman()
	{
		data = "";
		encrypteddata = "";
		mystring = "";
	}
	//reading data from the file
	
	void readfromfile(std::string abc)
	{
		filename = abc;
		std::ifstream readinfile;
		readinfile.open(filename);
		while (!readinfile.eof())
		{
			std::string a;
			getline(readinfile, a);
			//check for next line
			if (!readinfile.eof())
			{
				a += "~";
			}
			data += a;
		}
	}
	//insert data in list
	//pushing data in list
	//frequecy count and pushed in queue
	//pushed in a vector for sorting
	bool insertinqueue()
	{
		if (data == "")
		{
			return false;
		}
		else
		{
			for (int i = 0; i < data.size(); i++)
			{
				mylist.push_back(data[i]);
			}
			int count;
			char my = ' ';
			std::list<char> ::iterator it;
			while (mylist.empty() == false)
			{
				count = 0;
				my = mylist.front();
				for (it = mylist.begin(); it != mylist.end();)
				{
					if (my == *it)
					{
						count++;
						mylist.erase(it++);
					}
					else
					{
						it++;
					}
				}
				qnode dat;
				dat.alphabet = my;
				dat.frequency = count;
				myqueue.push(dat);
			}
			while (!myqueue.empty())
			{
				myvector.push_back(myqueue.front());
				myqueue.pop();
			}
			return true;
		}
		
	}

	//sorting and making priority queue
	void assign()
	{
		sort(myvector.begin(), myvector.end());
		std::vector<qnode> ::iterator it;
		for (it = myvector.begin(); it != myvector.end(); it++)
		{
			prioqueue.push(*it);
		}
		myvector.clear();
	}

	void makingtree()
	{
		while (!prioqueue.empty())
		{
			qnode* first = new qnode;
			qnode* second = new qnode;
			*first = prioqueue.front();
			prioqueue.pop();
			if (prioqueue.empty() == true)
			{
				std::cout << "last element in queue is: " << std::endl;
				std::cout << first->alphabet << " fre: " << first->frequency;
				prioqueue.push(*first);
				break;
			}

			*second = prioqueue.front();
			prioqueue.pop();
			qnode* mid = new qnode;
			mid->left = first;
			mid->right = second;
			mid->frequency = first->frequency + second->frequency;
			prioqueue.push(*mid);
			while (!prioqueue.empty())
			{
				myvector.push_back(prioqueue.front());
				prioqueue.pop();
			}
			assign();
		}
	}

	qnode* getnode()
	{
		return &prioqueue.front();
	}

	void printcode(qnode* mynode, std::string a)
	{
		if (mynode->left == NULL && mynode->right == NULL)
		{
			enc code;
			code.mychar = mynode->alphabet;
			code.numbers = a;
			storecode.push_back(code);
		}
		else
		{
			printcode(mynode->left, a += "0");
			a.pop_back();
			printcode(mynode->right, a += "1");
		}
	}
	void encryption()
	{
		for (int i = 0; i < data.size(); i++)
		{
			for (int j = 0; j < storecode.size(); j++)
			{
				if (data[i] == storecode[j].mychar)
				{
					encrypteddata += storecode[j].numbers;
					break;
				}
			}
		}

		std::string abc="";
		std::istringstream in(encrypteddata);
		std::bitset<8> bs;
		while (in >> bs)
		{
			abc += char(bs.to_ulong());
		}

		std::ofstream writeinfile;
		writeinfile.open(filename);
		writeinfile << abc;
		writeinfile.close();
	}

	std::string getstring()
	{
		return encrypteddata;
	}

	void decry(qnode* mynode, std::string a)
	{

		for (int i = 0; i < a.size(); i++)
		{
			if (a[i] == '0')
			{
				mynode = mynode->left;
			}
			else
			{
				mynode = mynode->right;
			}
			if (mynode->left == NULL && mynode->right == NULL)
			{
				mystring += mynode->alphabet;
				mynode = getnode();
			}
		}

		std::ofstream stor;
		stor.open(filename);
		for (int i = 0; i < mystring.size(); i++)
		{
			if (mystring[i] != '~')
				stor << mystring[i];
			else
				stor << "\n";
		}
	}
	void end()
	{
		exit(0);
	}
};
