	.globl gUnknown_82EBCE4
gUnknown_82EBCE4: @ 0x082EBCE4
	.incbin "baserom.gba", 0x2ebce4, 0xe0
	.globl gUnknown_82EBDC4
gUnknown_82EBDC4: @ 0x082EBDC4

	@ src/battle_records.c:89 sText_DashesNoPlayer (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EBDC4
gText_Rom_2EBDC4: @ 0x082EBDC4
	.string "-------$"
	.if (. - gText_Rom_2EBDC4) != 0x8
	.error "gText_Rom_2EBDC4 must retain its original byte length"
	.endif
	.globl gText_Rom_2EBDC7
	.set gText_Rom_2EBDC7, gText_Rom_2EBDC4 + 0x3
	.globl gText_Rom_2EBDC8
	.set gText_Rom_2EBDC8, gText_Rom_2EBDC4 + 0x4
