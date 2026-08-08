	@ src/strings.c:736 gText_ExitingChat
	.globl gText_Rom_5CC697
gText_Rom_5CC697: @ 0x085CC697
	.string "さんかしゃが いなくなったので\nしゅうりょうします!$"
	.if (. - gText_Rom_5CC697) > 0x1b
	.error "gText_Rom_5CC697 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC697) < 0x1b
	.space 0x1b - (. - gText_Rom_5CC697)
	.endif
	@ Replaced baserom.gba range: offset=0x5CC6B2, size=0x1B
	.byte 0x78, 0xAE, 0x91, 0xAE, 0x19, 0x00, 0xF7, 0x00, 0x0B, 0x2E, 0x37, 0xFE, 0x17, 0x09, 0x10, 0x19
	.byte 0x44, 0x00, 0x06, 0x02, 0x0B, 0x2E, 0x0C, 0x1F, 0x0D, 0xAB, 0xFF

	@ src/strings.c:738 gText_RegisteredTextChangedOKToSave
	.globl gText_Rom_5CC6CD
gText_Rom_5CC6CD: @ 0x085CC6CD
	.string "とうろくが かわりました\nポケモンレポートに かきこみますか?$"
	.if (. - gText_Rom_5CC6CD) > 0x20
	.error "gText_Rom_5CC6CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC6CD) < 0x20
	.space 0x20 - (. - gText_Rom_5CC6CD)
	.endif
