Hey folks
Time for some DSA 
Here are the main repos for searching algo for yourhe DSA with explaination 
they contains programs done in a way which is easy for u to understand
hope u like it :)


#BUBBLE SORT
  The largest element is at the last/hightest index   
  To access the elements the loop will run n-1 times{adjusting the block check}
  To execute passes the loop will run n-I time since every element will be in sorted after every passes

  COMPLEXITY:
      Sorting complexity=no of comparision
      f(n)=(n-1)+(n-2)+........+3+2+1
      f(n)=n(n-1)/2
      f(n)=n^2/2+O(n)=O(n^2)
      

      O(n^2)

#INSERTION SORT
   The loop runs till n elements leving the initial element i.e. it starts from 1 and end at n
   The key value is atained from loop
   The 0 position is handled by another variable eg.j
   if:
       if the value of j>=0 and the value of arr[j]>key
           shift all the elements that is greater than the value of key to right 
           adjust the position of j to less than a pos where the key is to be inserted    
    insert the key in the given space       


  eg. Consider a pack of card
    to inserta small no
    shift the pack of card having big values to that card to right 
    insert the card to that poss

    12 11 13 5 6
    i=1 j=0
    key=12 i.e. key=arr[i]
    shift 12 to right  12 12 13 5 6
    remove the index of j to one pos back where the key is to be inserted
    j=-1
    add j+1=key
    11 12 13 5 6

    2. 

     j=-1 key=11 i=2 
     key=13 j=1
     no change since (j<key)
     j+1=key // place key = key

    3.
     j=1 key=13 i=3
     key=5 j=2 i.e.13

     shift 13 to 5 12 to 13 11 to 12
     11 12 13 13 6
     11 12 X 13 6
     11 12 12 13 6
     11 X 12 13 6
     11 11 12 13 6
     X 11 12 13 6

     insert key

     5 11 12 13 6

     continue...... 

#slection sorted
  

