	@ data/text/obtain_item.inc:26 gText_NoRoomLeftForAnother
	.globl gText_Rom_2439A8
gText_Rom_2439A8: @ 0x082439A8
	.string "ざんねん! {STR_VAR_2}を\nいれる ばしょが いっぱいだ……$"
	.if (. - gText_Rom_2439A8) > 0x1b
	.error "gText_Rom_2439A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2439A8) < 0x1b
	.space 0x1b - (. - gText_Rom_2439A8)
	.endif
