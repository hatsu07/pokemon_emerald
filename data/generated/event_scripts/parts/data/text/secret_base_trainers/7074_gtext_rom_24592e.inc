	@ data/text/secret_base_trainers.inc:160 SecretBase_Text_Trainer4PreChampion
	.globl gText_Rom_24592E
gText_Rom_24592E: @ 0x0824592E
	.string "すきな ばしょを さがして\nすきな ものを おく!\pすきな ポケモンを そだてて\nぼくも いっしょに つよくなる\pまいにち たのしいねー$"
	.if (. - gText_Rom_24592E) > 0x45
	.error "gText_Rom_24592E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24592E) < 0x45
	.space 0x45 - (. - gText_Rom_24592E)
	.endif
