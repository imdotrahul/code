<?php
if (isset($_POST['submit'])) {
    if (isset($_POST['firstname']) && isset($_POST['lastname']) &&
        isset($_POST['email']) &&
         isset($_POST['phone'])&& isset($_POST['password'])&& isset($_POST['confirmpassword'])) {
        
        $firstname = $_POST['firstname'];
        $lastname = $_POST['lastname'];
        $email = $_POST['email'];
        $phone = $_POST['phone'];
        $password = $_POST['password'];
        $confirmpassword  = $_POST['confirmpassword'];

        $host = "localhost";
        $dbUsername = "root";
        $dbPassword = "";
        $dbName = "rahul";
        $conn = new mysqli($host, $dbUsername, $dbPassword, $dbName);
        if ($conn->connect_error) {
            die('Could not connect to the database.');
        }
        else {
            $Select = "SELECT email FROM register WHERE email = ? LIMIT 1";
            $Insert = "INSERT INTO register(firstname, lastname, email, phone,password) values(?, ?, ?, ?, ?)";
            $stmt = $conn->prepare($Select);
            $stmt->bind_param("s", $email);
            $stmt->execute();
            $stmt->bind_result($resultEmail);
            $stmt->store_result();
            $stmt->fetch();
            $rnum = $stmt->num_rows;
            if ($rnum == 0) {
                $stmt->close();
                $stmt = $conn->prepare($Insert);
                $stmt->bind_param("sssss",$firstname, $lastname,  $email,  $phone, $password);
                if ($stmt->execute()) {
                    
                    header('location:songs.html');
                }
                else {
                    echo $stmt->error;
                }
            }
            else {
                echo "Someone already registers using this email.";
            }
            $stmt->close();
            $conn->close();
        }
    }
    else {
        echo "All field are required.";
        die();
    }
}
else {
    echo "Submit button is not set";
}
?>