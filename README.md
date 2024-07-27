My Experiences On Debugging 

Signals : Generally OS will catch and dump core but every Organization try to set a signal handler for each signal. Objective behind this is to do some cleanup operations before dumping core .Also The cores can be huge size , so Get some initial BT for quick canalysis before getting huge dump of Gbs from Field..But here the problem is During this Signal Handler , People often makes mistakes just leaving it like that Making OS confused. 
The signal Handler queues keeps catching all signals from that Thread or other thread till Process gets killed. So There will be always chnace that more than 1 signal will be caught and confuses OS to kill process, 
Here is a solution to Write Signal handler which can make quick BT and Dump core and Make sure the it catches only first signal and dumps process with core.


  
