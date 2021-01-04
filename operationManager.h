#ifndef _OPERATION_MANAGER_H
#define _OPERATION_MANAGER_H
#include "dependency.h"

using Operation_Ptr = shared_ptr<FileOperation_Interface>;

class OperationManager
{
public:
	/*
		函数作用：
			添加新的操作选项以便于之后进行功能拓展
		Notice：
			若已存在相同操作项或参数2指针为空，则插入失败
		参数：
			1.option：操作选项名
			2.operation：操作类指针
		返回值：
			插入成功返回true 失败返回false；
	*/
	bool AddOperation (const string& option, Operation_Ptr operation);

	/*
		函数作用：
			根据操作选项删除旧的操作选项以便于之后进行功能修改
		Notice：
			如果未找到待查找选项则删除失败
		参数：
			1.option：操作选项名
		返回值：
			删除成功返回true 失败返回false；
	*/
	bool RemoveOperation(const string& option);

	/*
		函数作用：
			根据操作选项获取已有操作类指针
		参数：
			1.option：操作选项名
		返回值：
			if 待查找选项名存在返回其对应操作类指针
			else 返回nullptr
	*/
	Operation_Ptr GetOperation (const string& option);
private:
	map<string, Operation_Ptr> operations_map_;
};

#endif // ! _OPERATION_MANAGER_H
