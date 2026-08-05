	@ data/text/secret_base_trainers.inc:154 SecretBase_Text_Trainer4Defeated
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2458F4
gText_Rom_2458F4: @ 0x082458F4
	.string "きみの じつりょくは じゅうぶん わかった!$"
	.if (. - gText_Rom_2458F4) != 0x17
	.error "gText_Rom_2458F4 must retain its original byte length"
	.endif
