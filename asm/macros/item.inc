@ Emits one Japanese Emerald struct Item entry (0x28 bytes).
@ name0-name9 are the exact 10-byte encoded item-name field.
.macro item_entry label:req, name0:req, name1:req, name2:req, name3:req, name4:req, name5:req, name6:req, name7:req, name8:req, name9:req, itemId:req, price:req, holdEffect:req, holdEffectParam:req, description:req, importance:req, registrability:req, pocket:req, type:req, fieldUseFunc:req, battleUsage:req, battleUseFunc:req, secondaryId:req
.Litem_entry_start\@:
    .globl \label
\label:
    .byte \name0, \name1, \name2, \name3, \name4, \name5, \name6, \name7, \name8, \name9
    .2byte \itemId
    .2byte \price
    .byte \holdEffect
    .byte \holdEffectParam
    .4byte \description
    .byte \importance
    .byte \registrability
    .byte \pocket
    .byte \type
    .4byte \fieldUseFunc
    .byte \battleUsage
    .space 3
    .4byte \battleUseFunc
    .byte \secondaryId
    .space 3
    .if (. - .Litem_entry_start\@) != 0x28
    .error "item_entry must be exactly 0x28 bytes"
    .endif
.endm
