assume cs:code,ds:data
data segment
    db 'Welcome to masm!',0
data ends
code segment 
start:  mov dh,8
        mov dl,3
        mov cl,2
        mov ax,data
        mov ds,ax
        mov si,0
        call show_str
        mov ax,4c00h
        int 21h
show_str:mov ax,0b800h
        mov es,ax
        mov al,0a0h
        dec dh
        mul dh
        mov di,ax
        dec dl
        mov ax,2
        mul dl
        add di,ax
        mov bl,cl
    s0: mov al,ds:[si]
        mov es:[di],al
        mov cl,al
        inc di
        mov es:[di],bl
        inc si
        inc di
        jcxz s0
        ret
code ends
end start


