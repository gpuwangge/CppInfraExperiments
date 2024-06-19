# Build Instruction
Go to the project dir  
> mkdir build  
> cd build  
> cmake -G "MinGW Makefiles" ..  
> make  
  
# AXI
Master: 发出读或写请求的block。Master发出端Interface包括AW,W和AR。接收端Interface包括B和R。     
Slave: 接受读或写请求的block。Slave发出端Interface包括B和R。接收端Interface包括AW,W和AR。      
写过程：Master发出AW,W，Slave发出B。  
读过程：Master发出AR, Slave发出R。  


# Reference
https://en.wikipedia.org/wiki/Advanced_eXtensible_Interface  