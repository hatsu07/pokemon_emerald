	@ data/text/trainers.inc:2315 Route121_Text_JoyNotEnoughMons (+1 aliases)
	.globl gText_Rom_25F66C
gText_Rom_25F66C: @ 0x0825F66C
	.string "ユイ『あたしたちに しょうぶを いどむなら\nポケモン 2ひきは ひつよう だからね!$"
	.if (. - gText_Rom_25F66C) > 0x2b
	.error "gText_Rom_25F66C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F66C) < 0x2b
	.space 0x2b - (. - gText_Rom_25F66C)
	.endif
