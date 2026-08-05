	@ data/text/secret_base_trainers.inc:13 SecretBase_Text_Trainer0PostBattle
	.globl gText_Rom_245192
gText_Rom_245192: @ 0x08245192
	.string "ぼくの ひみつきち どうかなー\nまた あしたも あそびに きてね!$"
	.if (. - gText_Rom_245192) > 0x22
	.error "gText_Rom_245192 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245192) < 0x22
	.space 0x22 - (. - gText_Rom_245192)
	.endif
