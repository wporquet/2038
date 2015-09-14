<?php
$date = '2040-02-01';
$format = 'l d F Y H:i';

$mydate1 = strtotime($date);
echo '<p>', date($format, $mydate1), '</p>';
?>
