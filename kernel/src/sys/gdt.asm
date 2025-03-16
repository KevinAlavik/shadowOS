global flush_tss
global jump_user
extern test_user

flush_tss:
    mov ax, 5 * 8
    ltr ax
    ret

; void jump_user(uint64_t addr)
jump_user:
    mov rax, rsp
    push (4 * 8) | 3
    push rax
    pushf
    push (3 * 8) | 3
    push rdi
    iretq