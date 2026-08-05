	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:242 LilycoveCity_LilycoveMuseum_2F_Text_TokenOfGratitude
	.globl gText_Rom_20670F
gText_Rom_20670F: @ 0x0820670F
	.string "……これは わたしからの\nおれいの きもち です!$"
	.if (. - gText_Rom_20670F) > 0x1a
	.error "gText_Rom_20670F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20670F) < 0x1a
	.space 0x1a - (. - gText_Rom_20670F)
	.endif
