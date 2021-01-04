#ifndef _OPERATION_MANAGER_H
#define _OPERATION_MANAGER_H
#include "dependency.h"

using Operation_Ptr = shared_ptr<FileOperation_Interface>;

class OperationManager
{
public:
	/*
		�������ã�
			����µĲ���ѡ���Ա���֮����й�����չ
		Notice��
			���Ѵ�����ͬ����������2ָ��Ϊ�գ������ʧ��
		������
			1.option������ѡ����
			2.operation��������ָ��
		����ֵ��
			����ɹ�����true ʧ�ܷ���false��
	*/
	bool AddOperation (const string& option, Operation_Ptr operation);

	/*
		�������ã�
			���ݲ���ѡ��ɾ���ɵĲ���ѡ���Ա���֮����й����޸�
		Notice��
			���δ�ҵ�������ѡ����ɾ��ʧ��
		������
			1.option������ѡ����
		����ֵ��
			ɾ���ɹ�����true ʧ�ܷ���false��
	*/
	bool RemoveOperation(const string& option);

	/*
		�������ã�
			���ݲ���ѡ���ȡ���в�����ָ��
		������
			1.option������ѡ����
		����ֵ��
			if ������ѡ�������ڷ������Ӧ������ָ��
			else ����nullptr
	*/
	Operation_Ptr GetOperation (const string& option);
private:
	map<string, Operation_Ptr> operations_map_;
};

#endif // ! _OPERATION_MANAGER_H
