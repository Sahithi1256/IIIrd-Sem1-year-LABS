DisplayData.php
&lt;?php
$host = &#39;localhost&#39;;
$user = &#39;root&#39;;
$pass = &#39;12345&#39;;
$dbname=&#39;sample&#39;;
$conn= mysqli_connect($host, $user, $pass,$dbname);
if(! $conn) {
die(&#39;Could not connect: &#39; . mysqli_error());
}
$sql= &#39;SELECT * FROM student&#39;;
$retval=mysqli_query($conn, $sql);
echo &quot;&lt;table border=1&gt;&lt;tr&gt;&lt;th&gt;Student ID&lt;/th&gt;&lt;th&gt;Student Name&lt;/th&gt;&lt;th&gt;Student
Address&lt;/th&gt;&lt;/tr&gt;&quot;;
if(mysqli_num_rows($retval)&gt; 0){
while($row = mysqli_fetch_assoc($retval)){
echo &quot; &lt;tr&gt;&lt;td&gt;&quot;.$row[&#39;RollNo&#39;].&quot;&lt;/td&gt; &quot;;
echo &quot; &lt;td&gt;&quot;. $row[&#39;Name&#39;].&quot;&lt;/td&gt; &quot;;
echo &quot; &lt;td&gt;&quot;. $row[&#39;City&#39;].&quot; &lt;/td&gt;&lt;/tr&gt; &quot;;
} //end of while
echo &quot;&lt;/table&gt;&quot;;
} else {
echo &quot;0 results&quot;;
}
mysqli_close($conn);
?&gt;
