	@ data/text/tv.inc:1153 GabbyAndTy_Text_TyDefeatFirstTime (+1 aliases)
	.globl gText_Rom_25339D
gText_Rom_25339D: @ 0x0825339D
	.string "ダイ『すごい トレーナーの はっけんだ\nこれは だいスクープだぞ!"
	.byte EOS
	.if (. - gText_Rom_25339D) > 0x22
	.error "gText_Rom_25339D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25339D) < 0x22
	.space 0x22 - (. - gText_Rom_25339D)
	.endif
