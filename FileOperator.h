#ifndef _H_FILE_OPERATOR_H_
#define _H_FILE_OPERATOR_H_
#include "operationManager.h"

class FileOperator
{
public:
	FileOperator ();
	bool Excute (const string& input_str);
private:
	bool Is_Input_Right (const string& input_str);
	void init ();
private:
	shared_ptr<OperationManager> operation_manager_;
};

#endif // !_H_FILE_OPERATOR_H_
