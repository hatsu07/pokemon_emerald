@ Emits one fixed-width Japanese move-name entry.
.set MOVE_NAME_ENTRY_SIZE, 8

.macro move_name_entry label:req, move:req, b0:req, b1:req, b2:req, b3:req, b4:req, b5:req, b6:req, b7:req
    .globl \label
\label:
    .if ((. - gMoveNames) / MOVE_NAME_ENTRY_SIZE) != \move
        .error "move_name_entry order does not match MOVE_* id"
    .endif
    .byte \b0, \b1, \b2, \b3, \b4, \b5, \b6, \b7
.endm
