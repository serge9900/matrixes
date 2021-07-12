#include"matrix.hpp"
void matrica () {
	int column;				//nor column - i hamar popoxakan
	cout<<"enter size column: "; 		//nermucuma columni chap@
	cin>>column;
	int row;				//nor row - i hamar popoxakan
	cout<<"enter size row: ";			//nermucuma rowi chaps@
	cin>>row;

	int matrix[column][row];
	assert(row>0);
	assert(column>0);				//nor matrix popoxakan s u e chapi
	for (int i=0;i<column; i++){ 	//mtnuma matrixi andamnerov ancnuma 
		for (int j=0;j<row;j++){
			int numbers;		//nor popoxakan vortex lineluyen matrixi michov ancan bolor tver@
			cout<<"start etner numbers: ";
			cin>>numbers;
			matrix[i][j]=numbers;
		}
	}
	int countdown =0;
	for(int i=1; i<column; i++){			//nerqev hashvel
		for(int j=0;j<i; j++){
			countdown +=matrix[i][j];
		}
	}
	int countup =0;
	for(int i=0; i<column-1; i++){			//verev hashvel
		for(int j=i+1;j<row; j++){
			countup +=matrix[i][j];
		}
	}
	int len1 = 0;
	int* bin1 = erkuakan(countdown, len1);
	int index = len1 - 1;
       	for(int i=1; i<column; i++){			//nerqev poxuma binar
		for(int j=0;j<i; j++){
			if(index > 0) {
				matrix[i][j] = bin1[index];
				--index;
			} else {
				matrix[i][j] = 0;
			}
		}
	}
	int len2 = 0;
	int* bin2 = erkuakan(countup, len2);
	index = len2 - 1;
	for(int i=0; i<column-1; i++){			//verev poxel binar
		for(int j=i+1 ;j<row; j++){
			if(index > 0) {
				matrix[i][j] = bin2[index];
				--index;
			} else {
				matrix[i][j] = 0;
			}
		}
	}

	for(int i=0; i<column; i++){
		for(int j=0; j<row;j++){ 		//tpuma tver@
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	cout << "**************************************************"<<endl;
	cout << "my up colculate number: "<<countup<<endl;
	cout << "my up bynary number: ";
	for(int k = len2 - 1; k >= 0; --k)
		cout << bin2[k];
	cout << "\n**************************************************"<<endl;

	cout << "my down colculate number: "<<countdown<<endl;
	cout << "my down bynary number: ";
	for(int k = len1 - 1; k >= 0; --k)
		cout << bin1[k];
	cout<<endl;
}
