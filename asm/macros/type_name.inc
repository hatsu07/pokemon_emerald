@ Emits one fixed-width Japanese type-name entry.
.set TYPE_NAME_ENTRY_SIZE, 5

.macro type_name_entry label:req, type:req, b0:req, b1:req, b2:req, b3:req, b4:req
    .globl \label
\label:
    .if ((. - gTypeNames) / TYPE_NAME_ENTRY_SIZE) != \type
        .error "type_name_entry order does not match TYPE_* id"
    .endif
    .byte \b0, \b1, \b2, \b3, \b4
.endm
