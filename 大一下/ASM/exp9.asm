assume cs:code,ds:data
data segment 
    dw 0277h,0265h,026ch,0263h,026fh,026dh,0265h
    dw 2474h,246fh
    dw 716dh,7161h,7173h,716dh 
data ends 
code segment 
    start:  mov ax,data
            mov ds,ax
            mov ax,0b800h
            mov es,ax
            mov bx,780h
            mov si,0
            mov di,0
            mov cx,7
        s0: mov ax,ds:[si]
            mov word ptr es:[di].24h[bx],ax
            add si,2
            add di,2
            loop s0
            mov cx,2
            mov bx,820h
            mov di,0
        s1: mov ax,ds:[si]
            mov word ptr es:[di].28h[bx],ax
            add si,2
            add di,2
            loop s1
            mov di,0
            mov bx,8c0h
            mov cx,4
        s2: mov ax,ds:[si]
            mov word ptr es:[di].26h[bx],ax
            add si,2
            add di,2
            loop s2
            mov ax,4c00h
            int 21h
code ends
end start