	@ data/text/blend_master.inc:31 BerryBlender_Text_BlendMasterExplainBerryBlending
	.globl gText_Rom_27482B
gText_Rom_27482B: @ 0x0827482B
	.string "ふむむむっ!\pまあ かんたんな ことじゃ!\pきのみ ブレンダーの マークが\nじぶんの ところに きたら\lボタンを おせば いいだけじゃ!\pわしの かんぺきな おしかたを みれば\nすぐに わかるはずじゃ!$"
	.if (. - gText_Rom_27482B) > 0x66
	.error "gText_Rom_27482B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27482B) < 0x66
	.space 0x66 - (. - gText_Rom_27482B)
	.endif
