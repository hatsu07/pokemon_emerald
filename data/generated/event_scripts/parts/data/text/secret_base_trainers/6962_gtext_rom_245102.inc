	@ data/text/secret_base_trainers.inc:1 SecretBase_Text_Trainer0Intro
	.globl gText_Rom_245102
gText_Rom_245102: @ 0x08245102
	.string "きみは もう ひみつきちを つくったかい?\pぼくは あっち こっち まわって\nやっと この ばしょに きめたんだ!\pせっかく きたんだから\nポケモン しょうぶ しない?$"
	.if (. - gText_Rom_245102) > 0x55
	.error "gText_Rom_245102 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245102) < 0x55
	.space 0x55 - (. - gText_Rom_245102)
	.endif
