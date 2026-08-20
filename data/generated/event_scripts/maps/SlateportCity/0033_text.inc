	@ data/maps/SlateportCity/scripts.inc:1005 SlateportCity_Text_WhatsLongLineOverThere
	.globl gText_Rom_1DCCE4
gText_Rom_1DCCE4: @ 0x081DCCE4
	.string "なんなのかしら\nあの ぎょうれつ?{EOS}"
	.if (. - gText_Rom_1DCCE4) > 0x12
	.error "gText_Rom_1DCCE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCCE4) < 0x12
	.space 0x12 - (. - gText_Rom_1DCCE4)
	.endif
