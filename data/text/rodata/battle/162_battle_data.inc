	@ src/data/trainers.h:6692 trainers_line_6692 (+4 aliases)
	.globl gText_Rom_5B4B81
gText_Rom_5B4B81: @ 0x085B4B81
	.string "ミツグ$"
	.if (. - gText_Rom_5B4B81) > 0x4
	.error "gText_Rom_5B4B81 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5B4B81) < 0x4
	.space 0x4 - (. - gText_Rom_5B4B81)
	.endif
	.incbin "baserom.gba", 0x5b4b85, 0x101

	@ src/data/trainers.h:16146 trainers_line_16146
	.globl gText_Rom_5B4C86
gText_Rom_5B4C86: @ 0x085B4C86
	.string "タロウ$"
	.if (. - gText_Rom_5B4C86) > 0x4
	.error "gText_Rom_5B4C86 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5B4C86) < 0x4
	.space 0x4 - (. - gText_Rom_5B4C86)
	.endif
	.incbin "baserom.gba", 0x5b4c8a, 0x850

	@ src/data/trainers.h:8667 trainers_line_8667 (+4 aliases)
	.globl gText_Rom_5B54DA
gText_Rom_5B54DA: @ 0x085B54DA
	.string "ゴロウ$"
	.if (. - gText_Rom_5B54DA) > 0x4
	.error "gText_Rom_5B54DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5B54DA) < 0x4
	.space 0x4 - (. - gText_Rom_5B54DA)
	.endif
	.incbin "baserom.gba", 0x5b54de, 0x1cf

	@ src/data/easy_chat/easy_chat_group_people.h:136 easy_chat_group_people_line_136
	.globl gText_Rom_5B56AD
gText_Rom_5B56AD: @ 0x085B56AD
	.string "ガール$"
	.if (. - gText_Rom_5B56AD) > 0x4
	.error "gText_Rom_5B56AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5B56AD) < 0x4
	.space 0x4 - (. - gText_Rom_5B56AD)
	.endif
	.incbin "baserom.gba", 0x5b56b1, 0x2d4

	@ src/data/trainers.h:7743 trainers_line_7743 (+1 aliases)
	.globl gText_Rom_5B5985
gText_Rom_5B5985: @ 0x085B5985
	.string "シノブ$"
	.if (. - gText_Rom_5B5985) > 0x4
	.error "gText_Rom_5B5985 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5B5985) < 0x4
	.space 0x4 - (. - gText_Rom_5B5985)
	.endif
	.incbin "baserom.gba", 0x5b5989, 0x239

	@ src/data/trainers.h:24407 trainers_line_24407 (+4 aliases)
	.globl gText_Rom_5B5BC2
gText_Rom_5B5BC2: @ 0x085B5BC2
	.string "ジロウ$"
	.if (. - gText_Rom_5B5BC2) > 0x4
	.error "gText_Rom_5B5BC2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5B5BC2) < 0x4
	.space 0x4 - (. - gText_Rom_5B5BC2)
	.endif
	.incbin "baserom.gba", 0x5b5bc6, 0x67c

	@ src/data/trainers.h:3787 trainers_line_3787 (+5 aliases)
	.globl gText_Rom_5B6242
gText_Rom_5B6242: @ 0x085B6242
	.string "ショウ$"
	.if (. - gText_Rom_5B6242) > 0x4
	.error "gText_Rom_5B6242 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5B6242) < 0x4
	.space 0x4 - (. - gText_Rom_5B6242)
	.endif
	.incbin "baserom.gba", 0x5b6246, 0x3d7

