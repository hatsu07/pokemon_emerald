	@ data/maps/SlateportCity_Harbor/scripts.inc:383 SlateportCity_Harbor_Text_FerryServiceUnavailable
	.globl gText_Rom_209BC5
gText_Rom_209BC5: @ 0x08209BC5
	.string "えっ? ふね ですか?\pもうしわけ ございません げんざい\nれんらくせんは ないんです……$"
	.if (. - gText_Rom_209BC5) > 0x2e
	.error "gText_Rom_209BC5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209BC5) < 0x2e
	.space 0x2e - (. - gText_Rom_209BC5)
	.endif
