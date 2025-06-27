assume cs:codesg,ds:datasg,ss:stacksg
stacksg segment 
    dw 0,0,0,0,0,0,0,0
stacksg ends
datasg segment 
    db '1. display......'
    db '2. brows........'
    db '3. replace......'
    db '4. modify.......'
datasg ends 
codesg segment 
start:  
        mov ax,stacksg
        mov ss,ax 
        mov ax,datasg
        mov ds,ax
        mov si,0
        mov cx,4
    s0: push cx 
        mov bx,0
        mov cx,4
    s:  mov ax,[bx+3+si]
        and al,11011111b
        inc bx 
        loop s 
        pop cx
        add si,16
        loop s0
    mov ax,4c00h
    int 21h
codesg ends 
end start 

