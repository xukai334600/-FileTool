#include "FileOperator.h"
#include "FileOperationFactory.h"

FileOperator::FileOperator ()
	: operation_manager_(std::make_shared<OperationManager> ())
{
	init ();
}

void
FileOperator::init ()
{	
	//TODO 是否需要抛异常
	bool is_all_add_success = true;
	is_all_add_success = operation_manager_->AddOperation ("-c", FileOpertionFactory::CreatFileOperation(OPERATION_TYPE::SHOW_CHAR_COUNT));
	is_all_add_success = operation_manager_->AddOperation("-w", FileOpertionFactory::CreatFileOperation(OPERATION_TYPE::SHOW_WORD_COUNT));
	is_all_add_success = operation_manager_->AddOperation("-l", FileOpertionFactory::CreatFileOperation(OPERATION_TYPE::SHOW_LINE_COUNT));
}
