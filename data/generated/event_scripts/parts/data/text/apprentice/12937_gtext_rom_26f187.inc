	@ data/text/apprentice.inc:322 gText_ApprenticeThanksNoHeldItem5
	.globl gText_Rom_26F187
gText_Rom_26F187: @ 0x0826F187
	.string "オーケー わかった!\nそれ なら じかんも いらないぜ\pきょうは サンキュー! じゃ またな!"
	.byte EOS
	.if (. - gText_Rom_26F187) > 0x30
	.error "gText_Rom_26F187 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F187) < 0x30
	.space 0x30 - (. - gText_Rom_26F187)
	.endif
