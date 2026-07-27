	@ src/data/trainers.h:24407 trainers_line_24407 (+4 aliases)
	.globl gText_Rom_5B6EDA
gText_Rom_5B6EDA: @ 0x085B6EDA
	.string "ジロウ$"
	.if (. - gText_Rom_5B6EDA) > 0x4
	.error "gText_Rom_5B6EDA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5B6EDA) < 0x4
	.space 0x4 - (. - gText_Rom_5B6EDA)
	.endif
	.incbin "baserom.gba", 0x5b6ede, 0x97

	@ src/data/trainers.h:24407 trainers_line_24407 (+4 aliases)
	.globl gText_Rom_5B6F75
gText_Rom_5B6F75: @ 0x085B6F75
	.string "ジロウ$"
	.if (. - gText_Rom_5B6F75) > 0x4
	.error "gText_Rom_5B6F75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5B6F75) < 0x4
	.space 0x4 - (. - gText_Rom_5B6F75)
	.endif
	.incbin "baserom.gba", 0x5b6f79, 0x2c0

	@ src/data/abilities.h:214 abilities_line_214 (+1 aliases)
	.globl gText_Rom_5B7239
gText_Rom_5B7239: @ 0x085B7239
	.string "ほうし$"
	.if (. - gText_Rom_5B7239) > 0x4
	.error "gText_Rom_5B7239 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5B7239) < 0x4
	.space 0x4 - (. - gText_Rom_5B7239)
	.endif
	.incbin "baserom.gba", 0x5b723d, 0xf

	@ src/data/trainers.h:34147 trainers_line_34147
	.globl gText_Rom_5B724C
gText_Rom_5B724C: @ 0x085B724C
	.string "ジュン$"
	.if (. - gText_Rom_5B724C) > 0x4
	.error "gText_Rom_5B724C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5B724C) < 0x4
	.space 0x4 - (. - gText_Rom_5B724C)
	.endif
	.incbin "baserom.gba", 0x5b7250, 0x781

