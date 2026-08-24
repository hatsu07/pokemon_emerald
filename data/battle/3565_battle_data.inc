	.globl gText_Rom_5ABC6C

	@ asm/frontier_util.s:4588 sub_081A3B68
	.globl gText_Rom_5ABC6C
gText_Rom_5ABC6C: @ 0x085ABC6C
	.string "　{EOS}"
	.if (. - gText_Rom_5ABC6C) > 0x2
	.error "gText_Rom_5ABC6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC6C) < 0x2
	.space 0x2 - (. - gText_Rom_5ABC6C)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085ABC6E: frontier_util.s: sub_081A3B68
	.globl gFrontierUtilData_085ABC6E
gFrontierUtilData_085ABC6E: @ 0x085ABC6E
	@ analyzed canonical ROM range 0x085ABC6E-0x085ABC6F
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x2 bytes=2
	.byte 0xFA, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085ABC70: frontier_util.s: sub_081A3B68
	.globl gFrontierUtilData_085ABC70
gFrontierUtilData_085ABC70: @ 0x085ABC70
	@ analyzed canonical ROM range 0x085ABC70-0x085ABC71
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x2 bytes=2
	.byte 0xFE, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085ABC72: frontier_util.s: sub_081A3CF0
	.globl gFrontierUtilData_085ABC72
gFrontierUtilData_085ABC72: @ 0x085ABC72
	@ analyzed canonical ROM range 0x085ABC72-0x085ABC74
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x3 bytes=3
	.byte 0x1A, 0xFE, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085ABC75: frontier_util.s: sub_081A3CF0
	.globl gFrontierUtilData_085ABC75
gFrontierUtilData_085ABC75: @ 0x085ABC75
	@ analyzed canonical ROM range 0x085ABC75-0x085ABC77
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x3 bytes=3
	.byte 0x1A, 0xFA, 0xFF
	.globl gText_BadEgg
