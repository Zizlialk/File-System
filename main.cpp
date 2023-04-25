#include <iostream>
#include <string>

class file
{
	public:
		int NoContent;
		bool Dir;               //Is this file a directory
		std::string name;       //Name of the file. Directory or otherwise
		std::string Contents;   //the contentst of a single file/

        file parent;
        file child;
        file sibling;

		file(std::string name, bool dir){
			//Contructor
			this->name = name;      //name of the file
			this->Contents = "";    //nothing there yet. empty file basically
			this->Dir = dir;        //Is this file a directory file
			this->NoContent = 0;
		}
	
		std::string Print()
		{
			//Printing the information of the file
			return this->name; //Should be enough for the time being. there might be another version with something like ls -l
		}

	};

class Directory
{
    file head;          //This is the root of the directory

    public:


		int New(std::string name){  //return 0 : worked, -1 : failure
			//name
			//location
			//Directory?
			//parent
			//Sibling would be listm anipulation
			//child there are none yet.


		}

		int changeDir(){
			//Chaning the working directory
		}
		int Delete(){
			//remove a file, need to decide on unix or windows version
		}

		void traversal(){
			//Some way to traverse the whole directory
			file cur = head;	//Getting the head of the directory to traverse through
			Intraversal(cur);
		}
		void interact(){
			//This will be where things like writing to a file go

		}
	private:
		std::string Intraversal(file cur)
		{
			Intraversal(cur.sibling)
		}

};

int main()
{

    return 0;
}