	@ data/text/tv.inc:1174 GabbyAndTy_Text_TyDefeat (+1 aliases)
	.globl gText_Rom_2533BF
gText_Rom_2533BF: @ 0x082533BF
	.string "ダイ『いまの たたかいの すべてが\nこの カメラのなかに!"
	.byte EOS
	.if (. - gText_Rom_2533BF) > 0x1e
	.error "gText_Rom_2533BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2533BF) < 0x1e
	.space 0x1e - (. - gText_Rom_2533BF)
	.endif
