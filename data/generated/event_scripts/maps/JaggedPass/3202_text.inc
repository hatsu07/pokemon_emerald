	@ data/maps/JaggedPass/scripts.inc:251 JaggedPass_Text_JulioPostBattle
	.globl gText_Rom_21608B
gText_Rom_21608B: @ 0x0821608B
	.string "じてんしゃが おもいっきり\nバウンド して おしりが イタイ……{EOS}"
	.if (. - gText_Rom_21608B) > 0x21
	.error "gText_Rom_21608B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21608B) < 0x21
	.space 0x21 - (. - gText_Rom_21608B)
	.endif
