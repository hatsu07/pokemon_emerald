	@ data/maps/Route104/scripts.inc:1150 Route104_Text_BrendanLetsBattle (+1 aliases)
	.globl gText_Rom_1E80EC
gText_Rom_1E80EC: @ 0x081E80EC
	.string "ユウキ『どうだい オレと ここで\nしょうぶ してみるか?{EOS}"
	.if (. - gText_Rom_1E80EC) > 0x1d
	.error "gText_Rom_1E80EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E80EC) < 0x1d
	.space 0x1d - (. - gText_Rom_1E80EC)
	.endif
