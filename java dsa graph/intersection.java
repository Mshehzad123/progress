public class intersection {
    public static void main(String[] args) {
        int arr[]={1,2,3,4,5};
        for (int i=0;i<arr.length;i++){
            System.out.println(arr[i]);
        }
        int arr2[]={3,4,5,6};
        for (int i=0;i<arr2.length;i++){
            System.out.println(arr2[i]);
        }
        for (int i=0;i<arr.length;i++){
            for (int j=0;j<arr2.length;j++){
                if (arr[i]==arr2[j]){
                    System.out.println(arr[i]);
                }
            }
        }
    }
    
}
