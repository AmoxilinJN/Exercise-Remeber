assume cs:code 
code segment 
    mov ax,0
    mov ds,ax
    mov dx,0
    mov bx,200h
    mov cx,40h 
    s:  mov [bx],dx 
        inc bx 
        inc dx
    loop s 
    mov ax,4c00h 
    int 21h
code ends 
end 