	@ data/text/trainers.inc:452 Route107_Text_TonyRematchPostBattle
	.globl gText_Rom_25A909
gText_Rom_25A909: @ 0x0825A909
	.string "たたかいの なかで おぼえたことが\nトレーナーとしての つよさに つながる!\lでっかい うみが そう いっていたぞー!{EOS}"
	.if (. - gText_Rom_25A909) > 0x3c
	.error "gText_Rom_25A909 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A909) < 0x3c
	.space 0x3c - (. - gText_Rom_25A909)
	.endif
