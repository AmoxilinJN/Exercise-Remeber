assume cs:code
code segment
start:  mov ax,cs
        mov ds,ax
        mov si,offset sql
        mov es,0
        mov di,200h
        mov cx,offset sql1 - offset sql
        cld
        rep movsb
        mov ax,0
        mov es,ax
        mov word ptr es:[7ch*4],200h
        mov word ptr es:[7ch*4+2],0
        mov ax,4c00h
        int 21h
    sql:mul ax
        iret
    sql1:nop