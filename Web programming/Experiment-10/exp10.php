DisplayData.php
<?php
$host = 'localhost';  
$user = 'root';  
$pass = '12345';
$dbname='sample';
$conn= mysqli_connect($host, $user, $pass,$dbname);  
if(! $conn)  {  
    die('Could not connect: ' . mysqli_error());  
}
$sql= 'SELECT * FROM student';  
$retval=mysqli_query($conn, $sql);  
echo "<table border=1><tr><th>Student ID</th><th>Student Name</th><th>Student Address</th></tr>";
if(mysqli_num_rows($retval)> 0){ 
    while($row = mysqli_fetch_assoc($retval)){  
        echo " <tr><td>".$row['RollNo']."</td> ";  
        echo " <td>". $row['Name']."</td> ";  
        echo " <td>". $row['City']." </td></tr> ";   
    } //end of while  
echo "</table>";
} else  {  
        echo "0 results";  
    }  
mysqli_close($conn);  
?> 
