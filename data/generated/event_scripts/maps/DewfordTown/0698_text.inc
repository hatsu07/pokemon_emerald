	@ data/maps/DewfordTown/scripts.inc:690 DewfordTown_Text_XIsTheBiggestHappeningThingRight
	.globl gText_Rom_1E54D0
gText_Rom_1E54D0: @ 0x081E54D0
	.string "ぼく はやってる ものが すきで\nいつも チェック してるんだ\pねぇ 『{STR_VAR_1}』って\nしってるかい?\pもちろん しってるよね!\pだって いま\n『{STR_VAR_1}』が\lだいりゅうこう してるからね!\pきみの まわりでも\n『{STR_VAR_1}』が\lはやってる だろ?$"
	.if (. - gText_Rom_1E54D0) > 0x76
	.error "gText_Rom_1E54D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E54D0) < 0x76
	.space 0x76 - (. - gText_Rom_1E54D0)
	.endif
