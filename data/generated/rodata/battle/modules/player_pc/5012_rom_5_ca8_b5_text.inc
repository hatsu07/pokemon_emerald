	@ src/player_pc.c:174 sText_Mailbox
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA8B5
gText_Rom_5CA8B5: @ 0x085CA8B5
	.string "メールボックス$"
	.if (. - gText_Rom_5CA8B5) != 0x8
	.error "gText_Rom_5CA8B5 must retain its original byte length"
	.endif
