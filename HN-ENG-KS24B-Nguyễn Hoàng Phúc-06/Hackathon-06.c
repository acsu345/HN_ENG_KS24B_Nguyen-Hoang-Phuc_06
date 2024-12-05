#include <stdio.h> 

int main(){
	int max=100, a,b, ans, length;
	int arr[max];
	do {
		printf("\n  MENU  \n");
		printf("1. Nhap so phan tu va gia tri cho mang \n" );
		printf("2. In ra gia tri cac phan tu trong mang \n");
		printf("3. Dem so luong cac so hoan hao co trong mang \n");
		printf("4. Tim gia tri nho thu hai trong mang\n");
		printf("5. Them phan tu vao vi tri nagu nhien trong mang\n");
		printf("6. Xoa phan tu tai mot vi tri cu the\n");
		printf("7. Sap xep cac phan tu theo vi tri tang dan \n");
		printf("8. Tim kiem phan tu co trong mang hay khong \n");
		printf("9. Sap xep so le dung truoc so chan\n");
		printf("10. Kiem tra mang co phai tang dan hay khong\n");
		printf("11. Thoat\n");
		printf("Lua chon cua ban: "); 
		scanf("%d", &ans);
		switch(ans){
			case 1:{
				printf("Nhap so phan tu cua mang: ");
				scanf("%d", &a);
				for(int i = 0; i<a; i++){
					printf("Nhap cac gia tri vao mang: ");
					scanf("%d", &arr[i]); 
				}
				length = a;
				b = 1; 
				continue;
			}
			case 2:{
				if (b){
				   printf("Cac phan tu trong mang la:\n"); 
					for (int i = 0; i<length; i++){
						printf("arr[%d] = %d\n", i, arr[i] ); 
					} 
				}else {
					printf("Mang chua duoc khoi tao"); 
				} 
				continue;
			}
			case 3:{
				
				break;
			}
			case 4:{
				int mina,minb = arr[0];
				for(int i =0 ; i < length; i++){
					if (arr[i] < mina ){
						minb = mina;
						mina = arr[i]; 
					}else if(arr[i]<minb){
						minb += arr[i]; 
					} 
				}if (minb == mina){
					printf("Khong co gia tri nho thu hai"); 
				}else {
					printf("Gia tri nho thu hai la: %d", minb) ;
				} 
								
				continue;
			} 
			case 5:{
				int value;
				int addIndex;
				addIndex = length;  
				printf("Nhap gia tri ban muon them: ");
				scanf("%d", &value); 
				for (int i = length; i < addIndex ; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[addIndex] = value;
                length++;
                printf("Them thanh cong!\n"); 
				continue;
			}
			case 6:{
				int index; 
				printf("Nhap vi tri muon xoa: ");
	            scanf("%d", &index);
	            if (index < 0 || index >= length) {
	                printf("Vi tri xoa khong hop le!\n");
	            } else {
	                for (int i = index; i < length - 1; i++) {
	                    arr[i] = arr[i + 1];
	                }
	                length--;
	                printf("Xoa thanh cong!\n");
	        }
				continue;
			}	
			case 7:{
				for (int i = 0 ; i< length; i++){
					for (int j = 0; j< length -i - 1; j++){
						if (arr[j] > arr[ j+1]){
							int temp = arr[j];
							arr[j] = arr[j+1];
							arr[j+1] = temp; 
						} 
					} 
				}
				printf("Mang da duoc sap xep"); 
				continue;
			} 
			case 8:{
				int item;
	            printf("Nhap gia tri can tim: ");
	            scanf("%d", &item);
	            int found = -1;
	            for (int i = 0; i < length; i++) {
	                if (arr[i] == item) {
	                    found = i;
	                    break;
	                }
	            }
	            if (found != -1) {
	                printf("Phan tu %d o vi tri %d\n", item, found);
	            } else {
	                printf("Khong tim thay phan tu\n");
	            }
				continue;
			}
			case 9:{
				break;
			}
			case 10:{
				
				break;
			}
			case 11:{
				printf("Thoat chuong trinh\n"); 
				break;
			}
			default:
			printf("Lua chon khong hop le "); 
		} 
	}
	while(ans != 11);
	
	return 0; 
} 
