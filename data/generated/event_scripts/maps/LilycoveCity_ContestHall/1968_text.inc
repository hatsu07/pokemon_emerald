	@ data/maps/LilycoveCity_ContestHall/scripts.inc:403 LilycoveCity_ContestHall_Text_ComeOnDear
	.globl gText_Rom_208166
gText_Rom_208166: @ 0x08208166
	.string "ほらっ がんばって！\nあなたの ポケモンが いちばんよっ！{EOS}"
	.if (. - gText_Rom_208166) > 0x1e
	.error "gText_Rom_208166 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208166) < 0x1e
	.space 0x1e - (. - gText_Rom_208166)
	.endif
