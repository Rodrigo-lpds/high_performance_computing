program arrayProg
   integer :: beginning, rate, end
   integer i,j,n;
   parameter (n = 128)
   double precision :: s

   double precision, dimension(n):: x
   double precision, dimension(n,n) :: A
   double precision, dimension(n) :: b
  
   
   call system_clock(beginning, rate)

   !assigning some values to the array matrix
   do i=1,n
      x(i) = rand()
      do j = 1, n
         A(i, j) = rand()
      end do
   end do

   do i=1,n
      do j = 1, n
         b(i) = b(i) + A(i, j) *x (j) 
      end do
   end do

  
   call system_clock(end)
   print *, "elapsed time: ", dble(end - beginning) / dble(rate)

end program arrayProg