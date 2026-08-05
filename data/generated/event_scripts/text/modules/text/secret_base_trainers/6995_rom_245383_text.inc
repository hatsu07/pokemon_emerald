	@ data/text/secret_base_trainers.inc:49 SecretBase_Text_Trainer1PostBattle
	.globl gText_Rom_245383
gText_Rom_245383: @ 0x08245383
	.string "よしっ ぼくが いつか ひっこしたら\nこの ばしょは きみの ものさ!$"
	.if (. - gText_Rom_245383) > 0x24
	.error "gText_Rom_245383 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245383) < 0x24
	.space 0x24 - (. - gText_Rom_245383)
	.endif
