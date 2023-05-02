#include <stdio.h>

 main() 
 {
    int i,result, selection, quantity, total_bill = 0;

   
    while(1)
	{
       
        printf("------------------MENU------------------");
			printf("\n1. Pizza  price=180rs/pcs\t");
	        printf("\n2. Burger price=100rs/pcs\t");
	        printf("\n3. Dosa   price=120rs/pcs\t");
	        printf("\n4. Idli   price=50rs/pcs\t");
	        
        printf("\nEnter your choice :- ");
	    scanf("%d",&selection);  
        
        switch(selection)
        {
        		
		case 1:
		        printf("You have selected Pizza");
	            printf("\nEnter Quantity :- ",quantity);
	            scanf("%d",&quantity);
	            result=180*quantity;
			    printf("Total Amount = %d\n",result);
			    break;
		    
		case 2:
			    printf("You have selected Burger");
	            printf("\nEnter Qunatity :- ",quantity);
	            scanf("%d",&quantity);
	            result=100*quantity;
			    printf("Total Amount = %d\n",result);
			    break;
		
			
		case 3:
		     	printf("You have selected Dosa");
	            printf("\nEnter Qunatity :- ",quantity);
	            scanf("%d",&quantity);
		        result=120*quantity;
			    printf("Total Amount = %d\n",result);
			    break;
			
		case 4:
		        printf("You have selected Idli");
	            printf("\nEnter Qunatity :- ",quantity);
	            scanf("%d",&quantity);
			    result=50*quantity;
			    printf("Total Amount = %d\n",result);
			    break;
				
		    default :
			printf("Invalid Choice !!!!\nplease enter right choice to enjoy this food\nthank you.!");
			break;
			
		}
		
        char more_items;
        printf("Do you want to order more food items? (y/n): ");
        scanf(" %c", &more_items);

        if (more_items == 'n') 
		{	printf("thank you for visit.!");
            break;
        }
        
}
}
