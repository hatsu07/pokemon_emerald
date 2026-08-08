	@ data/maps/LilycoveCity_House2/scripts.inc:21 LilycoveCity_House2_Text_NotAwakeYetHaveThis
	.globl gText_Rom_20A01E
gText_Rom_20A01E: @ 0x0820A01E
	.string "むにゃむにゃ……\pぼく ねぼけて いるから\nこれを あげる……$"
	.if (. - gText_Rom_20A01E) > 0x20
	.error "gText_Rom_20A01E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20A01E) < 0x20
	.space 0x20 - (. - gText_Rom_20A01E)
	.endif
