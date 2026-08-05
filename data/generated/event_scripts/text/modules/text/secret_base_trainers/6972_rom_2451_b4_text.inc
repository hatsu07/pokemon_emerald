	@ data/text/secret_base_trainers.inc:16 SecretBase_Text_Trainer0PreChampion
	.globl gText_Rom_2451B4
gText_Rom_2451B4: @ 0x082451B4
	.string "きみは もう ひみつきちを つくったかい?\pぼくは あっち こっち まわって\nやっと この ばしょに きめたんだ!\pゆっくり して いってね!$"
	.if (. - gText_Rom_2451B4) > 0x48
	.error "gText_Rom_2451B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2451B4) < 0x48
	.space 0x48 - (. - gText_Rom_2451B4)
	.endif
