	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:221 LilycoveCity_LilycoveMuseum_2F_Text_ThisIsExhibitHall
	.globl gText_Rom_206497
gText_Rom_206497: @ 0x08206497
	.string "ここは とくべつ てんじしつ です{EOS}"
	.if (. - gText_Rom_206497) > 0x12
	.error "gText_Rom_206497 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_206497) < 0x12
	.space 0x12 - (. - gText_Rom_206497)
	.endif
