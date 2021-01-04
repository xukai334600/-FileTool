#ifndef _H_FILE_OPERATION_FACTORY_H
#define _H_FILE_OPERATION_FACTORY_H
#include <memory>

enum OPERATION_TYPE
{
	SHOW_CHAR_COUNT = 0,//字符数
	SHOW_WORD_COUNT = 1,//单词数
	SHOW_LINE_COUNT = 2,//行数
};

class FileOperation_Interface
{
public:	
	virtual ~FileOperation_Interface () = 0;
	virtual void Excute () = 0;
};

class CharCountOperation : public FileOperation_Interface {

};

class WordCountOperation : public FileOperation_Interface {

};

class LineCountOperation : public FileOperation_Interface {

};

class FileOpertionFactory {
public:
	static std::shared_ptr<FileOperation_Interface>
	CreatFileOperation(OPERATION_TYPE tp) {
		if (OPERATION_TYPE::SHOW_CHAR_COUNT == tp) {
			return std::make_shared<CharCountOperation>();
		} else if (OPERATION_TYPE::SHOW_WORD_COUNT == tp) {
			return std::make_shared<WordCountOperation>();
		} else if (OPERATION_TYPE::SHOW_LINE_COUNT == tp) {
			return std::make_shared<LineCountOperation>();
		} else {
			return nullptr;
		}
	}
};

#endif
