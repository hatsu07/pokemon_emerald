	@ data/maps/SlateportCity/scripts.inc:968 SlateportCity_Text_SlateportWonderfulPlace
	.globl gText_Rom_1DCB43
gText_Rom_1DCB43: @ 0x081DCB43
	.string "うみの かおりが する ばしょで\nかいものが できるなんて……\pカイナって すてきな ところ!{EOS}"
	.if (. - gText_Rom_1DCB43) > 0x30
	.error "gText_Rom_1DCB43 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCB43) < 0x30
	.space 0x30 - (. - gText_Rom_1DCB43)
	.endif
