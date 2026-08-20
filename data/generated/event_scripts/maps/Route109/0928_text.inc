	@ data/maps/Route109/scripts.inc:488 Route109_Text_BrineyDeliverDevonGoods
	.globl gText_Rom_1E8BA7
gText_Rom_1E8BA7: @ 0x081E8BA7
	.string "ハギ『では にもつを とどけておいで\nわしは ここに いるから{EOS}"
	.if (. - gText_Rom_1E8BA7) > 0x20
	.error "gText_Rom_1E8BA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E8BA7) < 0x20
	.space 0x20 - (. - gText_Rom_1E8BA7)
	.endif
