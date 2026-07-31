@ decoration_entry argument order:
@   id,
@   nameWord0, nameWord1, nameWord2,
@   permission, shape, category,
@   price, description, tiles
.macro decoration_entry id:req, nameWord0:req, nameWord1:req, nameWord2:req, permission:req, shape:req, category:req, price:req, description:req, tiles:req
    .byte \id
    .4byte \nameWord0, \nameWord1, \nameWord2
    .byte \permission
    .byte \shape
    .byte \category
    .2byte \price
    .2byte 0                  @ alignment padding
    .4byte \description
    .4byte \tiles
.endm
