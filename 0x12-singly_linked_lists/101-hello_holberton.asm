    org  0x100        



    mov  dx, msg     
    mov  ah, 9        
    int  0x21        

    mov  ah, 0x4c     
    int  0x21         

    msg  db 'Hello, Holberton', 0x0d, 0x0a, '$'  